--TEST--
gobject extension phpinfo information
--EXTENSIONS--
eos_datastructures
--SKIPIF--
<?php
include __DIR__ . '/skipif.inc';
?>
--FILE--
<?php
$ext = new ReflectionExtension('gobject');
$ext->info();
?>
--EXPECTF--
gobject

Gobject extension => enabled
Glib Library Version => %d.%d.%d
Extension Version => %d.%d.%d%s
