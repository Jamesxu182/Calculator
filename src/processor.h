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

void number_operation(GtkLabel * screen, const gchar * number);

void sign_operation(GtkButton * button, GtkLabel * screen, const gchar sign_char);

void clear_operation(GtkLabel * screen);

void equal_operation(GtkLabel * screen);

void dot_operation(GtkLabel * screen);

void percent_operation(GtkLabel * screen);

void positive_or_negtive_operation(GtkLabel * screen);

#endif