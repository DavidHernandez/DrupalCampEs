<?php
/**
 * @file
 * aed_bofs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aed_bofs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function aed_bofs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function aed_bofs_node_info() {
  $items = array(
    'bofs' => array(
      'name' => t('BOFs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
