/***************************************************************************
 *            gtk_label_extras.c
 *
 *  Fri January 22 01:05:46 2016
 *  Copyright  2016  Unknown
 *  <user@host>
 ****************************************************************************/
#include "gtk_label_extras.h"
#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>

void gtk_label_append_text(GtkLabel * label, const gchar * str)
{
	gchar * temp = (char *)g_malloc(sizeof(char) * 100);
	g_strlcpy(temp, gtk_label_get_text(label), sizeof(temp));

	g_strlcat(temp, str, sizeof(temp));

	g_print("%s\n", temp);

	gtk_label_set_text(label, temp);

	free(temp);
	
}

void gtk_label_remove_first_sign(GtkLabel * label)
{
	gchar * temp = (char *)g_malloc(sizeof(char) * 100);
	g_strlcpy(temp, gtk_label_get_text(label), sizeof(temp));

	gchar * result = temp + sizeof(char);

	gtk_label_set_text(label, result);

	g_free(temp);
}

void gtk_label_add_sign_in_first(GtkLabel * label, const char * sign)
{
	gchar * temp = (char *)g_malloc(sizeof(char) * 100);
	g_strlcpy(temp, sign, sizeof(temp));
	g_strlcat(temp, gtk_label_get_text(label), sizeof(temp));

	gtk_label_set_text(label, temp);

	g_free(temp);
}

gdouble gtk_label_get_number(GtkLabel * label)
{
	return atof(gtk_label_get_text(label));
}