<?php
/**
 * @file
 * neighbor_media_neighbor.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function neighbor_media_neighbor_default_rules_configuration() {
  $items = array();
  $items['rules_make_neighbor'] = entity_import('rules_config', '{ "rules_make_neighbor" : {
      "LABEL" : "Make Neighbor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  return $items;
}
