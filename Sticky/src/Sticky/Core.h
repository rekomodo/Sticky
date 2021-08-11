#pragma once

#ifdef STK_PLATFORM_WINDOWS
	#ifdef STK_BUILD_DLL
		#define STICKY_API __declspec(dllexport)
	#else
		#define STICKY_API __declspec(dllimport)
	#endif
#else
	#error Sticky only supports Windows.
#endif