<?php
/**
 * @file
 * Uppercase token modifier plugin.
 */
$plugin = array(
  'name' => t('Uppercase first'),
  'description' => t('Makes the first character of the token uppercase.'),
  'callback' => 'token_modifier_token_modifier_uppercasefirst',
);

function token_modifier_token_modifier_uppercasefirst($token, $data, $options) {
  return ucfirst(token_replace("[$token]", $data, $options));
}
