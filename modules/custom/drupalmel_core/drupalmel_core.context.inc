<?php
/**
 * @file
 * drupalmel_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalmel_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-development';
  $context->description = 'Contains configuration for Development server.';
  $context->tag = 'DrupalMel::Servers';
  $context->conditions = array(
    'server_vars' => array(
      'values' => array(
        'variables' => array(
          0 => array(
            'name' => 'HTTP_HOST',
            'op' => 'strpos',
            'negate' => 1,
            'value' => 'melbourne.drupal.org.au',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'coffee' => 'enable',
      'context_ui' => 'enable',
      'field_ui' => 'enable',
      'module_filter' => 'enable',
      'views_ui' => 'enable',
    ),
    'variable' => array(
      '#set' => array(
        'cache' => 0,
        'cache_lifetime' => 0,
        'page_cache_maximum_age' => 0,
        'prepro' => 0,
        'preprocess_css' => 0,
        'preprocess_js' => 0,
      ),
      'cache' => 0,
      'cache_lifetime' => '0',
      'page_cache_maximum_age' => '0',
      'prepro' => array(
        'filetypes' => array(
          'sass' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
          'scss' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
        ),
        'additional' => array(
          'sassy' => array(
            'watchdog' => 1,
            'debug' => 1,
            'errors' => 'output',
            'style' => 'nested',
          ),
        ),
        'show_warnings' => 1,
      ),
      'preprocess_css' => 0,
      'preprocess_js' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contains configuration for Development server.');
  t('DrupalMel::Servers');
  $export['server-development'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'theme-drupalmel';
  $context->description = 'Configuration related to the DrupalMel theme.';
  $context->tag = 'DrupalMel::Themes';
  $context->conditions = array(
    'theme' => array(
      'values' => array(
        'drupalmel_theme' => 'drupalmel_theme',
      ),
    ),
  );
  $context->reactions = array(
    'navbar_suppress' => 1,
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Configuration related to the DrupalMel theme.');
  t('DrupalMel::Themes');
  $export['theme-drupalmel'] = $context;

  return $export;
}
