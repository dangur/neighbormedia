<?php
/**
 * @file
 * neighbor_media_home_page_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function neighbor_media_home_page_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create home_page_slide content'.
  $permissions['create home_page_slide content'] = array(
    'name' => 'create home_page_slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'reporter' => 'reporter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any home_page_slide content'.
  $permissions['delete any home_page_slide content'] = array(
    'name' => 'delete any home_page_slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own home_page_slide content'.
  $permissions['delete own home_page_slide content'] = array(
    'name' => 'delete own home_page_slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'reporter' => 'reporter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any home_page_slide content'.
  $permissions['edit any home_page_slide content'] = array(
    'name' => 'edit any home_page_slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own home_page_slide content'.
  $permissions['edit own home_page_slide content'] = array(
    'name' => 'edit own home_page_slide content',
    'roles' => array(
      'administrator' => 'administrator',
      'reporter' => 'reporter',
    ),
    'module' => 'node',
  );

  return $permissions;
}
