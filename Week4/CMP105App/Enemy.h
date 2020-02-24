#pragma once

#include "Framework/GameObject.h";

class Enemy :public GameObject
{
public:
	Enemy();
	~Enemy();

	void GetWindow(sf::RenderWindow* hwnd);
	void update(float dt);

	GameObject enemyObject;
	sf::RenderWindow* window;

	float speed;
	bool forward;
};
