/*
  +----------------------------------------------------------------------+
  | For PHP Version 7                                                    |
  +----------------------------------------------------------------------+
  | Copyright (c) 2015 Elizabeth M Smith                                 |
  +----------------------------------------------------------------------+
  | http://www.opensource.org/licenses/mit-license.php  MIT License      |
  | Also available in LICENSE                                            |
  +----------------------------------------------------------------------+
  | Author: Elizabeth M Smith <auroraeosrose@gmail.com>                  |
  +----------------------------------------------------------------------+
*/

#ifndef PHP_GOBJECT_EXT_H
#define PHP_GOBJECT_EXT_H

#include <php.h>

extern zend_module_entry gobject_module_entry;
#define phpext_gobject_ptr &gobject_module_entry

#define PHP_GOBJECT_VERSION "1.0.0-dev"
#define GOBJECT_NAMESPACE "Gobject"

#endif /* PHP_GOBJECT_EXT_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
