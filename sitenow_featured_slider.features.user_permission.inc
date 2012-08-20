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

  // Exported permission: create featured_slider content.
  $permissions['create featured_slider content'] = array(
    'name' => 'create featured_slider content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured_slider content.
  $permissions['delete any featured_slider content'] = array(
    'name' => 'delete any featured_slider content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured_slider content.
  $permissions['delete own featured_slider content'] = array(
    'name' => 'delete own featured_slider content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured_slider content.
  $permissions['edit any featured_slider content'] = array(
    'name' => 'edit any featured_slider content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured_slider content.
  $permissions['edit own featured_slider content'] = array(
    'name' => 'edit own featured_slider content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
