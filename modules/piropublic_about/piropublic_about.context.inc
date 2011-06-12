<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_about_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_section';
  $context->description = 'Common About Us Section Elements';
  $context->tag = 'piropublic about';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'faq' => 'faq',
        'staff' => 'staff',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about/staff' => 'about/staff',
        'about/faq' => 'about/faq',
        'about/board' => 'about/board',
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'banner',
          'weight' => 0,
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'right_top',
          'weight' => 0,
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'right',
          'weight' => 0,
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Common About Us Section Elements');
  t('piropublic about');

  $export['about_section'] = $context;
  return $export;
}
