## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = calculator.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(CALCULATOR_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = calculator

calculator_SOURCES = \
	main.c \
	calculator.h \
	calculator.c \
	basic_operations.c \
	basic_operations.h \
	callbacks.c \
	callbacks.h \
	gtk_button_extras.c \
	gtk_button_extras.h \
	gtk_label_extras.c \
	gtk_label_extras.h \
	processor.c \
	processor.h	


calculator_LDFLAGS =

calculator_LDADD = $(CALCULATOR_LIBS)


if PLATFORM_WIN32
calculator_LDFLAGS += -Wl,--export-all-symbols
else
calculator_LDFLAGS += -Wl,--export-dynamic
endif

if NATIVE_WIN32
calculator_LDFLAGS += -mwindows
endif


EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

