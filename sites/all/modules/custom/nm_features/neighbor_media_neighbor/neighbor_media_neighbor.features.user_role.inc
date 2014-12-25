<?php
/**
 * @file
 * neighbor_media_neighbor.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function neighbor_media_neighbor_user_default_roles() {
  $roles = array();

  // Exported role: neighbor.
  $roles['neighbor'] = array(
    'name' => 'neighbor',
    'weight' => 4,
  );

  return $roles;
}
