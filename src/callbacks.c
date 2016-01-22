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
#include "gtk_label_extras.h"
#include "gtk_button_extras.h"

void on_button_1_clicked(GtkButton * button, gpointer data)
{	
	number_operation((GtkLabel *)data, "1");	
}

void on_button_2_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "2");	
}

void on_button_3_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "3");	
}

void on_button_4_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "4");	
}

void on_button_5_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "5");
}

void on_button_6_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "6");
}

void on_button_7_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "7");
}

void on_button_8_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "8");	
}

void on_button_9_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "9");	
}

void on_button_0_clicked(GtkButton * button, gpointer data)
{
	number_operation((GtkLabel *)data, "0");	
}

void on_button_addition_clicked(GtkButton * button, gpointer data)
{
	sign_operation(button, (GtkLabel *)data, '+');
}

void on_button_substraction_clicked(GtkButton * button, gpointer data)
{
	sign_operation(button, (GtkLabel *)data, '-');
}

void on_button_multiply_clicked(GtkButton * button, gpointer data)
{
	sign_operation(button, (GtkLabel *)data, '*');
}

void on_button_divide_clicked(GtkButton * button, gpointer data)
{
	sign_operation(button, (GtkLabel *)data, '/');
}

void on_button_equal_clicked(GtkButton * button, gpointer data)
{
	equal_operation((GtkLabel *)data);
}

void on_button_percent_clicked(GtkButton * button, gpointer data)
{
	percent_operation((GtkLabel *)data);
}

void on_button_clear_clicked(GtkButton * button, gpointer data)
{	
	clear_operation((GtkLabel *)data);
}

void on_button_dot_clicked(GtkButton * button, gpointer data)
{
	dot_operation((GtkLabel *)data);
}

void on_button_positive_or_negtive_clicked(GtkButton * button, gpointer data)
{
	positive_or_negtive_operation((GtkLabel *)data);
}