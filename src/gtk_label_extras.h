/***************************************************************************
 *            gtk_label_extras.h
 *
 *  Fri January 22 01:05:46 2016
 *  Copyright  2016  Unknown
 *  <user@host>
 ****************************************************************************/
#ifndef GTK_LABEL_EXTRAS_H_
#define GTK_LABEL_EXTRAS_H_

#include <gtk/gtk.h>

void gtk_label_append_text(GtkLabel * label, const gchar * str);

void gtk_label_remove_first_sign(GtkLabel * label);

void gtk_label_add_sign_in_first(GtkLabel * label, const char * sign);

gdouble gtk_label_get_number(GtkLabel * label);

#endif