<?php
/**
 * @file
 * drupalmel_core.default_meetup_groups.inc
 */

/**
 * Implements hook_default_meetup_group().
 */
function drupalmel_core_default_meetup_group() {
  $export = array();

  $meetup_group = new stdClass();
  $meetup_group->disabled = FALSE; /* Edit this to true to make a default meetup_group disabled initially */
  $meetup_group->api_version = 1;
  $meetup_group->name = 'drupalmel';
  $meetup_group->label = 'DrupalMel';
  $meetup_group->api_key = '';
  $meetup_group->group_id = '3561922';
  $meetup_group->map = array(
    'entity' => array(
      'type' => 'node',
      'bundle' => 'event',
    ),
    'fields' => 'title = [meetup:name]
language = LANGUAGE_NONE
body[LANGUAGE_NONE][0][value] = \'[meetup:description]\'
body[LANGUAGE_NONE][0][format] = \'full_html\'
field_event_url[LANGUAGE_NONE][0][value] = \'[meetup:event_url]\'
field_event_address[LANGUAGE_NONE][0][country] = \'[meetup:venue:country]\'
field_event_address[LANGUAGE_NONE][0][locality] = \'[meetup:venue:city]\'
field_event_address[LANGUAGE_NONE][0][thoroughfare] = \'[meetup:venue:address_1]\'
field_event_address[LANGUAGE_NONE][0][premise] = \'[meetup:venue:address_2]\'
field_event_address[LANGUAGE_NONE][0][organisation_name] = \'[meetup:venue:name]\'
field_event_date[LANGUAGE_NONE][0][value] = \'[meetup:time]\'',
  );
  $export['drupalmel'] = $meetup_group;

  return $export;
}
