<?php

/**
 * @file
 * drupalmel_core.apihub.inc
 */

/**
 * Implements hook_apihub_apis().
 */
function drupalmel_core_apihub_apis() {
  $export = array();

  $api = new apihubApi();
  $api->disabled = FALSE; /* Edit this to true to make a default api disabled initially */
  $api->api_version = 1;
  $api->name = 'slack';
  $api->admin_title = 'Slack';
  $api->admin_description = '';
  $api->url = 'http://drupalmelbourne.slack.com/api/';
  $api->docs = 'https://api.slack.com/methods';
  $export['slack'] = $api;

  return $export;
}

/**
 * Implements hook_apihub_methods().
 */
function drupalmel_core_apihub_methods() {
  $export = array();

  $method = new apihubMethod();
  $method->disabled = FALSE; /* Edit this to true to make a default method disabled initially */
  $method->api_version = 1;
  $method->api = 'slack';
  $method->name = 'a2069739d98cb2e96219413db8896309';
  $method->admin_title = 'users.admin.invite';
  $method->admin_description = 'This is an undocumented method and could break at any time.';
  $method->http_method = 'POST';
  $method->path = 'users.admin.invite';
  $method->parameters = array(
    'p0' => array(
      'id' => 'p0',
      'name' => 'email',
      'type' => 'text',
      'description' => '',
      'weight' => '-10',
      'options' => '',
      'required' => 1,
      'pid' => '',
    ),
  );
  $method->results = array();
  $method->settings = array(
    'apihub' => array(
      'root' => '',
      'pager' => array(
        'total' => '',
        'offset' => '',
      ),
      'offline' => 0,
    ),
  );
  $export['a2069739d98cb2e96219413db8896309'] = $method;

  $method = new apihubMethod();
  $method->disabled = FALSE; /* Edit this to true to make a default method disabled initially */
  $method->api_version = 1;
  $method->api = 'slack';
  $method->name = 'ae1804e855ad5bb06ec3abf06d79c01b';
  $method->admin_title = 'chat.postMessage';
  $method->admin_description = '';
  $method->http_method = 'POST';
  $method->path = 'chat.postMessage';
  $method->parameters = array(
    'p0' => array(
      'id' => 'p0',
      'name' => 'channel',
      'type' => 'text',
      'description' => 'Channel, private group, or IM channel to send message to. Can be an encoded ID, or a name. See below for more details.',
      'weight' => '-10',
      'options' => '',
      'required' => 1,
      'pid' => '',
    ),
    'p1' => array(
      'id' => 'p1',
      'name' => 'text',
      'type' => 'text',
      'description' => 'Text of the message to send.',
      'weight' => '-10',
      'options' => '',
      'required' => 1,
      'pid' => '',
    ),
    'p2' => array(
      'id' => 'p2',
      'name' => 'username',
      'type' => 'text',
      'description' => 'Name of bot.',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p3' => array(
      'id' => 'p3',
      'name' => 'as_user',
      'type' => 'boolean',
      'description' => 'Pass true to post the message as the authed user, instead of as a bot',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p4' => array(
      'id' => 'p4',
      'name' => 'parse',
      'type' => 'text',
      'description' => 'Change how messages are treated.',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p5' => array(
      'id' => 'p5',
      'name' => 'link_names',
      'type' => 'decimal',
      'description' => 'Find and link channel names and usernames.',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p6' => array(
      'id' => 'p6',
      'name' => 'attachments',
      'type' => 'text',
      'description' => 'Structured message attachments.',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p7' => array(
      'id' => 'p7',
      'name' => 'unfurl_links',
      'type' => 'boolean',
      'description' => 'Pass true to enable unfurling of primarily text-based content.',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p8' => array(
      'id' => 'p8',
      'name' => 'unfurl_media',
      'type' => 'boolean',
      'description' => 'Pass false to disable unfurling of media content.',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p9' => array(
      'id' => 'p9',
      'name' => 'icon_url',
      'type' => 'text',
      'description' => 'URL to an image to use as the icon for this message',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
    'p10' => array(
      'id' => 'p10',
      'name' => 'icon_emoji',
      'type' => 'text',
      'description' => 'emoji to use as the icon for this message. Overrides icon_url.',
      'weight' => '-10',
      'options' => '',
      'required' => 0,
      'pid' => '',
    ),
  );
  $method->results = array();
  $method->settings = array(
    'apihub' => array(
      'root' => '',
      'pager' => array(
        'total' => '',
        'offset' => '',
      ),
      'offline' => 0,
    ),
  );
  $export['ae1804e855ad5bb06ec3abf06d79c01b'] = $method;

  $method = new apihubMethod();
  $method->disabled = FALSE; /* Edit this to true to make a default method disabled initially */
  $method->api_version = 1;
  $method->api = 'slack';
  $method->name = 'f1c6c72d4f9ad868217a46d53ba89ad3';
  $method->admin_title = 'api.test';
  $method->admin_description = '';
  $method->http_method = 'POST';
  $method->path = 'api.test';
  $method->parameters = array();
  $method->results = array();
  $method->settings = array(
    'apihub' => array(
      'root' => '',
      'pager' => array(
        'total' => '',
        'offset' => '',
      ),
      'offline' => 0,
    ),
  );
  $export['f1c6c72d4f9ad868217a46d53ba89ad3'] = $method;

  $method = new apihubMethod();
  $method->disabled = FALSE; /* Edit this to true to make a default method disabled initially */
  $method->api_version = 1;
  $method->api = 'slack';
  $method->name = 'faca9d3433422f3fc19a4ca83e26b195';
  $method->admin_title = 'auth.test';
  $method->admin_description = '';
  $method->http_method = 'POST';
  $method->path = 'auth.test';
  $method->parameters = array();
  $method->results = array();
  $method->settings = array(
    'apihub' => array(
      'root' => '',
      'pager' => array(
        'total' => '',
        'offset' => '',
      ),
      'offline' => 0,
    ),
  );
  $export['faca9d3433422f3fc19a4ca83e26b195'] = $method;

  return $export;
}
