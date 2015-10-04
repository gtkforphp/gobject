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

#ifndef PHP_GOBJECT_INTERNAL_H
#define PHP_GOBJECT_INTERNAL_H

#include <php.h>
#include <glib-object.h>

extern zend_class_entry *ce_gobject_enum;

/* Classes to register */
PHP_MINIT_FUNCTION(cairo_enum);

#endif /* PHP_GOBJECT_INTERNAL_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
