/*
 * InfraRecorder - CD/DVD burning software
 * Copyright (C) 2006-2012 Christian Kindahl
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "stdafx.hh"
#include "string_table.hh"

const TCHAR *g_szStringTable[END_OF_STRING_TABLE_GUARD] =
{
    #define TRSTR(a,b) b,
    #include "translated_strings.hh"
    #undef TRSTR
};

_STATIC_ASSERT(END_OF_STRING_TABLE_GUARD == _countof(g_szStringTable));
