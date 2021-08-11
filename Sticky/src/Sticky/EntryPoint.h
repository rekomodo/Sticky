#pragma once

#ifdef STK_PLATFORM_WINDOWS

extern Sticky::Application* Sticky::createApplication();

int main(int argc, char** argv) {
	auto app = Sticky::createApplication();
	app->Run();
	delete app;
}

#endif