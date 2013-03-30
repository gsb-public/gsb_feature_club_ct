<?php
/**
 * @file
 * gsb_feature_club_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_club_ct_taxonomy_default_vocabularies() {
  return array(
    'club_category' => array(
      'name' => 'Club Category',
      'machine_name' => 'club_category',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
