/*
   Copyright (C) 2001-2006, William Joseph.
   All Rights Reserved.

   This file is part of GtkRadiant.

   GtkRadiant is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   GtkRadiant is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GtkRadiant; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#pragma once

#include "generic/callbackfwd.h"

typedef struct _GtkToolItem GtkToolItem;
typedef struct _GtkToolButton GtkToolButton;
typedef struct _GtkToggleToolButton GtkToggleToolButton;
typedef struct _GtkToolbar GtkToolbar;
class Command;
class Toggle;

GtkToolbar* toolbar_new();
void toolbar_append_space( GtkToolbar* toolbar );
void toolbar_append( GtkToolbar* toolbar, GtkToolItem* button, const char* description );
GtkToolButton* toolbar_append_button( GtkToolbar* toolbar, const char* description, const char* icon, const Callback& callback );
GtkToolButton* toolbar_append_button( GtkToolbar* toolbar, const char* description, const char* icon, const Command& command );
GtkToggleToolButton* toolbar_append_toggle_button( GtkToolbar* toolbar, const char* description, const char* icon, const Callback& callback );
GtkToggleToolButton* toolbar_append_toggle_button( GtkToolbar* toolbar, const char* description, const char* icon, const Toggle& toggle );
