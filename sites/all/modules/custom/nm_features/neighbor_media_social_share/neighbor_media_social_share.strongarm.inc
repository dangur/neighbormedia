<?php
/**
 * @file
 * neighbor_media_social_share.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function neighbor_media_social_share_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_block';
  $strongarm->value = 1;
  $export['social_share_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_block_settings';
  $strongarm->value = array(
    'social_share_theme' => 'social_share_large_icon',
    'social_share_show_label' => 1,
    'social_share_title' => '[current-page:title]',
    'social_share_url' => '[current-page:url:absolute]',
    'social_share_description' => '',
    'social_share_image' => '',
    'social_share_networks' => array(
      'delicious' => 0,
      'digg' => 0,
      'facebook' => 1,
      'googleplus' => 0,
      'hyves' => 0,
      'linkedin' => 0,
      'msnlive' => 0,
      'myspace' => 0,
      'orkut' => 0,
      'pinterest' => 0,
      'reddit' => 0,
      'stumbleupon' => 0,
      'twitter' => 1,
      'yahoo' => 0,
    ),
  );
  $export['social_share_block_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_article';
  $strongarm->value = 1;
  $export['social_share_enabled_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_page';
  $strongarm->value = 0;
  $export['social_share_enabled_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_label';
  $strongarm->value = array(
    'en' => 'Share to',
  );
  $export['social_share_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_max_desc_length';
  $strongarm->value = '50';
  $export['social_share_max_desc_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_new_window';
  $strongarm->value = 1;
  $export['social_share_new_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_twitter_truncate';
  $strongarm->value = 0;
  $export['social_share_twitter_truncate'] = $strongarm;

  return $export;
}
