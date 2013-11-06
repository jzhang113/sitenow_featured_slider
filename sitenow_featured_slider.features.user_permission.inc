<?php
/**
 * @file
 * sitenow_featured_slider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sitenow_featured_slider_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create featured_slider content'.
  $permissions['create featured_slider content'] = array(
    'name' => 'create featured_slider content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured_slider content'.
  $permissions['delete any featured_slider content'] = array(
    'name' => 'delete any featured_slider content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own featured_slider content'.
  $permissions['delete own featured_slider content'] = array(
    'name' => 'delete own featured_slider content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in slideshow_image_category'.
  $permissions['delete terms in slideshow_image_category'] = array(
    'name' => 'delete terms in slideshow_image_category',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any featured_slider content'.
  $permissions['edit any featured_slider content'] = array(
    'name' => 'edit any featured_slider content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own featured_slider content'.
  $permissions['edit own featured_slider content'] = array(
    'name' => 'edit own featured_slider content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in slideshow_image_category'.
  $permissions['edit terms in slideshow_image_category'] = array(
    'name' => 'edit terms in slideshow_image_category',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter featured_slider revision log entry'.
  $permissions['enter featured_slider revision log entry'] = array(
    'name' => 'enter featured_slider revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured_slider authored by option'.
  $permissions['override featured_slider authored by option'] = array(
    'name' => 'override featured_slider authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured_slider authored on option'.
  $permissions['override featured_slider authored on option'] = array(
    'name' => 'override featured_slider authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured_slider promote to front page option'.
  $permissions['override featured_slider promote to front page option'] = array(
    'name' => 'override featured_slider promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured_slider published option'.
  $permissions['override featured_slider published option'] = array(
    'name' => 'override featured_slider published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured_slider revision option'.
  $permissions['override featured_slider revision option'] = array(
    'name' => 'override featured_slider revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured_slider sticky option'.
  $permissions['override featured_slider sticky option'] = array(
    'name' => 'override featured_slider sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
