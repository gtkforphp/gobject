dnl
dnl Gobject Library Bindings bindings for PHP7
dnl

PHP_ARG_WITH(gobject, for Gobject library support,
[  --with-gobject          Enable Gobject support], yes)

if test "$PHP_GOBJECT" != "no"; then

  PHP_SUBST(GOBJECT_SHARED_LIBADD)
  AC_DEFINE(HAVE_GOBJECT, 1, [ ])

  PHP_NEW_EXTENSION(gobject, \
    src/gobject.c \
    src/enum.c \
  , $ext_shared)

  EXT_GOBJECT_HEADERS="php_gobject_api.h"

  ifdef([PHP_INSTALL_HEADERS], [
      PHP_INSTALL_HEADERS(ext/gobject, $EXT_GOBJECT_HEADERS)
  ])

  PHP_ADD_EXTENSION_DEP(cairo, eos_datastructures)

  AC_MSG_CHECKING(for pkg-config)

  if test ! -f "$PKG_CONFIG"; then
    PKG_CONFIG=`which pkg-config`
  fi

  if test -f "$PKG_CONFIG"; then
    AC_MSG_RESULT(found)
    AC_MSG_CHECKING(for gobject)

    if $PKG_CONFIG --exists gobject-2.0; then
      gobject_version_full=`$PKG_CONFIG --modversion gobject-2.0`
      AC_MSG_RESULT([found $gobject_version_full])
      GOBJECT_LIBS="$LDFLAGS `$PKG_CONFIG --libs gobject-2.0`"
      GOBJECT_INCS="$CFLAGS `$PKG_CONFIG --cflags-only-I gobject-2.0`"
      PHP_EVAL_INCLINE($GOBJECT_INCS)
      PHP_EVAL_LIBLINE($GOBJECT_LIBS, GOBJECT_SHARED_LIBADD)
      AC_DEFINE(HAVE_GOBJECT, 1, [whether gobject exists in the system])
    else
      AC_MSG_RESULT(not found)
      AC_MSG_ERROR(Ooops ! no gobject found or detected in the system)
    fi
  else
    AC_MSG_RESULT(not found)
    AC_MSG_ERROR(Ooops ! no pkg-config found .... )
  fi

fi
