--TEST--
phpversion('gobject') value
--SKIPIF--
<?php
include __DIR__ . '/skipif.inc';
?>
--FILE--
<?php
var_dump(phpversion('gobject'));
?>
= DONE =
--EXPECTF--
string(%d) "%d.%d.%d%s"
= DONE =