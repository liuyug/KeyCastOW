// Copyright © 2014 Brook Hong. All Rights Reserved.
//

#ifndef _KEYCAST_H
#define _KEYCAST_H

#include <tchar.h>
#include <windows.h>

#if (defined(__MINGW__) || defined(__MINGW32__))

#define MOD_NOREPEAT 0x4000

#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif

#include <wchar.h>
static inline int wcscpy_s(wchar_t *dest, size_t n, const wchar_t *src)
{
    size_t len;
    len = wcslen(src) + 1;
    if (len < n) {
        wcscpy(dest, src);
        return 0;
    }
    return 1;
}

static inline int wcscat_s(wchar_t *dest, size_t n, const wchar_t *src)
{
    size_t len;
    len = wcslen(src) + 1;
    if (len < n) {
        wcscat(dest, src);
        return 0;
    }
    return 1;
}

#endif

#endif
