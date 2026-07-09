#pragma once
//这是定义导出为DLL的宏
#ifdef SEAL_PLATFORM_WINDOWS
  #ifdef SEAL_BUILD_DLL
    #define SEAL_API __declspec(dllexport)
  #else
    #define SEAL_API __declspec(dllimport)
  #endif // SEAL_BUILD_DLL
#else
  #error SEAL ONLY SUPPORT WINDOWS!
#endif // SEAL_PLATFORM_WINDOWS
