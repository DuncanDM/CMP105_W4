#include "Enemy.h"

Enemy::Enemy()
{
	enemyObject.setSize(sf::Vector2f(100, 100));

	speed = 250.f;
}

Enemy::~Enemy()
{

}

void Enemy::GetWindow(sf::RenderWindow* hwnd)
{
	window = hwnd;
}

void Enemy::update(float dt)
{
	sf::Vector2f enemyPos = enemyObject.getPosition();
	sf::Vector2u winSize = window->getSize();

	if (enemyPos.x >= winSize.x - 100)
	{
		forward = false;
	}
	else if (enemyPos.x <= 0)
	{
		forward = true;
	}

	if (forward == true)
	{
		enemyObject.move(speed * dt, 0);
	}
	else
	{
		enemyObject.move(-speed * dt, 0);
	}
}