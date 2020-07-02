#include "Triangle.h"

	void Triangle::drawShape()
	{
		CircleShape triangle(MAIN_TRIANGLE_SIZE, TRIANGLE_ANGLE_COUNT);
		triangle.setFillColor(m_color);
		triangle.setPosition((WINDOW_WIDTH / 2) - MAIN_CIRCLE_SIZE, (WINDOW_HEIGHT / 2) - MAIN_CIRCLE_SIZE);
		m_window.draw(triangle);
	};

	void Triangle::setColorShape(Color color)
	{
		m_color = color;
	};

/*#include <SFML/Graphics.hpp>
#include "MainShape.cpp"
#include "Globals.h"

using namespace sf;

class Triangle : public MainShape {
public:
	Triangle(RenderWindow& window) : m_window(window), m_color(Color::White)
	{
	};
	void draw()
	{
		CircleShape triangle(MAIN_TRIANGLE_SIZE, TRIANGLE_ANGLE_COUNT);
		triangle.setFillColor(m_color);
		triangle.setPosition((WINDOW_WIDTH / 2) - MAIN_CIRCLE_SIZE, (WINDOW_HEIGHT / 2) - MAIN_CIRCLE_SIZE);
		m_window.draw(triangle);
	};
	void setColor(Color color)
	{
		m_color = color;
	}

private:
	RenderWindow& m_window;
	Color m_color;

};*/