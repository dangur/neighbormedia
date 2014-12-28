<?php
/**
 * @file
 * neighbor_media_featured_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function neighbor_media_featured_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer dynamic display blocks'.
  $permissions['administer dynamic display blocks'] = array(
    'name' => 'administer dynamic display blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ddblock',
  );

  // Exported permission: 'view dynamic display blocks'.
  $permissions['view dynamic display blocks'] = array(
    'name' => 'view dynamic display blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ddblock',
  );

  return $permissions;
}
