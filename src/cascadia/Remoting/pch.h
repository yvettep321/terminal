﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// pch.h
// Header for platform projection include files
//

#pragma once

#define WIN32_LEAN_AND_MEAN
#define NOMCX
#define NOHELP
#define NOCOMM

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#define BLOCK_TIL
#include <LibraryIncludes.h>
// This is inexplicable, but for whatever reason, cppwinrt conflicts with the
//      SDK definition of this function, so the only fix is to undef it.
// from WinBase.h
// Windows::UI::Xaml::Media::Animation::IStoryboard::GetCurrentTime
#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

#include <wil/cppwinrt.h>

#include <unknwn.h>

#include <hstring.h>

#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.System.h>

// Including TraceLogging essentials for the binary
#include <TraceLoggingProvider.h>
#include <winmeta.h>
TRACELOGGING_DECLARE_PROVIDER(g_hSettingsModelProvider);
#include <telemetry/ProjectTelemetry.h>
#include <TraceLoggingActivity.h>

#include <shellapi.h>

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#include "til.h"
