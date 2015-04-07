<?php
/**
 * @file
 * sitenow_featured_slider.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sitenow_featured_slider_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-featured_slider-field_featured_slider_category'
  $field_instances['node-featured_slider-field_featured_slider_category'] = array(
    'bundle' => 'featured_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This a reference to the <a href="/admin/structure/taxonomy/slideshow_image_category">slideshow image category taxonomy</a>. You can add terms to that vocabulary and they will appear as a drop-down list. This allows you to create slideshows with images from a selected category. Only webmasters have permission to edit taxonomies. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_slider_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-featured_slider-field_featured_slider_image'
  $field_instances['node-featured_slider-field_featured_slider_image'] = array(
    'bundle' => 'featured_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Upload an image to display on the Featured Slider.<br>
Suggested minimum dimensions for an uploaded image are 1250 (width) x 446 (height) pixels.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'featured_slider',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_slider_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'featured_slider',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '4 MB',
      'max_resolution' => '2000x2000',
      'min_resolution' => '600x215',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 0,
        'manualcrop_keyboard' => TRUE,
        'manualcrop_maximize_default_crop_area' => FALSE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'featured_slider' => 'featured_slider',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-featured_slider-field_featured_slider_link'
  $field_instances['node-featured_slider-field_featured_slider_link'] = array(
    'bundle' => 'featured_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a URL for this content to link to. The title will be the text displayed for your link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_slider_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-featured_slider-field_slider_description'
  $field_instances['node-featured_slider-field_slider_description'] = array(
    'bundle' => 'featured_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a description for you featured image. This field is limited to a maximum of 200 characters.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slider_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 180,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Description');
  t('Enter a description for you featured image. This field is limited to a maximum of 200 characters.');
  t('Image');
  t('Link');
  t('Provide a URL for this content to link to. The title will be the text displayed for your link.');
  t('This a reference to the <a href="/admin/structure/taxonomy/slideshow_image_category">slideshow image category taxonomy</a>. You can add terms to that vocabulary and they will appear as a drop-down list. This allows you to create slideshows with images from a selected category. Only webmasters have permission to edit taxonomies. ');
  t('Upload an image to display on the Featured Slider.<br>
Suggested minimum dimensions for an uploaded image are 1250 (width) x 446 (height) pixels.');

  return $field_instances;
}
