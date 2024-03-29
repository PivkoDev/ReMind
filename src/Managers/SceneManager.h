#pragma once

#include "ShaderManager.h"
#include "ModelsManager.h"
#include "../Core/IListener.h"

class SceneManager : public IListener
{
public:
	SceneManager();
	~SceneManager();

	virtual void notifyBeginFrame();
	virtual void notifyDisplayFrame();
	virtual void notifyEndFrame();
	virtual void notifyReshape(
		int width,
		int height,
		int previous_width,
		int previous_height);
private:
	ShaderManager* shader_manager;
	ModelsManager* models_manager;
};
