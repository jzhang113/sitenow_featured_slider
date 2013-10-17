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

  // Exported field_instance: 'node-featured_slider-field_featured_slider_image'
  $field_instances['node-featured_slider-field_featured_slider_image'] = array(
    'bundle' => 'featured_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Upload an image to display on the Featured Slider',
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
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '600x215',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 1,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'articles_img_left' => 0,
          'articles_img_top' => 0,
          'featured_slider' => 0,
          'person_large' => 0,
          'person_small__100x100' => 0,
        ),
        'manualcrop_styles_list' => array(
          'articles_img_left' => 0,
          'articles_img_top' => 0,
          'featured_slider' => 'featured_slider',
          'person_large' => 0,
          'person_small__100x100' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
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
  t('Description');
  t('Enter a description for you featured image. This field is limited to a maximum of 200 characters.');
  t('Image');
  t('Link');
  t('Provide a URL for this content to link to. The title will be the text displayed for your link.');
  t('Upload an image to display on the Featured Slider');

  return $field_instances;
}
