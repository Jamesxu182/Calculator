/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * calculator.c
 * Copyright (C) 2016 Yifan <james@ArchLinux>
 * 
 * Calculator is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Calculator is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "calculator.h"

#include <glib/gi18n.h>



/* For testing propose use the local (not installed) ui file */
/* #define UI_FILE PACKAGE_DATA_DIR"/ui/calculator.ui" */
#define UI_FILE "src/calculator.ui"
#define TOP_WINDOW "window"


G_DEFINE_TYPE (Calculator, calculator, GTK_TYPE_APPLICATION);

/* ANJUTA: Macro CALCULATOR_APPLICATION gets Calculator - DO NOT REMOVE */
struct _CalculatorPrivate
{
	/* ANJUTA: Widgets declaration for calculator.ui - DO NOT REMOVE */
};

/* Create a new window loading a file */
static void
calculator_new_window (GApplication *app,
                           GFile        *file)
{
	GtkWidget *window;

	GtkBuilder *builder;
	GError* error = NULL;

	CalculatorPrivate *priv = CALCULATOR_APPLICATION(app)->priv;

	/* Load UI from file */
	builder = gtk_builder_new ();
	if (!gtk_builder_add_from_file (builder, UI_FILE, &error))
	{
		g_critical ("Couldn't load builder file: %s", error->message);
		g_error_free (error);
	}

	/* Auto-connect signal handlers */
	gtk_builder_connect_signals (builder, app);

	/* Get the window object from the ui file */
	window = GTK_WIDGET (gtk_builder_get_object (builder, TOP_WINDOW));
        if (!window)
        {
		g_critical ("Widget \"%s\" is missing in file %s.",
				TOP_WINDOW,
				UI_FILE);
        }

	
	/* ANJUTA: Widgets initialization for calculator.ui - DO NOT REMOVE */

	g_object_unref (builder);
	
	
	gtk_window_set_application (GTK_WINDOW (window), GTK_APPLICATION (app));
	if (file != NULL)
	{
		/* TODO: Add code here to open the file in the new window */
	}

	gtk_widget_show_all (GTK_WIDGET (window));
}


/* GApplication implementation */
static void
calculator_activate (GApplication *application)
{
	calculator_new_window (application, NULL);
}

static void
calculator_open (GApplication  *application,
                     GFile        **files,
                     gint           n_files,
                     const gchar   *hint)
{
	gint i;

	for (i = 0; i < n_files; i++)
		calculator_new_window (application, files[i]);
}

static void
calculator_init (Calculator *object)
{
	object->priv = G_TYPE_INSTANCE_GET_PRIVATE (object, CALCULATOR_TYPE_APPLICATION, CalculatorPrivate);
}

static void
calculator_finalize (GObject *object)
{
	G_OBJECT_CLASS (calculator_parent_class)->finalize (object);
}

static void
calculator_class_init (CalculatorClass *klass)
{
	G_APPLICATION_CLASS (klass)->activate = calculator_activate;
	G_APPLICATION_CLASS (klass)->open = calculator_open;

	g_type_class_add_private (klass, sizeof (CalculatorPrivate));

	G_OBJECT_CLASS (klass)->finalize = calculator_finalize;
}

Calculator *
calculator_new (void)
{
	return g_object_new (calculator_get_type (),
	                     "application-id", "org.gnome.calculator",
	                     "flags", G_APPLICATION_HANDLES_OPEN,
	                     NULL);
}

