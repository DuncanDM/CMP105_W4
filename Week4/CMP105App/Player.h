#pragma once

#include "Framework/GameObject.h";

class Player:public GameObject
{
	public:
		GameObject playerObject;
		sf::Texture playerTexture;

		Player();
		~Player();
		
		void handleInput(float dt);

		float speed;
};