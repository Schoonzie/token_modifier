<?php
/**
 * @file
 * URL Encode token modifier plugin.
 */
$plugin = array(
  'name' => t('URL Encode'),
  'description' => t('URL Encodes the returned string.'),
  'callback' => 'token_modifier_token_modifier_urlencode',
);

function token_modifier_token_modifier_urlencode($token, $data, $options) {
  return urlencode(token_replace("[$token]", $data, $options));
}
