<?php
/**
 * @file
 * dataset_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dataset_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dataset|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dataset';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|dataset|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dataset_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dataset|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dataset';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'taxonomy_vocabulary_group',
        1 => 'taxonomy_vocabulary_level',
        2 => 'taxonomy_vocabulary_scale',
        3 => 'taxonomy_vocabulary_type',
        4 => 'taxonomy_vocabulary_biome',
        5 => 'taxonomy_vocabulary_access',
        6 => 'body',
        7 => 'field_get_data_url',
        8 => 'field_get_data_text',
        9 => 'field_georeferenced_is',
        10 => 'field_collection_site',
        11 => 'field_collection_site_geo',
        12 => 'field_image',
        13 => 'field_timespan_date',
        14 => 'field_time_series_is',
        15 => 'field_time_series_date',
        16 => 'taxonomy_vocabulary_frequency',
        17 => 'field_data_collection_text',
        18 => 'field_data_collected_text',
        19 => 'field_known_issues_text',
        20 => 'field_best_practices_text',
        21 => 'field_conditions_text',
        22 => 'field_citation_text',
        23 => 'taxonomy_vocabulary_license',
        24 => 'taxonomy_vocabulary_install',
        25 => 'field_install_code_text',
        26 => 'field_supplemental_text',
        27 => 'field_publications_text',
        28 => 'field_miscellaneous_text',
        29 => 'upload',
      ),
    ),
    'fields' => array(
      'taxonomy_vocabulary_group' => 'top',
      'taxonomy_vocabulary_level' => 'top',
      'taxonomy_vocabulary_scale' => 'top',
      'taxonomy_vocabulary_type' => 'top',
      'taxonomy_vocabulary_biome' => 'top',
      'taxonomy_vocabulary_access' => 'top',
      'body' => 'top',
      'field_get_data_url' => 'top',
      'field_get_data_text' => 'top',
      'field_georeferenced_is' => 'top',
      'field_collection_site' => 'top',
      'field_collection_site_geo' => 'top',
      'field_image' => 'top',
      'field_timespan_date' => 'top',
      'field_time_series_is' => 'top',
      'field_time_series_date' => 'top',
      'taxonomy_vocabulary_frequency' => 'top',
      'field_data_collection_text' => 'top',
      'field_data_collected_text' => 'top',
      'field_known_issues_text' => 'top',
      'field_best_practices_text' => 'top',
      'field_conditions_text' => 'top',
      'field_citation_text' => 'top',
      'taxonomy_vocabulary_license' => 'top',
      'taxonomy_vocabulary_install' => 'top',
      'field_install_code_text' => 'top',
      'field_supplemental_text' => 'top',
      'field_publications_text' => 'top',
      'field_miscellaneous_text' => 'top',
      'upload' => 'top',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|dataset|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dataset|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dataset';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_8_4_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'body',
      ),
      'left' => array(
        1 => 'field_known_issues_text',
        2 => 'field_best_practices_text',
        3 => 'field_conditions_text',
        4 => 'field_supplemental_text',
        5 => 'field_publications_text',
        6 => 'field_miscellaneous_text',
        7 => 'field_data_collection_text',
        8 => 'field_image',
        9 => 'upload',
      ),
      'right' => array(
        10 => 'taxonomy_vocabulary_group',
        11 => 'taxonomy_vocabulary_level',
        12 => 'taxonomy_vocabulary_scale',
        13 => 'taxonomy_vocabulary_type',
        14 => 'taxonomy_vocabulary_biome',
        15 => 'taxonomy_vocabulary_access',
        16 => 'field_get_data_url',
        17 => 'field_get_data_text',
        18 => 'taxonomy_vocabulary_install',
        19 => 'field_install_code_text',
        20 => 'taxonomy_vocabulary_license',
        21 => 'field_data_collected_text',
        22 => 'field_georeferenced_is',
        23 => 'field_collection_site',
        24 => 'field_collection_site_geo',
        25 => 'field_timespan_date',
        26 => 'field_time_series_is',
        27 => 'taxonomy_vocabulary_frequency',
        28 => 'field_time_series_date',
      ),
      'bottom' => array(
        29 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'top',
      'field_known_issues_text' => 'left',
      'field_best_practices_text' => 'left',
      'field_conditions_text' => 'left',
      'field_supplemental_text' => 'left',
      'field_publications_text' => 'left',
      'field_miscellaneous_text' => 'left',
      'field_data_collection_text' => 'left',
      'field_image' => 'left',
      'upload' => 'left',
      'taxonomy_vocabulary_group' => 'right',
      'taxonomy_vocabulary_level' => 'right',
      'taxonomy_vocabulary_scale' => 'right',
      'taxonomy_vocabulary_type' => 'right',
      'taxonomy_vocabulary_biome' => 'right',
      'taxonomy_vocabulary_access' => 'right',
      'field_get_data_url' => 'right',
      'field_get_data_text' => 'right',
      'taxonomy_vocabulary_install' => 'right',
      'field_install_code_text' => 'right',
      'taxonomy_vocabulary_license' => 'right',
      'field_data_collected_text' => 'right',
      'field_georeferenced_is' => 'right',
      'field_collection_site' => 'right',
      'field_collection_site_geo' => 'right',
      'field_timespan_date' => 'right',
      'field_time_series_is' => 'right',
      'taxonomy_vocabulary_frequency' => 'right',
      'field_time_series_date' => 'right',
      'comments' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|dataset|full'] = $ds_layout;

  return $export;
}
