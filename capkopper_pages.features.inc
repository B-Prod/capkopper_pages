<?php
/**
 * @file
 * capkopper_pages.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function capkopper_pages_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['taxonomy_term-panopoly_categories-field_featured_image'])) {
    $data['taxonomy_term-panopoly_categories-field_featured_image']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
}
