<?php
/**
 * @file
 * neighbor_media_social_media_links.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function neighbor_media_social_media_links_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_appearance';
  $strongarm->value = array(
    'orientation' => 'h',
    'show_name' => 0,
  );
  $export['social_media_links_appearance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_icon_style';
  $strongarm->value = 'elegantthemes:32';
  $export['social_media_links_icon_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_link_attributes';
  $strongarm->value = array(
    'target' => '_blank',
    'rel' => '<none>',
  );
  $export['social_media_links_link_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_platforms';
  $strongarm->value = array(
    'facebook' => array(
      'platform_value' => 'neighbormedia',
      'weight' => '-9',
    ),
    'twitter' => array(
      'platform_value' => 'neighbormedia',
      'weight' => '-8',
    ),
    'googleplus' => array(
      'platform_value' => '',
      'weight' => '-7',
    ),
    'linkedin' => array(
      'platform_value' => '',
      'weight' => '-6',
    ),
    'pinterest' => array(
      'platform_value' => '',
      'weight' => '-5',
    ),
    'vimeo' => array(
      'platform_value' => '',
      'weight' => '-4',
    ),
    'youtube' => array(
      'platform_value' => 'NeighborMedia',
      'weight' => '-3',
    ),
    'youtube_channel' => array(
      'platform_value' => '',
      'weight' => '-2',
    ),
    'rss' => array(
      'platform_value' => 'rss.xml',
      'weight' => '-1',
    ),
    'contact' => array(
      'platform_value' => '',
      'weight' => '0',
    ),
    'email' => array(
      'platform_value' => 'dan@dangur.com',
      'weight' => '1',
    ),
  );
  $export['social_media_links_platforms'] = $strongarm;

  return $export;
}
