#pragma once
#include <SFML/Graphics.hpp>
#include "MainShape.h"
#include "Globals.h"
using namespace sf;
class Triangle : public MainShape {
public:
	Triangle(RenderWindow& window) : m_window(window), m_color(Color::White) {};
	void drawShape();
	void setColorShape(Color color);

private:
	RenderWindow& m_window;
	Color m_color;

};