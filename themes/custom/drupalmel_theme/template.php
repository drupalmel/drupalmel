<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_preproess().
 *
 * @param $variables
 * @param $hook
 */
function drupalmel_theme_preprocess(&$variables, $hook) {}

/**
 * Implements hook_preprocess_page().
 *
 * @param $variables
 */
function drupalmel_theme_preprocess_page(&$variables) {
  $variables['logo'] = NULL;
}

/**
 * Implements hook_preprocess_panels_pane().
 *
 * @param $variables
 */
function drupalmel_theme_preprocess_panels_pane(&$variables) {
  switch ($variables['pane']->subtype) {
    // Use SVG logo.
    case 'blockify-blockify-logo':
      $variables['content'] = str_replace('.png', '.svg', $variables['content']);
      break;
  }
}

/**
 * Implements hook_preprocess_panels_pane().
 *
 * @param $variables
 */
function drupalmel_theme_preprocess_semantic_panels_pane(&$variables) {
  switch ($variables['pane']->subtype) {
    // Add SPANs to site name string.
    case 'blockify-blockify-site-name':
      preg_match_all('/([A-Z][a-z]+|[0-9]+)/', variable_get('site_name', NULL), $parts);

      $name = '';
      foreach ($parts[1] as $delta => $part) {
        $id = strtolower($part);
        $name .= "<span class='part-{$delta} part-{$id}'>{$part}</span>";
      }
      $variables['content_html'] = str_replace('<span>' . variable_get('site_name', NULL) . '</span>', $name, $variables['content_html']);
      break;
  }
}
