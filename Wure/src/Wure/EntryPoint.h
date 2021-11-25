#pragma once

#ifdef WR_PLATFORM_WINDOWS

extern Wure::Application* Wure::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Wure::CreateApplication();
	app->Run();
	delete app;
}

#endif