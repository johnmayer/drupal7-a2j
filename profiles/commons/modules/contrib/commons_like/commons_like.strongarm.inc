<?php
/**
 * @file
 * commons_like.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function commons_like_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'commons_like',
      'tag' => 'commons_like',
      'title' => 'Like',
      'node_types' => array(
      ),
      'comment_types' => array(
      ),
      'options' => array(
        0 => array(
          0 => 1,
          1 => 'like',
        ),
      ),
      'template' => 'commons_like',
      'node_display' => '3',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        2 => '2',
        1 => 0,
      ),
      'allow_voting_by_author' => 0,
      'noperm_behaviour' => '3',
      'displayed' => '2',
      'displayed_just_voted' => '1',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '1',
      'value_type' => 'points',
      'theme' => 'rate_template_commons_like',
      'css' => 'profiles/commons/modules/contrib/commons_like/commons-like.css',
      'translate' => TRUE,
      'use_source_translation' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
