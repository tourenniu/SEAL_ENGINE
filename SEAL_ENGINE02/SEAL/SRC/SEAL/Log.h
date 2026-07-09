#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace SEAL
{
	class SEAL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}


//Core log macros
#define SEAL_CORE_ERROR(...) ::SEAL::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SEAL_CORE_INFO(...)  ::SEAL::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SEAL_CORE_TRACE(...) ::SEAL::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SEAL_CORE_WARN(...)  ::SEAL::Log::GetCoreLogger()->warn(__VA_ARGS__)

#define SEAL_CLIENT_ERROR(...) ::SEAL::Log::GetClientLogger()->error(__VA_ARGS__)
#define SEAL_CLIENT_INFO(...)  ::SEAL::Log::GetClientLogger()->info(__VA_ARGS__)
#define SEAL_CLIENT_TRACE(...) ::SEAL::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SEAL_CLIENT_WARN(...)  ::SEAL::Log::GetClientLogger()->warn(__VA_ARGS__)

//这里SEAL之前的::是表示全局作用域解析运算符
// 无论当前处于哪个嵌套命名空间（甚至如果你写了一个局部类也叫 SEAL），它都只认全局那个唯一的 SEAL。