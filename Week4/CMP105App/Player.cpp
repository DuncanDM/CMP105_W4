#include "Player.h"

Player::Player()
{
	playerTexture.loadFromFile("gfx/MushroomTrans.png");
	playerObject.setTexture(&playerTexture);
	playerObject.setSize(sf::Vector2f(100, 100));
	playerObject.setPosition(100, 100);

	speed = 250.f;
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		playerObject.move(speed * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::Left))
	{
		playerObject.move(-speed * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		playerObject.move(0, -speed * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Down))
	{
		playerObject.move(0, speed * dt);
	}
}