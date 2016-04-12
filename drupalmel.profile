<?php

/**
 * @file
 * Install profile for DrupalMel.
 */

/**
 * Include for Profiler library.
 */
$profiler_path = DRUPAL_ROOT . '/profiles/drupalmel/libraries/profiler/profiler.inc';
!function_exists('profiler_v2') ? require_once($profiler_path) : FALSE;
profiler_v2('drupalmel');
