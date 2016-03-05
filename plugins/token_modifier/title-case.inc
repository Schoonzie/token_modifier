<?php
/**
 * @file
 * Uppercase token modifier plugin.
 */
$plugin = array(
  'name' => t('Title case'),
  'description' => t('Title case the returned string.'),
  'callback' => 'token_modifier_token_modifier_titlecase',
);

function token_modifier_token_modifier_titlecase($token, $data, $options) {
  return ucwords(token_replace("[$token]", $data, $options));
}
