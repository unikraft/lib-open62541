libzlib for Unikraft
===================
This is a port of open62541 to Unikraft. You will need lwip and newlib
to compile it, i.e., in your application's Makefile make sure to
include the following to the dependency list:

  ...:$(UK_LIBS)/open62541:$(UK_LIBS)/lwip:$(UK_LIBS)/newlib:...

Please refer to the `README.md` as well as the documentation in the `doc/`
subdirectory of the main unikraft repository for further information.
