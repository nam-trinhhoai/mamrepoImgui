/*
 *
 *
 *  Created on: 22 June 2022
 *      Author: l0359127
 */

#ifndef NEXTVISION_SRC_WIDGET_WGEOMECHANICS_IMGUICORE_H_
#define NEXTVISION_SRC_WIDGET_WGEOMECHANICS_IMGUICORE_H_

#include "imgui.h"
#include "imgui_impl_sdl.h"
#include "imgui_impl_opengl3.h"
#include "implot.h"
#include <SDL.h>
#include <stdio.h>
#include <iostream>

#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <SDL_opengles2.h>
#else
#include <SDL_opengl.h>
#endif

class ImGuiCore
{
public:
	ImGuiCore();

	virtual ~ImGuiCore();

	void show();

	virtual void mainCode();
	
	//void crossHairCursor(SDL_Renderer* renderer);
};

#endif // NEXTVISION_SRC_WIDGET_WGEOMECHANICS_IMGUICORE_H_
