<?php
/**
 * @file
 * drupalmel_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalmel_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access rules link slack_invite_approve'.
  $permissions['access rules link slack_invite_approve'] = array(
    'name' => 'access rules link slack_invite_approve',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'rules_link',
  );

  return $permissions;
}
