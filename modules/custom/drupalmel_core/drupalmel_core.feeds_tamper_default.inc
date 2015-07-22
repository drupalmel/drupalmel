<?php
/**
 * @file
 * drupalmel_core.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function drupalmel_core_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'drupalmel_planet-blank_source_1-image_metatag';
  $feeds_tamper->importer = 'drupalmel_planet';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'image_metatag';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Image metatag';
  $export['drupalmel_planet-blank_source_1-image_metatag'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'drupalmel_planet-blank_source_2-description_metatag';
  $feeds_tamper->importer = 'drupalmel_planet';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'description_metatag';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Description metatag';
  $export['drupalmel_planet-blank_source_2-description_metatag'] = $feeds_tamper;

  return $export;
}
