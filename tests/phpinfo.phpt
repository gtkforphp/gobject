--TEST--
gobject phpinfo information
--SKIPIF--
<?php
include __DIR__ . '/skipif.inc';
?>
--FILE--
<?php
$ext = new ReflectionExtension('gobject');
$ext->info();
?>
= DONE =
--EXPECTF--
gobject

G\Object => enabled
Extension Version => %d.%d.%d%s
= DONE =
