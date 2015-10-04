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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>
#include <glib-object.h>

#include "php_gobject.h"
#include "php_gobject_internal.h"

zend_class_entry *ce_gobject_enum;

/* ----------------------------------------------------------------
    Gobject\Ebum Definition and registration
------------------------------------------------------------------*/

/* {{{ gobject_enum_methods[] */
const zend_function_entry gobject_enum_methods[] = {
	ZEND_FE_END
};
/* }}} */

/* {{{ PHP_MINIT_FUNCTION */
PHP_MINIT_FUNCTION(gobject_enum)
{
	zend_class_entry ce;

	INIT_NS_CLASS_ENTRY(ce,  GOBJECT_NAMESPACE, "Enum", gobject_enum_methods);
	ce_gobject_enum = zend_register_internal_class(&ce);

	return SUCCESS;
}
/* }}} */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
