<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function piropublic_about_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_default_fe_nodequeue_queue().
 */
function piropublic_about_default_fe_nodequeue_queue() {
  $export = array();

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = '';
  $fe_nodequeue_queue->title = 'About Staff';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '0';
  $fe_nodequeue_queue->link = 'Add to staff page';
  $fe_nodequeue_queue->link_remove = 'Remove from staff page';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '0';
  $fe_nodequeue_queue->i18n = '1';
  $fe_nodequeue_queue->types = array(
    0 => 'staff',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '15',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'staff_listing';

  $export['staff_listing'] = $fe_nodequeue_queue;

  return $export;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function piropublic_about_imagecache_default_presets() {
  $items = array(
    'staff_image' => array(
      'presetname' => 'staff_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '160',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function piropublic_about_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'module' => 'features',
      'description' => t('To add an FAQ question and answer to the about section.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'has_body' => '1',
      'body_label' => t('Answer'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'staff' => array(
      'name' => t('Staff/Board'),
      'module' => 'features',
      'description' => t('To add a campaign for liberty staff member'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'has_body' => '1',
      'body_label' => t('Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function piropublic_about_views_api() {
  return array(
    'api' => '2',
  );
}
