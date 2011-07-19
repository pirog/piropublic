<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_default_fe_block_settings() {
  $export = array();

  // twostate
  $theme = array();

  $theme['block-footer_copyright'] = array(
    'module' => 'block',
    'theme' => 'twostate',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'footer_copyright',
  );

  $theme['menu-menu-authheader'] = array(
    'module' => 'menu',
    'delta' => 'menu-authheader',
    'theme' => 'twostate',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-footer'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer',
    'theme' => 'twostate',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-header'] = array(
    'module' => 'menu',
    'delta' => 'menu-header',
    'theme' => 'twostate',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-header-top-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-header-top-menu',
    'theme' => 'twostate',
    'status' => 0,
    'weight' => '-11',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $export['twostate'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
