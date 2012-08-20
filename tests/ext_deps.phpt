--TEST--
gobject extension dependencies
--SKIPIF--
<?php
include __DIR__ . '/skipif.inc';
?>
--FILE--
<?php
$ext = new ReflectionExtension('gobject');
var_dump($ext->getDependencies());
?>
= DONE =
--EXPECT--
array(1) {
  ["glib"]=>
  string(8) "Required"
}
= DONE =
