#pragma once
#include "Core.h"

namespace Sticky {
	class STICKY_API Application
	{
	public: 
		Application();
		
		//virtual functions can be overwritten by child/sub classes
		//functions will call methods belonging to the declared type, unless overwritten because the base function is virtual
		virtual ~Application();
		
		void Run();
	};

	//To be defined in CLIENT
	Application* createApplication();
}