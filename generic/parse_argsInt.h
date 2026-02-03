#ifndef _PARSE_ARGS_MAIN_H
#define _PARSE_ARGS_MAIN_H

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <tcl.h>

#ifndef TCL_SIZE_MAX
/* Tcl 8 compatibility */
#include <limits.h>
typedef int Tcl_Size;
#define TCL_SIZE_MAX INT_MAX
#define TCL_SIZE_MODIFIER ""
#define Tcl_GetSizeIntFromObj Tcl_GetIntFromObj
#endif

#include "tclstuff.h"
#include "tip445.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#ifdef _MSC_VER
#include <malloc.h>             /* Needed for _malloca and _freea */
#endif

#endif
