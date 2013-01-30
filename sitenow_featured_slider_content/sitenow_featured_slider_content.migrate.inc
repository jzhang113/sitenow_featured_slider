<?php

/**
 * @file
 * Migration code for SiteNow Featured Slider content.
 */

/**
 * Implements hook_migrate_api().
 */
function sitenow_featured_slider_content_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'SiteNowFeaturedSlider' => array('class_name' => 'SiteNowFeaturedSliderMigration'),
    ),
  );
  return $api;
}

// Initial SiteNowFeaturedSliderMigration class.
// @TODO: Refactor to abstract common parts into a "SiteNowMigration" class that
// could then be extended by each app.
class SiteNowFeaturedSliderMigration extends Migration {

  public function __construct() {
    parent::__construct(MigrateGroup::getInstance('SiteNow'));

    // Avoid known line ending issue: drupal.org/node/1705850
    ini_set('auto_detect_line_endings', TRUE);

    $this->description = t('Import SiteNow Featured Slider nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'sitenow_featured_slider_content') . '/import/slides.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('featured_slider');

    // Bring on the field mappings
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_featured_slider_link', 'link');

    // Copy an image file, write DB record to files table, and save in Field storage.
    // We map the filename (relative to the source_dir below) to the field itself.
    $this->addFieldMapping('field_featured_slider_image', 'image');
    // Here we specify the directory containing the source files.
    $this->addFieldMapping('field_featured_slider_image:source_dir')
         ->defaultValue(drupal_get_path('module', 'sitenow_featured_slider_content') . "/import");
    // And we map the alt and title values in the database to those on the image.
    $this->addFieldMapping('field_featured_slider_image:alt', 'image_alt');
    $this->addFieldMapping('field_featured_slider_image:title', 'image_title');

    // Author mapping. Defaults to user 1.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    $this->addFieldMapping('is_new', 'is_new')->defaultValue(TRUE);
    $this->addFieldMapping('promote', 'promote')->defaultValue(TRUE);
  }

  // Function for the CSV document
  function csvcolumns() {
    // Title", "Link", "Image"
    $columns[0] = array('nid', 'nid');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('link', 'Link');
    $columns[3] = array('image', 'Image');
    $columns[4] = array('image_alt', 'Image Alt');
    $columns[5] = array('image_title', 'Image Title');
    return $columns;
  }
}

/**
 * BatchAPI callback.
 *
 * @see sitenow_featured_slider_content_install()
 */
function _sitenow_featured_slider_content_import($operation, $type, &$context) {
  $context['message'] = t('@operation', array('@operation' => $type));
  $migration =  Migration::getInstance($operation);
  $migration->processImport();
}
