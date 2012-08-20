G\Object
=============

The gtkforphp gobject extension provides languages bindings for GObject functionality.
Documentation and information about the library can be found at http://developer.gnome.org/gobject/stable/

Right now this is little more then a placeholder.

You can send comments, patches, questions [here on github](https://github.com/gtkforphp/gobject/issues)

This is still an experimental extension.

Installing/Configuring
======================

This extension requires the gtkforphp/glib extension as a dependency - for more information see
https://github.com/gtkforphp/glib

This extension requires gobject development files.  You can build the package
manually or use your system's package manager.  For example on ubuntu use

<pre>
apt-get install libgobject-2.0-dev
</pre>

Then you can use phpize to install the extension against your current PHP install

<pre>
phpize
./configure
make && make test && make install
</pre>

If you want to use a non-standard location for your PHP use
<pre>
/path/to/phpize
./configure --with-php-config=/path/to/php-config
make && make test && make install
</pre>

`make install` copies `gobject.so` to the right location, but you still need to enable the module
in your php.ini file.  Although the extension can be used with a webserver, it's recommended
you only use this with a cli PHP install.