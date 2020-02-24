#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	player.setInput(input);

	enemy.GetWindow(window);
	enemyTexture.loadFromFile("gfx/Goomba.png");
	enemy.enemyObject.setTexture(&enemyTexture);
	enemy.enemyObject.setPosition(100, 300);

	enemy2.GetWindow(window);
	enemy2Texture.loadFromFile("gfx/Block.png");
	enemy2.enemyObject.setTexture(&enemy2Texture);
	enemy2.enemyObject.setPosition(400, 500);

	cursor.GetVar(window, input);

	view = window->getView();
	speed = 500.0f;
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	viewPos = view.getCenter().x;

	winSize = window->getSize().x;

	if (input->isKeyDown(sf::Keyboard::D) && viewPos <= 11038 - winSize / 2)
	{
		view = window->getView();
		view.move(speed * dt, 0);
		window->setView(view);
	}

	if (input->isKeyDown(sf::Keyboard::A) && viewPos >= 0 + winSize / 2)
	{
		view = window->getView();
		view.move(-speed * dt, 0);
		window->setView(view);
	}

	player.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	enemy.update(dt);
	enemy2.update(dt);

	cursor.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background.backgroundObj);
	window->draw(player.playerObject);
	window->draw(enemy.enemyObject);
	window->draw(enemy2.enemyObject);
	window->draw(cursor.cursorObj);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}