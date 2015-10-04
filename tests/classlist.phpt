--TEST--
gobject extension class listing
--EXTENSIONS--
eos_datastructures
--SKIPIF--
<?php
include __DIR__ . '/skipif.inc';
?>
--FILE--
<?php
$ext = new ReflectionExtension('gobject');
var_dump($ext->getClassNames());
?>
--EXPECT--
array(0) {
}
