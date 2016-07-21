<?php

/**
 * @file
 * drupalmel_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalmel_core_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_slack_invite_approve'] = entity_import('rules_config', '{ "rules_link_condition_slack_invite_approve" : {
      "LABEL" : "Rules link: Slack invite: Approve condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "AND" : []
    }
  }');
  $items['rules_link_set_slack_invite_approve'] = entity_import('rules_config', '{ "rules_link_set_slack_invite_approve" : {
      "LABEL" : "Rules link: Slack invite: Approve rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "apihub" ],
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "handler" : { "handler" : "Drupal handler" },
              "result" : {
                "invite_result" : "Invitation result",
                "message_result" : "Message result"
              }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform" ],
                  "type" : "entityform",
                  "bundle" : { "value" : { "slack_invite" : "slack_invite" } }
                }
              }
            ],
            "DO" : [
              { "apihub_handler_apihubHandlerDrupal" : {
                  "USING" : { "auth" : "token=' . variable_get('slack_api_token', '') . '" },
                  "PROVIDE" : { "handler" : { "handler" : "Drupal handler" } }
                }
              },
              { "apihub_action_a2069739d98cb2e96219413db8896309" : {
                  "USING" : {
                    "handler" : [ "handler" ],
                    "email" : [ "entityform:field-email-address" ]
                  },
                  "PROVIDE" : { "result" : { "invite_result" : "Invitation result" } }
                }
              },
              { "apihub_action_ae1804e855ad5bb06ec3abf06d79c01b" : {
                  "USING" : {
                    "handler" : [ "handler" ],
                    "channel" : "#_random",
                    "text" : "[entityform:field-first-name] [entityform:field-last-name] ([entityform:field-email-address]) has been invitated to Slack.",
                    "username" : "melbourne.drupal.org.au",
                    "icon_url" : "http:\\/\\/www.gravatar.com\\/avatar\\/31266bcfe7128aaf0854513cf3fa7563"
                  },
                  "PROVIDE" : { "result" : { "message_result" : "Message result" } }
                }
              },
              { "drupal_message" : { "message" : "Thank you, [entityform:field-first-name]\\u0027s Slack invitation has been sent." } }
            ],
            "LABEL" : "Slack invite"
          }
        }
      ]
    }
  }');
  $items['rules_slack_invite_notify_slack'] = entity_import('rules_config', '{ "rules_slack_invite_notify_slack" : {
      "LABEL" : "Slack invite: Notify slack",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DrupalMel" ],
      "REQUIRES" : [ "rules", "apihub", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "slack_invite" : "slack_invite" } }
          }
        }
      ],
      "DO" : [
        { "apihub_handler_apihubHandlerDrupal" : {
            "USING" : { "auth" : "token=' . variable_get('slack_api_token', '') . '" },
            "PROVIDE" : { "handler" : { "handler" : "Drupal handler" } }
          }
        },
        { "apihub_action_ae1804e855ad5bb06ec3abf06d79c01b" : {
            "USING" : {
              "handler" : [ "handler" ],
              "channel" : "#_random",
              "text" : "[entityform:field-first-name] [entityform:field-last-name] ([entityform:field-email-address]) has requested an invitation to Slack.\\r\\n\\r\\nIf you know this individual as DrupalMelbournian, click the following link to approve this request: [site:url]slack-invite\\/[entityform:entityform-id]\\/[entityform:rules_link_token_anonymous]",
              "username" : "melbourne.drupal.org.au",
              "unfurl_links" : "0",
              "unfurl_media" : "0",
              "icon_url" : "http:\\/\\/www.gravatar.com\\/avatar\\/31266bcfe7128aaf0854513cf3fa7563"
            },
            "PROVIDE" : { "result" : { "result" : "Result" } }
          }
        }
      ]
    }
  }');
  return $items;
}
