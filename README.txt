
Token Modifier for Drupal 7
--------------------------------------

Token modifier provides a meta token that allows you to modify the output of other tokens.


#Usage

To use these token modifiers, you simply add a prefix to your existing token.

[token-modifier:{modifier}:{existing token}]

The modifiers should work anywhere the existing token would work. It passes through all the context available to the original token.

For example: output the current users' username as title case:

[token-modifier:title-case:current-user:name]


#Included modifiers

- urlencode: URL Encodes the returned string.
- title-case: Uppercases the first letter of each word using ucwords.
- sentence-case: Uppercases the first letter of each sentence.
- uppercase: Uppercases all characters.
- lowercase: Lowercases all characters.
- uppercase-first: Uppercases the first letter of the string.


#Chaining

Chaining modifiers is possible. Just keep prepending ```token-modifier:{modifier}``` to the front of the token.


#Extend

Token Modifiers uses the ctools plugin system to allow other modules to provide their own modifiers.

To get started:

1. Copy one of the existing plugin files within ```token_modifier/plugins/token_modifer``` to a ```plugins/token_modifier``` folder in your module and modify the details. The filename of your .inc file is used in the token.
2. Implement ```hook_ctools_plugin_directory``` in your module. Look at ```token_modifier_ctools_plugin_directory``` as an example.


#Contributing

I'll gladly bundle more modifiers that I think are going to be widely useful. Create an issue in the issue queue (ideally with a patch ready to go) and I'll take a look.
