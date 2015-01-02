<?php
/**
 * @file
 * neighbor_media_home_page_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function neighbor_media_home_page_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
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
function neighbor_media_home_page_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function neighbor_media_home_page_slideshow_node_info() {
  $items = array(
    'home_page_slide' => array(
      'name' => t('Home Page Slide'),
      'base' => 'node_content',
      'description' => t('A slide that rotates on the home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
