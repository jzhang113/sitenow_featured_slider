<?php
/**
 * @file
 * sitenow_featured_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sitenow_featured_slider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sitenow_featured_slider_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function sitenow_featured_slider_image_default_styles() {
  $styles = array();

  // Exported image style: featured_slider
  $styles['featured_slider'] = array(
    'name' => 'featured_slider',
    'effects' => array(
      2 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '700',
          'height' => '250',
          'keepproportions' => 1,
          'style_name' => 'featured_slider',
        ),
        'weight' => '0',
      ),
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '700',
          'height' => '250',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function sitenow_featured_slider_node_info() {
  $items = array(
    'featured_slider' => array(
      'name' => t('Featured Slider'),
      'base' => 'node_content',
      'description' => t('Adds items to the <strong><em>Featured Slider</em></strong>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
