## Makefile.am -- Process this file with automake to produce Makefile.in
MAINTAINERCLEANFILES    = Makefile.in

SUBDIRS = test src
		
dist_doc_DATA = README

# Remove all autoconf files. Leave just orginal src and meta-autoconf files.
maintainer-really-clean:
	${MAKE} maintainer-clean
	rm -rfv configure config aclocal.m4 utom4te.cache compile config.h.in
