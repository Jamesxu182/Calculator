/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * calculator.h
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

#ifndef _CALCULATOR_
#define _CALCULATOR_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define CALCULATOR_TYPE_APPLICATION             (calculator_get_type ())
#define CALCULATOR_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), CALCULATOR_TYPE_APPLICATION, Calculator))
#define CALCULATOR_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), CALCULATOR_TYPE_APPLICATION, CalculatorClass))
#define CALCULATOR_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CALCULATOR_TYPE_APPLICATION))
#define CALCULATOR_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), CALCULATOR_TYPE_APPLICATION))
#define CALCULATOR_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), CALCULATOR_TYPE_APPLICATION, CalculatorClass))

typedef struct _CalculatorClass CalculatorClass;
typedef struct _Calculator Calculator;
typedef struct _CalculatorPrivate CalculatorPrivate;

struct _CalculatorClass
{
	GtkApplicationClass parent_class;
};

struct _Calculator
{
	GtkApplication parent_instance;

	CalculatorPrivate *priv;

};

GType calculator_get_type (void) G_GNUC_CONST;
Calculator *calculator_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

