/*
 * Copyright (C) 2006-2008 Christian Kindahl, christian dot kindahl at gmail dot com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#pragma once

class CProgress
{
public:
	// Not forced to be implemented by inheritor.
	virtual void SetProgress(int iPercent);
	virtual void SetProgressMarquee(bool bMarquee);

	// Returns true of the operation has been cancelled.
	virtual bool IsCanceled() = 0;
};

class CProgressEx : public CProgress
{
public:
	enum eLogType
	{
		LT_INFORMATION,
		LT_WARNING,
		LT_ERROR,
		LT_WINLOGO
	};

	virtual void AddLogEntry(eLogType Type,const TCHAR *szMessage,...) = 0;
	virtual void SetStatus(const TCHAR *szStatus,...) = 0;
};

class CFilesProgress
{
private:
	unsigned __int64 m_uiTotalBytes;
public:
	unsigned __int64 m_uiProcessedBytes;

public:
	CFilesProgress(unsigned __int64 uiTotalBytes);

	int UpdateProcessed(unsigned long ulProcessedBytes);
};
