#include <Sticky.h>

class Sandbox : public Sticky::Application {
public:
	Sandbox() {
	}

	// override keyword ensures the function overrides the implementation of the virtual method by the parent class
	~Sandbox() override {
	}
};

Sticky::Application* Sticky::createApplication() {
	return new Sandbox();
}