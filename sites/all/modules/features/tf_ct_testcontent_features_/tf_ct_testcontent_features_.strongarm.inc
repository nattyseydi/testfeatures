<?php
/**
 * @file
 * tf_ct_testcontent_features_.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function tf_ct_testcontent_features__strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_testcontent';
  $strongarm->value = 0;
  $export['comment_anonymous_testcontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_testcontent';
  $strongarm->value = 1;
  $export['comment_default_mode_testcontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_testcontent';
  $strongarm->value = '50';
  $export['comment_default_per_page_testcontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_testcontent';
  $strongarm->value = 1;
  $export['comment_form_location_testcontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_testcontent';
  $strongarm->value = '1';
  $export['comment_preview_testcontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_testcontent';
  $strongarm->value = 1;
  $export['comment_subject_field_testcontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_testcontent';
  $strongarm->value = '2';
  $export['comment_testcontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_testcontent';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_testcontent'] = $strongarm;

  return $export;
}
