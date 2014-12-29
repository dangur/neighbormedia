<?php
/**
 * @file
 * neighbor_media_user_stories.features.inc
 */

/**
 * Implements hook_views_api().
 */
function neighbor_media_user_stories_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function neighbor_media_user_stories_default_profile2_type() {
  $items = array();
  $items['neighbor_media_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "neighbor_media_profile",
    "label" : "Neighbor Media Profile",
    "weight" : "-1",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
