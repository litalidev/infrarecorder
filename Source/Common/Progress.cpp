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

#include "stdafx.h"
#include "Progress.h"

void CProgress::SetProgress(int iPercent)
{
	// Do nothing.
}

void CProgress::SetProgressMarquee(bool bMarquee)
{
	// Do nothing.
}

CFilesProgress::CFilesProgress(unsigned __int64 uiTotalBytes)
{
	m_uiTotalBytes = uiTotalBytes;
	m_uiProcessedBytes = 0;
}

/*
	CFilesProgress::UpdateProcessed
	-------------------------------
	Takes the number of processed bytes and return the number of percent that
	has been completed.
*/
int CFilesProgress::UpdateProcessed(unsigned long ulProcessedBytes)
{
	m_uiProcessedBytes += ulProcessedBytes;

	return (int)(((double)m_uiProcessedBytes/m_uiTotalBytes) * 100);
}
