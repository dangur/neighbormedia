<?php
/**
 * @file
 * neighbor_media_featured_news.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function neighbor_media_featured_news_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_featured_news';
  $strongarm->value = 0;
  $export['comment_anonymous_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_featured_news';
  $strongarm->value = 1;
  $export['comment_default_mode_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_featured_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_featured_news';
  $strongarm->value = '2';
  $export['comment_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_featured_news';
  $strongarm->value = 1;
  $export['comment_form_location_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_featured_news';
  $strongarm->value = '1';
  $export['comment_preview_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_featured_news';
  $strongarm->value = 1;
  $export['comment_subject_field_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_blocks';
  $strongarm->value = array(
    'views:featured_news-block:View: Featured News' => 'views:featured_news-block:View: Featured News',
    'block:1:login' => 0,
    'comment:recent:Recent comments' => 0,
    'devel:execute_php:Execute PHP' => 0,
    'devel:switch_user:Switch user' => 0,
    'menu:devel:Development' => 0,
    'menu:features:Features' => 0,
    'node:recent:Recent content' => 0,
    'node:syndicate:Syndicate' => 0,
    'search:form:Search form' => 0,
    'shortcut:shortcuts:Shortcuts' => 0,
    'social_media_links:social-media-links:Social Media Links' => 0,
    'social_share:social_share:Social Share' => 0,
    'system:main-menu:Main menu' => 0,
    'system:main:Main page content' => 0,
    'system:management:Management' => 0,
    'system:navigation:Navigation' => 0,
    'system:powered-by:Powered by Drupal' => 0,
    'system:help:System help' => 0,
    'system:user-menu:User menu' => 0,
    'user:login:User login' => 0,
    'user:new:Who\'s new' => 0,
    'user:online:Who\'s online' => 0,
    'views:slideshow-block:Slideshow' => 0,
    'views:views_slideshow_xtra-block_1:Views Slideshow Xtra' => 0,
  );
  $export['ddblock_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_block_ddblock_3_settings';
  $strongarm->value = array(
    'content_type' => 'none',
    'folder' => 'images/ddblock',
    'ignore_files' => '',
    'input_type' => 'instance',
    'nodes' => '',
    'node_body_teaser' => 'body',
    'order' => 'asc',
    'output' => 'view_fields',
    'widget' => 'cycle',
  );
  $export['ddblock_block_ddblock_3_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_block_ddblock_cycle_1_cycle_settings';
  $strongarm->value = array(
    'advanced' => 1,
    'container_advanced' => 'div.slide',
    'container_basic' => 'div.slide',
    'custom_jquery' => '',
    'fx' => 'fade',
    'easing_out' => 'linear',
    'easing_in' => 'linear',
    'height' => '195',
    'image_height' => '183',
    'image_width' => '183',
    'image_style_toggle' => '1',
    'image_style_slide' => 'large',
    'image_style_pager_item' => 'thumbnail',
    'max_image' => '5',
    'next' => '0',
    'nr_of_pager_items' => 4,
    'overflow' => '1',
    'pager' => 'prev-next-pager',
    'pager_container' => 'pager-item',
    'pager_disable_click' => 1,
    'pager_event' => 'click',
    'pager_fast' => '1',
    'pager_height' => '25',
    'pager_pause' => '1',
    'pager_width' => '195',
    'pager_position' => 'top',
    'pager_prev_next_loop' => 1,
    'pager_scrollable_loop' => 1,
    'pager_toggle' => '1',
    'pager2' => '0',
    'pager2_event' => 'click',
    'pager2_slide_prev' => '',
    'pager2_slide_next' => '',
    'pager2_slide_hide' => '0',
    'pause' => '1',
    'slide_text' => 1,
    'slide_text_after_effect' => 'fadeIn',
    'slide_text_after_speed' => 1000,
    'slide_text_after_easing' => 'linear',
    'slide_text_before_effect' => 'fadeOut',
    'slide_text_before_speed' => 250,
    'slide_text_before_easing' => 'linear',
    'slide_text_container' => 'div.slide-text',
    'slide_text_jquery' => 0,
    'slide_text_position' => 'bottom',
    'speed' => '500',
    'template' => 'none',
    'template_size' => 'default',
    'timeout' => '5000',
    'width' => '195',
  );
  $export['ddblock_block_ddblock_cycle_1_cycle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_block_ddblock_cycle_2_cycle_mapping_settings';
  $strongarm->value = array(
    0 => array(
      'target' => 'node_id',
      'source' => 'none',
    ),
    1 => array(
      'target' => 'slide_image',
      'source' => 'vsx_slide_image',
    ),
    2 => array(
      'target' => 'slide_title',
      'source' => 'title',
    ),
    3 => array(
      'target' => 'slide_text',
      'source' => 'none',
    ),
    4 => array(
      'target' => 'slide_read_more',
      'source' => 'none',
    ),
    5 => array(
      'target' => 'pager_image',
      'source' => 'none',
    ),
    6 => array(
      'target' => 'pager_text',
      'source' => 'none',
    ),
    7 => array(
      'target' => '',
      'source' => 'none',
    ),
    8 => array(
      'target' => '',
      'source' => 'none',
    ),
    9 => array(
      'target' => '',
      'source' => 'none',
    ),
    10 => array(
      'target' => '',
      'source' => 'none',
    ),
    11 => array(
      'target' => '',
      'source' => 'none',
    ),
    12 => array(
      'target' => '',
      'source' => 'none',
    ),
    13 => array(
      'target' => '',
      'source' => 'none',
    ),
    14 => array(
      'target' => '',
      'source' => 'none',
    ),
    15 => array(
      'target' => '',
      'source' => 'none',
    ),
  );
  $export['ddblock_block_ddblock_cycle_2_cycle_mapping_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_block_ddblock_cycle_2_cycle_settings';
  $strongarm->value = array(
    'advanced' => '1',
    'container_advanced' => 'div.slide',
    'container_basic' => 'div.slide',
    'custom_jquery' => '',
    'fx' => 'fade',
    'easing_out' => 'linear',
    'easing_in' => 'linear',
    'height' => '195',
    'image_height' => '183',
    'image_width' => '183',
    'image_style_toggle' => 0,
    'image_style_slide' => 'none',
    'image_style_pager_item' => 'none',
    'max_image' => 5,
    'next' => '0',
    'nr_of_pager_items' => '4',
    'overflow' => '1',
    'pager' => 'none',
    'pager_container' => 'pager-item',
    'pager_disable_click' => '1',
    'pager_event' => 'click',
    'pager_fast' => '1',
    'pager_height' => '25',
    'pager_pause' => '1',
    'pager_width' => '195',
    'pager_position' => 'top',
    'pager_prev_next_loop' => '1',
    'pager_scrollable_loop' => '1',
    'pager_toggle' => '1',
    'pager2' => '0',
    'pager2_event' => 'click',
    'pager2_slide_prev' => '',
    'pager2_slide_next' => '',
    'pager2_slide_hide' => '0',
    'pause' => '1',
    'slide_text' => '1',
    'slide_text_after_effect' => 'fadeIn',
    'slide_text_after_speed' => '1000',
    'slide_text_after_easing' => 'linear',
    'slide_text_before_effect' => 'fadeOut',
    'slide_text_before_speed' => '250',
    'slide_text_before_easing' => 'linear',
    'slide_text_container' => 'div.slide-text',
    'slide_text_jquery' => '0',
    'slide_text_position' => 'bottom',
    'speed' => '500',
    'template' => 'none',
    'template_size' => 'default',
    'timeout' => '5000',
    'width' => '195',
  );
  $export['ddblock_block_ddblock_cycle_2_cycle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_block_ddblock_cycle_3_cycle_mapping_settings';
  $strongarm->value = array(
    0 => array(
      'target' => 'node_id',
      'source' => 'none',
    ),
    1 => array(
      'target' => 'slide_image',
      'source' => 'field_featured_image',
    ),
    2 => array(
      'target' => 'slide_title',
      'source' => 'title',
    ),
    3 => array(
      'target' => 'slide_text',
      'source' => 'field_featured_side_text',
    ),
    4 => array(
      'target' => 'slide_read_more',
      'source' => 'none',
    ),
    5 => array(
      'target' => 'pager_image',
      'source' => 'field_featured_image_1',
    ),
    6 => array(
      'target' => 'pager_text',
      'source' => 'field_featured_side_text',
    ),
    7 => array(
      'target' => '',
      'source' => 'none',
    ),
    8 => array(
      'target' => '',
      'source' => 'none',
    ),
    9 => array(
      'target' => '',
      'source' => 'none',
    ),
    10 => array(
      'target' => '',
      'source' => 'none',
    ),
    11 => array(
      'target' => '',
      'source' => 'none',
    ),
    12 => array(
      'target' => '',
      'source' => 'none',
    ),
    13 => array(
      'target' => '',
      'source' => 'none',
    ),
    14 => array(
      'target' => '',
      'source' => 'none',
    ),
    15 => array(
      'target' => '',
      'source' => 'none',
    ),
  );
  $export['ddblock_block_ddblock_cycle_3_cycle_mapping_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_block_ddblock_cycle_3_cycle_settings';
  $strongarm->value = array(
    'advanced' => '1',
    'container_advanced' => 'div.slide',
    'container_basic' => 'div.slide',
    'custom_jquery' => '',
    'fx' => 'fade',
    'easing_out' => 'linear',
    'easing_in' => 'linear',
    'height' => '195',
    'image_height' => '183',
    'image_width' => '183',
    'image_style_toggle' => 0,
    'image_style_slide' => 'none',
    'image_style_pager_item' => 'none',
    'max_image' => 5,
    'next' => '0',
    'nr_of_pager_items' => '4',
    'overflow' => '1',
    'pager' => 'custom-pager',
    'pager_container' => '.custom-pager-item',
    'pager_disable_click' => '1',
    'pager_event' => 'click',
    'pager_fast' => '1',
    'pager_height' => '25',
    'pager_pause' => '1',
    'pager_width' => '195',
    'pager_position' => 'bottom',
    'pager_prev_next_loop' => '1',
    'pager_scrollable_loop' => '1',
    'pager_toggle' => '1',
    'pager2' => '0',
    'pager2_event' => 'click',
    'pager2_slide_prev' => '',
    'pager2_slide_next' => '',
    'pager2_slide_hide' => '0',
    'pause' => '1',
    'slide_text' => '1',
    'slide_text_after_effect' => 'fadeIn',
    'slide_text_after_speed' => '1000',
    'slide_text_after_easing' => 'linear',
    'slide_text_before_effect' => 'fadeOut',
    'slide_text_before_speed' => '250',
    'slide_text_before_easing' => 'linear',
    'slide_text_container' => 'div.slide-text',
    'slide_text_jquery' => '0',
    'slide_text_position' => 'bottom',
    'speed' => '500',
    'template' => 'upright40p',
    'template_size' => 'default',
    'timeout' => '5000',
    'width' => '195',
  );
  $export['ddblock_block_ddblock_cycle_3_cycle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ddblock_node_type';
  $strongarm->value = array(
    'featured_news' => 'featured_news',
    'article' => 0,
    'page' => 0,
    'vsx_slide' => 0,
    'webform' => 0,
  );
  $export['ddblock_node_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__featured_news';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_featured_news';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_featured_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_featured_news';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_featured_news';
  $strongarm->value = '1';
  $export['node_preview_featured_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_featured_news';
  $strongarm->value = 1;
  $export['node_submitted_featured_news'] = $strongarm;

  return $export;
}
