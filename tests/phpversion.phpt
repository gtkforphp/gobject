--TEST--
gobject extension phpversion value
--EXTENSIONS--
eos_datastructures
--SKIPIF--
<?php
include __DIR__ . '/skipif.inc';
?>
--FILE--
<?php
var_dump(phpversion('gobject'));
?>
--EXPECTF--
string(%d) "%d.%d.%d%s"