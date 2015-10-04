GObject for PHP7
=============

GLib Object System provides the required implementations of a flexible, extensible, and intentionally easy to map (into other languages) object-oriented framework for C.

The gtkforphp gobject extension provides languages bindings for GObject functionality that map to PHP objects.

Status
=============
This a completely new extension providing the gobject library binding support similar to that in
the original php-gtk2 bindings, but namespaced inside Gobject and implementing newer features.
There are plans to add appveyor and travis builds for testing

Requirements
=============
 * PHP 7.0.0-alpha1+
 * [Gobject Library](https://developer.gnome.org/gobject/) 2.46.0 (may support more version later)
 * [Eos\DataStructures](http://github.com/eos-org/datastructures) 0.1.0-dev

The glib extension may be required at some point, for now it is not.

Features are enabled at compile time based on the library version they are compiled against.

Documentation and information about the underlying library can be found at [gnome developer documentation](http://developer.gnome.org/gobject/stable/)

Installation
=============
There are plans to make this available via [pecl](http://pecl.php.net) and [pickle](https://github.com/FriendsOfPHP/pickle)
But this is currently the unstable PHP7 version

Until then, please compile and install the both the datastructures and the gobject extensions and enable them in your php.ini file

```
extension=eos_datastructures.so
extension=gobject.so
```

Compile
=============

This extension can be compiled and tested using phpize

First you need to make and install the Eos\DataStructures extension, which provides Enum support

The gobject extension also requires gobject development files.  Usually gobject is included with glib itself.
You can build the package manually or use your system's package manager.  For example on ubuntu use

```
apt-get install libglib2.0-dev
```

Then you can use phpize to install the extension against your current PHP install

```
phpize
./configure
make && make test && make install
```

If you want to use a non-standard location for your PHP use

```
/path/to/phpize
./configure --with-php-config=/path/to/php-config
make && make test && make install
```

`make install` copies `gobject.so` to the right location, but you still need to enable the module
in your php.ini file.  Although the extension can be used with a webserver, that is not recommended.

Examples
====
The examples directory holds samples of all currently working utilities for the extension

Community
=====
You can find us on [freenode](http://freenode.org) on #gtkforphp

The main website is [Gtk For PHP](http://gtkforphp.net)

You can view commits and released on [twitter](http://twitter.com/gtkforphp)

You can send comments, patches, questions [here on github](https://github.com/gtkforphp/gobject/issues)

Authors
====
Elizabeth M Smith

License
=====
PHP extension binding code released under the [MIT license](http://opensource.org/licenses/MIT)
See [LICENSE](LICENSE)

The Glib Object System (GObject) library is is released under the [LGPL](https://www.gnu.org/licenses/old-licenses/lgpl-2.1.en.html)

Documentation
=====
What little documentation we currently have is in code comments and the docs directory

We'd like to use some kind of markdown or rst format for docs, a decision isn't final yet
