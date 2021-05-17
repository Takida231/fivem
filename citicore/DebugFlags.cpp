/*
 * This file is part of the CitizenFX project - http://citizen.re/
 *
 * See LICENSE and MENTIONS in the root of the source tree for information
 * regarding licensing.
 */

#include "StdInc.h"

static bool g_isDebuggerPresent;

bool CoreIsDebuggerPresent()
{
	return g_isDebuggerPresent;
}

void CoreSetDebuggerPresent()
{
#ifdef _WIN32
	g_isDebuggerPresent = IsDebuggerPresent();
#endif
}
