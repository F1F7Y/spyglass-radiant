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

#include "generic/constant.h"

class filetype_t
{
public:
	filetype_t()
		: name( "" ), pattern( "" ){
	}
	filetype_t( const char* _name, const char* _pattern, bool _can_load = true, bool _can_import = true, bool _can_save = true )
		: name( _name ), pattern( _pattern ), can_load( _can_load ), can_import( _can_import ), can_save( _can_save ){
	}
	const char* name;
	const char* pattern;
	bool can_load;
	bool can_import;
	bool can_save;
};


class IFileTypeList
{
public:
	virtual void addType( const char* moduleName, filetype_t type ) = 0;
};

class IFileTypeRegistry
{
public:
	INTEGER_CONSTANT( Version, 1 );
	STRING_CONSTANT( Name, "filetypes" );

	virtual void addType( const char* moduleType, const char* moduleName, filetype_t type ) = 0;
	virtual void getTypeList( const char* moduleType, IFileTypeList* typelist, bool want_load = false, bool want_import = false, bool want_save = false ) = 0;
};

#include "modulesystem.h"

template<typename Type>
class GlobalModule;
typedef GlobalModule<IFileTypeRegistry> GlobalFiletypesModule;

template<typename Type>
class GlobalModuleRef;
typedef GlobalModuleRef<IFileTypeRegistry> GlobalFiletypesModuleRef;

inline IFileTypeRegistry& GlobalFiletypes(){
	return GlobalFiletypesModule::getTable();
}
