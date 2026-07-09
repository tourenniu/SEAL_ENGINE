#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace SEAL
{
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n:%v%$");
		s_CoreLogger = spdlog::stdout_color_mt("SEAL_LOGGER");
		s_CoreLogger->set_level(spdlog::level::trace);
		s_ClientLogger = spdlog::stdout_color_mt("APP_LOGGER");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}