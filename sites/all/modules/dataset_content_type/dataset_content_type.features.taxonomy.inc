<?php
/**
 * @file
 * dataset_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dataset_content_type_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_2' => array(
      'name' => 'Taxonomic Group',
      'machine_name' => 'vocabulary_2',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'vocabulary_3' => array(
      'name' => 'Data Type',
      'machine_name' => 'vocabulary_3',
      'description' => 'Brief descriptions of the type of data available in the dataset (e.g., time-series)',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'vocabulary_5' => array(
      'name' => 'Scale (extent)',
      'machine_name' => 'vocabulary_5',
      'description' => 'A rough description of the scale of the data.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
    'vocabulary_6' => array(
      'name' => 'Ecological Level',
      'machine_name' => 'vocabulary_6',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
    'vocabulary_8' => array(
      'name' => 'Biome',
      'machine_name' => 'vocabulary_8',
      'description' => 'General habitat type based on climate and primary vegetation.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_9' => array(
      'name' => 'Accessibility',
      'machine_name' => 'vocabulary_9',
      'description' => 'Accessibility',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_frequency' => array(
      'name' => 'Sampling Frequency',
      'machine_name' => 'vocabulary_frequency',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_install' => array(
      'name' => 'Install package',
      'machine_name' => 'vocabulary_install',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_license' => array(
      'name' => 'License',
      'machine_name' => 'vocabulary_license',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
