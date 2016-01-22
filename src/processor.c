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

static gboolean has_number_input = FALSE;
static gint step = 0;
static gdouble first_number = 0;
static gdouble second_number = 0;
static gchar sign = ' ';
static GtkButton * sign_button = NULL;
static gboolean is_result = FALSE;
static gboolean is_positive = TRUE;

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

void number_operation(GtkLabel * screen, const gchar * number)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text(screen, number);
		}

		else
		{
			gtk_label_append_text(screen, number);
		}
	}

	else
	{
		gtk_label_set_text(screen, "1");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void sign_operation(GtkButton * button, GtkLabel * screen, const gchar sign_char)
{
	g_print("Step: %d\n", step);
	if(has_number_input == FALSE)
	{
		;
	}

	else
	{
		if(step == 3)
		{
			has_number_input = FALSE;
			second_number = gtk_label_get_number(screen);
			gdouble result = process(first_number, sign, second_number);
			first_number = result;
			g_print("%g\n", result);
			gtk_label_set_text(screen, gdouble_to_gchar_array(result));
			sign_button = NULL;
			step = 2;
			sign = sign_char;
			if(result > 0)
			{
				is_positive = TRUE;
			}

			else
			{
				is_positive = FALSE;
			}
		}

		else if(step == 1)
		{
			sign = sign_char;
			step++;
			has_number_input = FALSE;
			sign_button = button;
			first_number = gtk_label_get_number(screen);
			is_result = FALSE;
			is_positive = TRUE;
		}
	}
}

void clear_operation(GtkLabel * screen)
{
	gtk_label_set_text(screen, "");
	has_number_input = FALSE;
	step = 0;
	sign_button = NULL;
	is_positive = TRUE;
}

void equal_operation(GtkLabel * screen)
{
	g_print("Step: %d\n", step);
	if(step == 3)
	{
		has_number_input = TRUE;
		second_number = gtk_label_get_number(screen);
		gdouble result = process(first_number, sign, second_number);
		g_print("First Number: %g\n", first_number);
		g_print("Second Number: %g\n", second_number);
		g_print("Result: %g\n", result);
		first_number = result;
		gtk_label_set_text(screen, gdouble_to_gchar_array(result));
		sign_button = NULL;
		is_result = TRUE;
		step = 1;
		if(result > 0)
		{
			is_positive = TRUE;
		}

		else
		{
			is_positive = FALSE;
		}
	}
}

void dot_operation(GtkLabel * screen)
{
	g_print("Dot");
	if(has_number_input == TRUE && step != 2)
	{
		gtk_label_append_text(screen, ".");
	}
}

void percent_operation(GtkLabel * screen)
{
	g_print("Percent\n");
	g_print("Step: %d\n", step);
	if(step == 1 || step == 3)
	{
		gdouble number = gtk_label_get_number(screen);
		number = number * 0.01;
		g_print("Number: %g\n", number);
		gchar * number_str = (gchar *)malloc(sizeof(gchar) * 100);
		g_snprintf(number_str, sizeof(number_str), "%g", number);
		gtk_label_set_text(screen, number_str);
		g_free(number_str);
	}
}

void positive_or_negtive_operation(GtkLabel * screen)
{
	g_print("Positive or Negtive\n");
	if(is_positive == TRUE)
	{
		gtk_label_add_sign_in_first(screen, "-");
		is_positive = FALSE;
	}

	else
	{
		gtk_label_remove_first_sign(screen);
		is_positive = TRUE;
	}
}