<?php
/**
 * @file
 * dataset_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dataset_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset|node|dataset|form';
  $field_group->group_name = 'group_dataset';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset details',
    'weight' => 3,
    'children' => array(
      0 => 'group_get',
      1 => 'group_use',
      2 => 'group_details',
    ),
    'format_type' => 'htabs',
  );
  $field_groups['group_dataset|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|dataset|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dataset';
  $field_group->data = array(
    'label' => 'Data details',
    'weight' => 6,
    'children' => array(
      0 => 'field_georeferenced_is',
      1 => 'field_collection_site_geo',
      2 => 'field_collection_site',
      3 => 'field_image',
      4 => 'field_timespan_date',
      5 => 'field_time_series_is',
      6 => 'field_time_series_date',
      7 => 'taxonomy_vocabulary_frequency',
      8 => 'field_data_collection_text',
      9 => 'field_data_collected_text',
      10 => 'upload',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'instance_settings' => array(
        'required_fields' => 1,
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_details|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_get|node|dataset|form';
  $field_group->group_name = 'group_get';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dataset';
  $field_group->data = array(
    'label' => 'Get data',
    'weight' => 4,
    'children' => array(
      0 => 'body',
      1 => 'taxonomy_vocabulary_group',
      2 => 'taxonomy_vocabulary_level',
      3 => 'taxonomy_vocabulary_scale',
      4 => 'taxonomy_vocabulary_type',
      5 => 'taxonomy_vocabulary_biome',
      6 => 'taxonomy_vocabulary_access',
      7 => 'field_get_data_url',
      8 => 'field_get_data_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'instance_settings' => array(
        'required_fields' => 1,
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_get|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_use|node|dataset|form';
  $field_group->group_name = 'group_use';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dataset';
  $field_group->data = array(
    'label' => 'Use data',
    'weight' => 5,
    'children' => array(
      0 => 'field_known_issues_text',
      1 => 'field_best_practices_text',
      2 => 'field_conditions_text',
      3 => 'field_citation_text',
      4 => 'taxonomy_vocabulary_license',
      5 => 'taxonomy_vocabulary_install',
      6 => 'field_install_code_text',
      7 => 'field_supplemental_text',
      8 => 'field_publications_text',
      9 => 'field_miscellaneous_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'instance_settings' => array(
        'required_fields' => 1,
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_use|node|dataset|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Data details');
  t('Dataset details');
  t('Get data');
  t('Use data');

  return $field_groups;
}
