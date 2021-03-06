/*
 * drivers/amlogic/tvin/hdmirx_ext/hw_sii9135/sii9135_iface.h
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
*/
#include "SiITypeDefs.h"

extern void sii9135_main(void);

extern BOOL siiIsHDMI_Mode(void);
extern BOOL siiRX_CheckCableHPD(void);
extern BOOL siiIsVideoOn(void);
extern BYTE SiI_RX_SetVideoInput(BYTE bVideoInputChannels);

