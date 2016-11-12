## Makefile.am -- Process this file with automake to produce Makefile.in
MAINTAINERCLEANFILES    = Makefile.in

testsubdir              = test_build

TESTS_ENVIRONMENT       = top_builddir=$(top_builddir)

TESTS                   =                       \
                        main.test

distclean-local:
	-rm -rf $(testsubdir)
