#pragma once

#include "Framework/GameObject.h";

class Background :public GameObject
{
public:
	Background();
	~Background();

	GameObject backgroundObj;
	sf::Texture backgroundTexture;
};