<?php
/**
 * @file
 * sitenow_featured_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sitenow_featured_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sitenow_featured_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function sitenow_featured_slider_image_default_styles() {
  $styles = array();

  // Exported image style: featured_slider.
  $styles['featured_slider'] = array(
    'name' => 'featured_slider',
    'label' => 'Featured Slider (700x250)',
    'effects' => array(
      13 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1250,
          'height' => 446,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 1,
          'style_name' => 'featured_slider',
        ),
        'weight' => 1,
      ),
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1250,
          'height' => 446,
        ),
        'weight' => 2,
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
      'name' => t('Slideshow image'),
      'base' => 'node_content',
      'description' => t('Use <em>slideshow images</em> to promote items in a rotating slideshow. These images can link to external or internal sources.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('The title of the <em>Slideshow image</em> will be used as the link text, if the link field is set. The title will be overlaid on the bottom of the image along with the description field. See the <a href="/admin/apps/local/sitenow_featured_slider/configure">demo content</a> for an example.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
