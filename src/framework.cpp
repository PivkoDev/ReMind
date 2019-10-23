#include "framework.h"

#include <iostream>
#include <string>

#include "glew.h"
#include "freeglut.h"

#include "Managers\ShaderManager.h"
#include "Managers\SceneManager.h"
#include "Core\Init_GLUT.h"
#include "Core\Init_GLEW.h"

Renderer::Renderer()
{
	init();
}

void
Renderer::init()
{
	std::cout << "Renderer::init()" << std::endl;
}

void
Renderer::renderOpenGL()
{
	WindowInfo window("Brutus v.0.1", 400, 200, 800, 600, true);
	ContextInfo context(4, 5, true);
	FramebufferInfo frameBufferInfo(true, true, true, true);
	Init_GLUT::init(window, context, frameBufferInfo);
	Init_GLEW::Init();

	IListener* scene = new SceneManager();
	Init_GLUT::setListener(scene);
	Init_GLUT::run();

	delete scene;
}

void remind_init()
{
	

	
}

void remind_render()
{
	static Renderer renderer;

	renderer.renderOpenGL();

}