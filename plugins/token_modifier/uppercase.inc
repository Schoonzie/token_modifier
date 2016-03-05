<?php
/**
 * @file
 * Uppercase token modifier plugin.
 */
$plugin = array(
  'name' => t('Uppercase'),
  'description' => t('Uppercase the returned string.'),
  'callback' => 'token_modifier_token_modifier_uppercase',
);

function token_modifier_token_modifier_uppercase($token, $data, $options) {
  return strtoupper(token_replace("[$token]", $data, $options));
}
