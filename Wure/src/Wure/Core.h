#pragma once

#ifdef WR_PLATFORM_WINDOWS
	#ifdef WR_BUILD_DLL
		#define WURE_API __declspec(dllexport)
	#else
		#define WURE_API __declspec(dllimport)
	#endif
#else
	#error Wure only supports Windows!
#endif
