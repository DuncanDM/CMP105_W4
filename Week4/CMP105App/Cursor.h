#pragma once

#include "Framework/GameObject.h";

class Cursor :public GameObject
{
public:
	Cursor();
	~Cursor();

	void GetVar(sf::RenderWindow* hwnd, Input* in);
	void update(float dt);

	GameObject cursorObj;
	sf::Texture cursorTexture;

	sf::RenderWindow* window;

	int cursorX;
	int cursorY;
};
