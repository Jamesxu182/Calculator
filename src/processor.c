/***************************************************************************
 *            processor.c
 *
 *  Fri January 22 01:07:21 2016
 *  Copyright  2016  Unknown
 *  <user@host>
 ****************************************************************************/
#include "processor.h"
#include "basic_operations.h"
#include "callbacks.h"
#include "gtk_label_extras.h"
#include <stdlib.h>

gdouble process(gdouble first, gchar sign, gdouble second)
{
	gdouble result;
	
	switch(sign)
	{
		case '+':
			result = add(first, second);
			break;
		case '-':
			result = substract(first, second);
			break;
		case '*':
			result = multiply(first, second);
			break;
		case '/':
			result = divide(first, second);
			break;
		default:
			break;
	}

	return result;
}

gchar * gdouble_to_gchar_array(gdouble result)
{
	gchar * buffer = (gchar *)malloc(100 * sizeof(gchar));

	g_snprintf(buffer, sizeof(buffer), "%g", result);
	
	return buffer;
}

void clear_operation(GtkLabel * screen)
{
	gtk_label_set_text(screen, "");
	has_number_input = FALSE;
	step = 0;
	sign_button = NULL;
}

void equal_operation(GtkLabel * screen)
{
	has_number_input = TRUE;
	second_number = gtk_label_get_number(screen);
	gdouble result = process(first_number, sign, second_number);
	first_number = result;
	g_print("First Number: %g\n", first_number);
	g_print("Second Number: %g\n", second_number);
	g_print("Result: %g\n", result);
	gtk_label_set_text(screen, gdouble_to_gchar_array(result));
	sign_button = NULL;
	step = 1;
}