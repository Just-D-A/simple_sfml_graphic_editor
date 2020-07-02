#include "Rectangle.h"
using namespace sf;

void Rectangle::drawShape()
{
	RectangleShape rectangle(Vector2f(MAIN_RECTANGLE_SIZE, MAIN_RECTANGLE_SIZE));
	rectangle.setFillColor(m_color);
	rectangle.setPosition((WINDOW_WIDTH / 2) - (MAIN_RECTANGLE_SIZE/2), (WINDOW_HEIGHT / 2) - (MAIN_RECTANGLE_SIZE/2));
	m_window.draw(rectangle);

};

void Rectangle::setColorShape(Color color)
{
	m_color = color;
};
