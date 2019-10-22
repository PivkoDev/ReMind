#pragma once

#define WIN32_LEAN_AND_MEAN        

#include <windows.h>


class Renderer
{
public:

	Renderer();
	
	void init();

};

#ifdef REMIND_EXPORTS
#define REMIND_API __declspec(dllexport)
#else
#define REMIND_API __declspec(dllimport)
#endif


// Get the position of the current value in the sequence.
extern "C" REMIND_API void remind_init();