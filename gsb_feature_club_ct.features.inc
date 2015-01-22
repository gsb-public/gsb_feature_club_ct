<?php
/**
 * @file
 * gsb_feature_club_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_club_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_club_ct_node_info() {
  $items = array(
    'club' => array(
      'name' => t('Club'),
      'base' => 'node_content',
      'description' => t('The GSB Public Club content type is used for clubs on the GSB Public web site.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
