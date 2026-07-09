#pragma once
//这里是引擎的入口，就是说如果定义了这个宏，那么就声明一个外部的函数返回应用实例的指针
//然后主函数创建应用实例，调用运行函数。

#include "Log.h"
#ifdef SEAL_PLATFORM_WINDOWS

extern SEAL::Application* SEAL::CreateApplication();

int main(int argc,char** argv)
{
	SEAL::Log::Init();
	SEAL_CORE_INFO("Initliaze CoreLogger!");
	SEAL_CLIENT_INFO("HELLO!");
	auto app = SEAL::CreateApplication();
	app->Run();
	delete app;
}

#endif