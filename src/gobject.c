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
#	include "config.h"
#endif

#include <php.h>
/* Included for version constants only in this file */
#include <glib.h>
#include <glib-object.h>

#include "php_gobject.h"
#include "php_gobject_internal.h"

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(gobject)
{
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION */
PHP_MINFO_FUNCTION(gobject)
{
	char output_buf[58];
	snprintf(output_buf, sizeof(output_buf), "%d.%d.%d", glib_major_version, glib_minor_version, glib_micro_version);

	php_info_print_table_start();
	php_info_print_table_header(2, "Gobject extension", "enabled");
	php_info_print_table_row(2, "Glib Library Version", output_buf);
	php_info_print_table_row(2, "Extension Version", PHP_GOBJECT_VERSION);
	php_info_print_table_end();
}
/* }}} */

/* {{{ gobject_module_deps */
static const zend_module_dep gobject_module_deps[] = {
	ZEND_MOD_REQUIRED("eos_datastructures")
	ZEND_MOD_END
};
/* }}} */

/* {{{ gobject_module_entry */
zend_module_entry gobject_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	gobject_module_deps,
	"gobject",
	NULL,
	PHP_MINIT(gobject),
	NULL,
	NULL,
	NULL,
	PHP_MINFO(gobject),
	PHP_GOBJECT_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_GOBJECT
	ZEND_GET_MODULE(gobject)
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */