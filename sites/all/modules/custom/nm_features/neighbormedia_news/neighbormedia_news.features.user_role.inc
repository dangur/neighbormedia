<?php
/**
 * @file
 * neighbormedia_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function neighbormedia_news_user_default_roles() {
  $roles = array();

  // Exported role: reporter.
  $roles['reporter'] = array(
    'name' => 'reporter',
    'weight' => 3,
  );

  return $roles;
}
