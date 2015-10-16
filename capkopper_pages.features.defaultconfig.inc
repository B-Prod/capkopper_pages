<?php
/**
 * @file
 * capkopper_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function capkopper_pages_defaultconfig_features() {
  return array(
    'capkopper_pages' => array(
      'default_linkit_profiles' => 'default_linkit_profiles',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_linkit_profiles().
 */
function capkopper_pages_defaultconfig_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'content_fields';
  $linkit_profile->admin_title = 'Content fields';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'panopoly_page' => 'panopoly_page',
        'panopoly_landing_page' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'panopoly_categories' => 'panopoly_categories',
      ),
      'group_by_bundle' => 1,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['content_fields'] = $linkit_profile;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function capkopper_pages_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_panopoly_page';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_panopoly_page';
  $strongarm->value = 'd/m/Y - H:i';
  $export['date_popup_authored_format_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_panopoly_page';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_panopoly_page';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_panopoly_page';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_panopoly_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_panopoly_page';
  $strongarm->value = '4';
  $export['language_content_type_panopoly_page'] = $strongarm;

  return $export;
}
