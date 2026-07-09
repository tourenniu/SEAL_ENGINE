#pragma once
//这里是要导入dll文件的类，这里我们定义了一个Application类
#include "Core.h"
namespace SEAL
{
	class SEAL_API Application
	{
	public:
		Application();
		~Application();
		void Run();
	};
	//这个CreateApplication我们在Sandbox中定义
	Application* CreateApplication();
}