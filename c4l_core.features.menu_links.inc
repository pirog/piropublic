<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function c4l_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer:7b1fafd1-87f8-11e0-b28c-9f89cf71cba4
  $menu_links['menu-footer:7b1fafd1-87f8-11e0-b28c-9f89cf71cba4'] = array(
    'menu_name' => 'menu-footer',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'uuid' => '7b1fafd1-87f8-11e0-b28c-9f89cf71cba4',
  );
  // Exported menu link: menu-footer:9b0988d8-87f4-11e0-b28c-9f89cf71cba4
  $menu_links['menu-footer:9b0988d8-87f4-11e0-b28c-9f89cf71cba4'] = array(
    'menu_name' => 'menu-footer',
    'router_path' => 'node/%',
    'link_title' => 'Terms of Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'uuid' => '9b0988d8-87f4-11e0-b28c-9f89cf71cba4',
  );
  // Exported menu link: menu-footer:contact
  $menu_links['menu-footer:contact'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-footer:f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4
  $menu_links['menu-footer:f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4'] = array(
    'menu_name' => 'menu-footer',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'uuid' => 'f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Help');
  t('Privacy Policy');
  t('Terms of Use');


  return $menu_links;
}
