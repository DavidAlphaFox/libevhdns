README of libevhdns: libevdns implementation compatible with libevent 
by pts@fazekas.hu at Sat Apr 24 21:56:35 CEST 2010

About
~~~~~
libevhdns is a C library for Unix which implements the asynchronous DNS
resolver evdns (the asynchronous DNS resolving feature of libevent) in a way
which is compatible with both libev and libevent.

libevhdns reuses parts of the libevent source code (including the full
evdns.c) and libevent's configure script. The only extra merit of libevhdns
as compared to libevent is that it works with libev as well.

Installation
~~~~~~~~~~~~
Get the source code from http://code.google.com/p/libevhdns/ .

  $ ./configure
  $ make
  $ make install

License
~~~~~~~
Since libevent source files are covered by BSD-like licenses, libevhdns is
covered by the New BSD License.

Which files are from libevent
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
The following files in the source tree libevhdns have been copied verbatim
from libevent-1.4.13.

  config.guess
  config.h.in
  config.sub
  configure
  evdns.c
  evdns.h
  event.c
  evutil.c
  install-sh
  libtool
  log.c
  log.h

__END__
