<?php
/**
 * @file
 * tf_ct_testcontent_features_.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tf_ct_testcontent_features__ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function tf_ct_testcontent_features__node_info() {
  $items = array(
    'testcontent' => array(
      'name' => t('testcontent'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
