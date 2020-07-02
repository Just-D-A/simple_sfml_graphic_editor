#pragma once
#include <SFML\Graphics\RenderWindow.hpp>

using namespace sf;

class MainShape
{
public:
 	MainShape() {};
	MainShape(RenderWindow& window) {};
	virtual void drawShape() = 0;
	virtual void setColorShape(Color color) = 0;
};