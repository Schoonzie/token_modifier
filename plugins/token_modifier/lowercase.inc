<?php
/**
 * @file
 * Uppercase token modifier plugin.
 */
$plugin = array(
  'name' => t('Lowercase'),
  'description' => t('Lowercase the returned string.'),
  'callback' => 'token_modifier_token_modifier_lowercase',
);

function token_modifier_token_modifier_lowercase($token, $data, $options) {
  return strtolower(token_replace("[$token]", $data, $options));
}
