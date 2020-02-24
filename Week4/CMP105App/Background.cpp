#include "Background.h"

Background::Background()
{
	backgroundTexture.loadFromFile("gfx/Level1_1.png");
	backgroundObj.setTexture(&backgroundTexture);
	backgroundObj.setSize(sf::Vector2f(11038, 675));
	backgroundObj.setPosition(0, 0);
}

Background::~Background()
{

}