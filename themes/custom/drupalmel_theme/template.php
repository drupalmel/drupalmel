<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess_page().
 */
function drupalmel_theme_preprocess_page(&$variables) {
  // Disable logo element.
  $variables['logo'] = NULL;
}

/**
 * Implements hook_preprocess_panels_pane().
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
 */
function drupalmel_theme_preprocess_semantic_panels_pane(&$variables) {
  switch ($variables['pane']->subtype) {
    // Add <span> to site name string.
    case 'blockify-blockify-site-name':
      preg_match_all('/([A-Z][a-z]+|[0-9]+)/', variable_get('site_name', NULL), $parts);

      $name = '';
      foreach ($parts[1] as $delta => $part) {
        $id = drupal_clean_css_identifier($part);
        $name .= '<span class="part-' . $delta . ' part-' . $id . '">' . filter_xss($part) . '</span>';
      }
      $variables['content_html'] = str_replace('<span>' . variable_get('site_name', NULL) . '</span>', $name, $variables['content_html']);
      break;
  }
}

/**
 * Implements hook_form_alter().
 */
function drupalmel_theme_form_alter(&$form, $form_state, $form_id) {
  if (isset($form['#entity_type']) && $form['#entity_type'] == 'entityform') {
    foreach (element_children($form) as $child) {
      $langcode = isset($form['child']['#language']) ? $form['child']['#language'] : LANGUAGE_NONE;
      if (isset($form[$child][$langcode][0])) {
        foreach (element_children($form[$child][$langcode][0]) as $value) {
          if (in_array($value, array('email', 'value')) && $form[$child][$langcode][0][$value]['#type'] == 'textfield') {
            $form[$child][$langcode][0][$value]['#attributes']['placeholder'] = $form[$child][$langcode][0][$value]['#title'];
            $form[$child][$langcode][0][$value]['#title_display'] = 'invisible';
          }
        }
      }
    }

    $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';
  }
}
