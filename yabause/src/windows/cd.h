/*  Copyright 2004-2005 Theo Berkau
    Copyright 2005 Joost Peters

    This file is part of Yabause.

    Yabause is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Yabause is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Yabause; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef CD_HH
#define CD_HH

#include <ddk/ntddcdrm.h>
#include <ddk/ntddscsi.h>
#include <wnaspi32.h>
#include "../cdbase.h"

#define CDCORE_SPTI     2
#define CDCORE_ASPI     3

int SPTICDInit(const char *);
int SPTICDDeInit();
int SPTICDGetStatus();
s32 SPTICDReadTOC(u32 *);
int SPTICDReadSectorFAD(u32, void *);

extern CDInterface SPTICD;

int ASPICDInit(const char *);
int ASPICDDeInit();
int ASPICDGetStatus();
s32 ASPICDReadTOC(u32 *);
int ASPICDReadSectorFAD(u32, void *);

extern CDInterface ASPICD;

#endif