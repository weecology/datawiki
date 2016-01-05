$Id: README.txt,v 1.2 2010/04/06 17:12:10 gestaltware Exp $


Description
---------------
Block Node Visibility enables configuration to show blocks on specific node 
types directly on the block edit form. Node types Non-node type pages can be 
enabled via a callback.


Dependencies
---------------
Block module


Related Modules
---------------
Block Page Visibility (http://drupal.org/project/bpv)
  centralzied page visibility but handled via config array.


Installation
---------------
1. install module: copy block_node_visibility directory and all its contents to 
   your modules directory
2. enable module: admin/build/modules
3. enable for one more more node types: admin/content/types (5.x only)
4. enable for one or more blocks: admin/build/block


Download
---------------
Download package and report bugs, feature requests, or submit a patch from the 
project page on the Drupal web site.
http://drupal.org/project/block_node_visibility


Developers
---------------
Custom non-node page types can be integrated with Block Node Visibility via a
callback.

Example:

/**
 * Implementation of Block node visibility callback.
 */
function example_block_node_visibility($op, $types = array(), $node = NULL) {
  switch ($op) {
    case 'type':
      return array(
              'example' => array(
                'page1' => 'Name of page1',
                'page2' => 'Name of page2',
              ));

    case 'visibility':
      if (in_array('page1', $types) && arg(0) == 'page1') {
        return TRUE;
      }

      else if (in_array('page2', $types) && arg(0) == 'page2') {
        return TRUE;
      }

      return FALSE;
  }
}


Author
---------------
John Money
ossemble LLC.
http://ossemble.com
What can we ossemble for you? ossemble provides web application development and 
consulting for mission-critical Drupal projects.

Module development sponsored by ConsumerSearch, a service of About.com, a part 
of The New York Times Company.
http://www.consumersearch.com
