<?php
/**
 * @file
 * sitenow_featured_slider.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sitenow_featured_slider_taxonomy_default_vocabularies() {
  return array(
    'slideshow_image_category' => array(
      'name' => 'Slideshow Image Category',
      'machine_name' => 'slideshow_image_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
