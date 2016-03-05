<?php
/**
 * @file
 * Uppercase token modifier plugin.
 */
$plugin = array(
  'name' => t('Sentence case'),
  'description' => t('Sentence case the returned string.'),
  'callback' => 'token_modifier_token_modifier_sentencecase',
);

function token_modifier_token_modifier_sentencecase($token, $data, $options) {
  return preg_replace('/\b(\w)/e', 'strtoupper("$1")', token_replace("[$token]", $data, $options));
}
