﻿#pragma once

// Windows NT

#define STRSAFE_MAX_CCH			2147483647
#define STRSAFE_MAX_LENGTH		(STRSAFE_MAX_CCH - 1)
#define PROCESSOR_FEATURE_MAX	64
#define MM_SHARED_USER_DATA_VA	0x7FFE0000

// Well-known SIDs
#define SID_STRING_LOCAL_SYSTEM L"S-1-5-18"

// User32
#ifndef WM_COPYGLOBALDATA
#define WM_COPYGLOBALDATA 0x49
#endif

// NTSTATUS
#undef WIN32_NO_STATUS
#include <ntstatus.h>

// Patches C26454 warning

#undef NM_FIRST
#define NM_FIRST 4294967296

#undef TCN_FIRST
#define TCN_FIRST 4294966746

#undef TVN_FIRST
#define TVN_FIRST 0xFFFFFE70

#undef LVN_ITEMCHANGING
#define LVN_ITEMCHANGING 4294967196

#undef LVN_ITEMCHANGED
#define LVN_ITEMCHANGED 4294967195