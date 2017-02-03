#ifndef APPLICATION_H
#define APPLICATION_H

#define WIN32_LEAN_AND_MEAN

#include <assert.h>
#include <stdio.h>
#include <windows.h>
#include <d3d11.h>
#include "CommonApp.h"
#include "CommonMesh.h"
#include "BoidManager.h"

class HeightMap;
class BoidManager;

///Code in this file has been modified from Brown (2015)


//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

class Application : public CommonApp
{
public:
	static Application* s_pApp;

protected:
	bool HandleStart();
	void HandleStop();
	void HandleUpdate();
	void HandleRender();

private:
	float m_rotationAngle;
	float m_cameraZ;
	bool m_bWireframe;

	int m_cameraState;

	HeightMap* m_pHeightMap;
	BoidManager* m_bManager;
};



#endif

