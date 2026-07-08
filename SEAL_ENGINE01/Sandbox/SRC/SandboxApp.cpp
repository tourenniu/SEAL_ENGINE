#include <SEAL.h>

class Sandbox : public SEAL::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

SEAL::Application*  SEAL::CreateApplication()
{
	return new Sandbox();
	//这里写Sandbox也是一样的，是因为Sancbox里没有需要初始话的参数
}