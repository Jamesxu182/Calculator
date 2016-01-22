/***************************************************************************
 *            processor.h
 *
 *  Fri January 22 01:07:21 2016
 *  Copyright  2016  Unknown
 *  <user@host>
 ****************************************************************************/
#ifndef PROCESSOR_H_
#define PROCESSOR_H_

#include <glib.h>
#include <gtk/gtk.h>

gdouble process(gdouble first, gchar sign, gdouble second);

gchar * gdouble_to_gchar_array(gdouble result);

void clear_operation(GtkLabel * screen);

void equal_operation(GtkLabel * screen);

#endif