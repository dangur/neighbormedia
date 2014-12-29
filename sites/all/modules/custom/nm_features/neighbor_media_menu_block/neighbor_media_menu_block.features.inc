<?php
/**
 * @file
 * neighbor_media_menu_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function neighbor_media_menu_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
