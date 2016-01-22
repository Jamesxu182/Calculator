/***************************************************************************
 *            gtk_button_extras.c
 *
 *  Fri January 22 01:04:23 2016
 *  Copyright  2016  Unknown
 *  <user@host>
 ****************************************************************************/
#include "gtk_button_extras.h"

void sign_button_pressed(GtkToggleButton * button)
{
	gtk_toggle_button_set_active (button, TRUE);
}

void sign_button_released(GtkToggleButton * button)
{
	gtk_toggle_button_set_active (button, FALSE);
}