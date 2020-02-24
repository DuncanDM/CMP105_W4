#include "Cursor.h"

Cursor::Cursor()
{
	cursorTexture.loadFromFile("gfx/icon.png");
	cursorObj.setTexture(&cursorTexture);
	cursorObj.setSize(sf::Vector2f(40, 40));
	cursorObj.setPosition(-100, -100);
}

Cursor::~Cursor()
{

}

void Cursor::GetVar(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	window->setMouseCursorVisible(false);
}

void Cursor::update(float dt)
{
	cursorX = input->getMouseX();
	cursorY = input->getMouseY();

	cursorObj.setPosition(cursorX, cursorY);
}