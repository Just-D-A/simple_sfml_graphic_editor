#include "Circle.h"
using namespace sf;

	void Circle::drawShape()
	{
		CircleShape circle(MAIN_CIRCLE_SIZE);
		circle.setFillColor(m_color);
		circle.setPosition((WINDOW_WIDTH / 2) - MAIN_CIRCLE_SIZE, (WINDOW_HEIGHT / 2) - MAIN_CIRCLE_SIZE);
		m_window.draw(circle);
	};

	void Circle::setColorShape(Color color)
	{
		m_color = color;
	};
	