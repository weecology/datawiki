<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function datawiki_custom_context_default_contexts() {
  $export = array();

  /*------ BEGIN FIND DATA CONTEXT ------*/

  // $context = new stdClass();
  // $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  // $context->api_version = 3;
  // $context->name = 'find_data';
  // $context->description = 'Filter block for Find Data';
  // $context->tag = '';
  // $context->conditions = array(
  //   'path' => array(
  //     'values' => array(
  //       'find-data' => 'find-data',
  //     ),
  //   ),
  // );
  // $context->reactions = array(
  //   'block' => array(
  //     'blocks' => array(
  //       'views-d3d802abcbe386011fa382efc0f23c60' => array(
  //         'module' => 'views',
  //         'delta' => 'd3d802abcbe386011fa382efc0f23c60',
  //         'region' => 'sidebar_first',
  //         'weight' => '-10',
  //       ),
  //     ),
  //   ),
  // );
  // $context->condition_mode = 0;

  // // Translatables
  // // Included for use with string extractors like potx.
  // t('Filter block for Find Data');

  // $export[$context->name] = $context;

  /* ------- END FIND DATA CONTEXT ------ */

  /* ------- BEGIN RIGHT SIDEBAR CONTEXT ------ */
  // $context = new stdClass();
  // $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  // $context->api_version = 3;
  // $context->name = 'right_sidebar';
  // $context->description = 'Blocks that appear in right sidebar on some pages.';
  // $context->tag = '';
  // $context->conditions = array(
  //   'path' => array(
  //     'values' => array(
  //       'user' => 'user',
  //       '<front>' => '<front>',
  //     ),
  //   ),
  // );
  // $context->reactions = array(
  //   'block' => array(
  //     'blocks' => array(
  //       'comment-recent' => array(
  //         'module' => 'comment',
  //         'delta' => 'recent',
  //         'region' => 'sidebar_second',
  //         'weight' => '-10',
  //       ),
  //       'views-flag_bookmarks-block_1' => array(
  //         'module' => 'views',
  //         'delta' => 'flag_bookmarks-block_1',
  //         'region' => 'sidebar_second',
  //         'weight' => '-9',
  //       ),
  //     ),
  //   ),
  // );
  // $context->condition_mode = 0;

  // // Translatables
  // // Included for use with string extractors like potx.
  // t('Blocks that appear in right sidebar on some pages.');

  // $export[$context->name] = $context;

  /* ------- END RIGHT SIDEBAR CONTEXT -------- */
  /* ------- BEGIN HOMEPAGE CONTEXT ----------- */

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'comment-recent' => array(
          'module' => 'comment',
          'delta' => 'recent',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-flag_bookmarks-block_1' => array(
          'module' => 'views',
          'delta' => 'flag_bookmarks-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

// Translatables
  // Included for use with string extractors like potx.
  t('Homepage blocks');

  $export[$context->name] = $context;

/* ---------- END HOMEPAGE CONTEXT --------- */


  return $export;

}
