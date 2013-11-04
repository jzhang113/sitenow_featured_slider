<?php
/**
 * Implements hook_apps_app_info().
 */
function sitenow_featured_slider_apps_app_info() {
  return array(
    'configure form' => 'sitenow_featured_slider_apps_app_configure_form',
    'demo content module' => 'sitenow_featured_slider_content',
    //'status callback' => 'enterprise_blog_app_status',
    //'post install callback' => 'enterprise_blog_app_post_install',
  );
}

function sitenow_featured_slider_apps_app_configure_form($form, &$form_state) {
  // flush cache to assure all config got instantiated properly
  $form = array();

  return $form;
}

/*
 * Implements hook_form_FORM_ID_alter().
 */
function sitenow_featured_slider_form_apps_demo_content_form_alter(&$form, &$form_state, $form_id) {
  $app = $form['app']['#value']['machine_name'];
  if ($app === 'sitenow_featured_slider') {
    // If the SiteNowFeaturedSlider migration has run and the sitenow_featured_slider_content
    // module is currently disabled, keep it that way.
    if(migration_log('SiteNowFeaturedSlider') && !module_exists('sitenow_featured_slider_content')) {
      $form['demo_content_group']['demo_content_button']['#suffix'] = "Demo content has already been enabled for this site, the content is already available.";
      $form['demo_content_group']['demo_content_button']['#disabled'] = TRUE;
    }
  }
}
