<?php
/**
 * @file
 * neighbor_media_neighbor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function neighbor_media_neighbor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'neighbor' => 'neighbor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'neighbor' => 'neighbor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'neighbor' => 'neighbor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'neighbor' => 'neighbor',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
