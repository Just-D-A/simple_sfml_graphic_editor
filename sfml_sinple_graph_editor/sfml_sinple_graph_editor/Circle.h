#pragma once
#include <SFML/Graphics.hpp>
#include "MainShape.h"
#include "Globals.h"
using namespace sf;
class Circle : public MainShape {
public:
	Circle(RenderWindow& window) : m_window(window), m_color(Color::White) {};
	void drawShape();
	void setColorShape(Color color);

private:
	RenderWindow& m_window;
	Color m_color;
};