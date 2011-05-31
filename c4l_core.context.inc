<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function c4l_core_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_bottom';
  $context->description = 'Context for the footer bottom';
  $context->tag = 'core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-footer',
          'region' => 'footer_bottom',
          'weight' => 0,
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'footer_bottom',
          'weight' => 1,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'footer_bottom_core',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the footer bottom');
  t('core');

  $export['footer_bottom'] = $context;
  return $export;
}
