/***************************************************************************
 *            callbacks.c
 *
 *  Fri January 22 01:02:49 2016
 *  Copyright  2016  Unknown
 *  <user@host>
 ****************************************************************************/
#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>
#include "callbacks.h"
#include "processor.h"
#include "gtk_label_extras.h"
#include "gtk_button_extras.h"

void on_button_1_clicked(GtkButton * button, gpointer data)
{	
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "1");
		}


		else
		{
			gtk_label_append_text((GtkLabel *)data, "1");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "1");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
	
}

void on_button_2_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "2");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "2");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "2");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_3_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "3");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "3");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "3");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_4_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "4");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "4");
		}
	}
	
	else
	{
		gtk_label_set_text((GtkLabel *)data, "4");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_5_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "5");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "5");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "5");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_6_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "6");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "6");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "6");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_7_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "7");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "7");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "7");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_8_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "8");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "8");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "8");
		has_number_input = FALSE;
		step = 1;
		sign_button = NULL;
	}
}

void on_button_9_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "9");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "9");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "9");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_0_clicked(GtkButton * button, gpointer data)
{
	if(is_result != TRUE)
	{
		if(has_number_input == FALSE)
		{
			step++;
			has_number_input = TRUE;
			gtk_label_set_text((GtkLabel *)data, "0");
		}

		else
		{
			gtk_label_append_text((GtkLabel *)data, "0");
		}
	}

	else
	{
		gtk_label_set_text((GtkLabel *)data, "1");
		has_number_input = TRUE;
		step = 1;
		sign_button = NULL;
		is_result = FALSE;
	}
}

void on_button_addition_clicked(GtkButton * button, gpointer data)
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
			second_number = gtk_label_get_number((GtkLabel *)data);
			gdouble result = process(first_number, sign, second_number);
			first_number = result;
			g_print("%g\n", result);
			gtk_label_set_text((GtkLabel *)data, gdouble_to_gchar_array(result));
			sign_button = NULL;
			step = 2;
			sign = '+';
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
			sign = '+';
			step++;
			has_number_input = FALSE;
			sign_button = button;
			first_number = gtk_label_get_number((GtkLabel *)data);
			is_result = FALSE;
			is_positive = TRUE;
		}
	}
}

void on_button_substraction_clicked(GtkButton * button, gpointer data)
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
			second_number = gtk_label_get_number((GtkLabel *)data);
			gdouble result = process(first_number, sign, second_number);
			first_number = result;
			g_print("%g\n", result);
			gtk_label_set_text((GtkLabel *)data, gdouble_to_gchar_array(result));
			sign_button = NULL;
			step = 2;
			sign = '-';
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
			sign = '-';
			step++;
			has_number_input = FALSE;
			sign_button = button;
			first_number = gtk_label_get_number((GtkLabel *)data);
			is_result = FALSE;
			is_positive = TRUE;
		}
	}
}

void on_button_multiply_clicked(GtkButton * button, gpointer data)
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
			second_number = gtk_label_get_number((GtkLabel *)data);
			gdouble result = process(first_number, sign, second_number);
			first_number = result;
			g_print("%g\n", result);
			gtk_label_set_text((GtkLabel *)data, gdouble_to_gchar_array(result));
			sign_button = NULL;
			step = 2;
			sign = '*';
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
			sign = '*';
			step++;
			has_number_input = FALSE;
			sign_button = button;
			first_number = gtk_label_get_number((GtkLabel *)data);
			is_result = FALSE;
			is_positive = TRUE;
		}
	}
}

void on_button_divide_clicked(GtkButton * button, gpointer data)
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
			second_number = gtk_label_get_number((GtkLabel *)data);
			gdouble result = process(first_number, sign, second_number);
			first_number = result;
			g_print("%g\n", result);
			gtk_label_set_text((GtkLabel *)data, gdouble_to_gchar_array(result));
			sign_button = NULL;
			step = 2;
			sign = '/';
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
			sign = '/';
			step++;
			has_number_input = FALSE;
			sign_button = button;
			first_number = gtk_label_get_number((GtkLabel *)data);
			is_result = FALSE;
			is_positive = TRUE;
		}
	}
}

void on_button_equal_clicked(GtkButton * button, gpointer data)
{
	g_print("Step: %d\n", step);
	if(step == 3)
	{
		has_number_input = TRUE;
		second_number = gtk_label_get_number((GtkLabel *)data);
		gdouble result = process(first_number, sign, second_number);
		g_print("First Number: %g\n", first_number);
		g_print("Second Number: %g\n", second_number);
		g_print("Result: %g\n", result);
		first_number = result;
		gtk_label_set_text((GtkLabel *)data, gdouble_to_gchar_array(result));
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

void on_button_percent_clicked(GtkButton * button, gpointer data)
{
	g_print("Percent\n");
	g_print("Step: %d\n", step);
	if(step == 1 || step == 3)
	{
		gdouble number = gtk_label_get_number((GtkLabel *)data);
		number = number * 0.01;
		g_print("Number: %g\n", number);
		gchar * number_str = (gchar *)malloc(sizeof(gchar) * 100);
		g_snprintf(number_str, sizeof(number_str), "%g", number);
		gtk_label_set_text((GtkLabel *)data, number_str);
		g_free(number_str);
	}
}

void on_button_clear_clicked(GtkButton * button, gpointer data)
{	
	gtk_label_set_text((GtkLabel *)data, "");
	has_number_input = FALSE;
	step = 0;
	sign_button = NULL;
	is_positive = TRUE;
}

void on_button_dot_clicked(GtkButton * button, gpointer data)
{
	g_print("Dot");
	if(has_number_input == TRUE && step != 2)
	{
		gtk_label_append_text((GtkLabel * )data, ".");
	}
}

void on_button_positive_or_negtive_clicked(GtkButton * button, gpointer data)
{
	g_print("Positive or Negtive\n");
	if(is_positive == TRUE)
	{
		gtk_label_add_sign_in_first((GtkLabel *)data, "-");
		is_positive = FALSE;
	}

	else
	{
		gtk_label_remove_first_sign((GtkLabel *)data);
		is_positive = TRUE;
	}
}