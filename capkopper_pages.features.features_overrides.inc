<?php
/**
 * @file
 * capkopper_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function capkopper_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-panopoly_page-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-panopoly_page-field_featured_categories.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-panopoly_page-field_featured_image.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-panopoly_page-field_featured_status.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.settings|entity_translation_sync"] = FALSE;

 return $overrides;
}
