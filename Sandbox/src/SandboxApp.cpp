#include <Wure.h>

class Sandbox : public Wure::Application {
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Wure::Application* Wure::CreateApplication()
{
	return new Sandbox();
}