<?php

/**
 * @file
 * Install profile for DrupalMel.
 */

/**
 * Include for Profiler library.
 */
!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('drupalmel');
