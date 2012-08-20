G Namespace (GLib)
=============

The gtkforphp glib extension provides languages bindings for the GLib.
Documentation and information about the library can be found at http://developer.gnome.org/glib/stable/

Right now the master branch only provides some simple hand coded functionality for other extensions
such as an enum class and GError handling, the rest will largely be generated.

You can send comments, patches, questions [here on github](https://github.com/gtkforphp/glib/issues)

This is still an experimental extension.

Installing/Configuring
======================

This extension requires glib development files.  You can build the package
manually or use your system's package manager.  For example on ubuntu use

<pre>
apt-get install libglib-2.0-dev
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

`make install` copies `g.so` to the right location, but you still need to enable the module
in your php.ini file.  Although the extension can be used with a webserver, it's recommended
you only use this with a cli PHP install.