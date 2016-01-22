/***************************************************************************
 *            basic_operations.c
 *
 *  Fri January 22 01:00:34 2016
 *  Copyright  2016  Unknown
 *  <user@host>
 ****************************************************************************/
#include "basic_operations.h"

double add(double a, double b)
{
	return a + b;
}

double substract(double a, double b)
{
	return a - b;
}

double multiply(double a, double b)
{
	return a * b;
}

double divide(double a, double b)
{
	if(b == 0)
	{
		;
	}
	
	return a / b;
}