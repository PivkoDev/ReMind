#include "framework.h"

#include <iostream>


Renderer::Renderer()
{
	init();
}

void
Renderer::init()
{
	std::cout << "Renderer::init()" << std::endl;
}

void remind_init()
{
	static Renderer renderer;

	
}