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
#include "custom_edit_ctrl.hh"

CCustomEditCtrl::CCustomEditCtrl()
{
}

CCustomEditCtrl::~CCustomEditCtrl()
{
}

/*
    CCustomEditCtrl::OnChar
    -----------------------
    This edit control works like a regular edit control except that it does not
    allow the | (pipe) character.
*/
LRESULT CCustomEditCtrl::OnChar(UINT uMsg,WPARAM wParam,LPARAM lParam,BOOL &bHandled)
{
    bHandled = wParam == '|';
    return 0;
}
