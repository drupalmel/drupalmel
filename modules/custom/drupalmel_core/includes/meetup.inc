<?php

/**
 * @file
 * Meetup.com module integration.
 */

/**
 * Implements hook_default_meetup_group_alter().
 *
 * @param $meetup_groups
 */
function drupalmel_core_default_meetup_group_alter(&$meetup_groups) {
  $meetup_groups['drupalmel']->api_key = variable_get('meetup_apikey', '');
}
