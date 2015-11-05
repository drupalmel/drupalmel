<?php
/**
 * @file
 * drupalmel_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalmel_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apihub" && $api == "apihub") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "meetup" && $api == "default_meetup_groups") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalmel_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function drupalmel_core_default_entityform_type() {
  $items = array();
  $items['slack_invite'] = entity_import('entityform_type', '{
    "type" : "slack_invite",
    "label" : "Slack invite",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Request invitiation",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "current_type" : "slack_invite",
      "enable_block" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function drupalmel_core_image_default_styles() {
  $styles = array();

  // Exported image style: media.
  $styles['media'] = array(
    'label' => 'media',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 64,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function drupalmel_core_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog: post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blog_feed' => array(
      'name' => t('Blog: feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function drupalmel_core_default_rules_link() {
  $items = array();
  $items['slack_invite_approve'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Approve",
      "link_type" : "token",
      "bundles" : { "slack_invite" : "slack_invite" },
      "entity_link" : 0,
      "view_mode" : {
        "full" : "full",
        "email" : "email",
        "confirmation" : "confirmation",
        "download" : "download",
        "table" : "table",
        "review" : "review",
        "token" : "token"
      },
      "confirm_question" : "",
      "confirm_description" : ""
    },
    "name" : "slack_invite_approve",
    "label" : "Slack invite: Approve",
    "path" : "slack-invite",
    "entity_type" : "entityform"
  }');
  return $items;
}
