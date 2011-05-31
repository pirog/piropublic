<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function c4l_core_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Copyright notice';
  $fe_block_boxes->format = '3';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = '<p class="copyright">&copy; Copyright <?php print date(\'Y\'); ?> Campaign for Liberty</p>';

  $export['footer_copyright'] = $fe_block_boxes;

  return $export;
}
