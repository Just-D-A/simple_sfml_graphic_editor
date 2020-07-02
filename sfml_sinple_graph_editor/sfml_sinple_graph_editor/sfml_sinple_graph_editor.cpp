#include <SFML/Graphics.hpp>
#include <iostream>
#include "Globals.h"

#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

#include "Background.cpp"
//#include "Shapes.h"

using namespace sf; // подключаем пространство имён sf

void drawBackground(RenderWindow& window)
{
	Background backgr(window); 
	backgr.draw();
}

MainShape* createShape(int y, RenderWindow& window) {
	if ((y >= 0) && (y < WINDOW_HEIGHT / LEFT_SHAPES_COUNT)) {
		return new Triangle(window);
	} else if ((y >= WINDOW_HEIGHT / LEFT_SHAPES_COUNT) && (y < 2*WINDOW_HEIGHT / LEFT_SHAPES_COUNT)) {
		return new Rectangle(window);
	} else {
		return new Circle(window);
	}
}

Color setColorMainShape(int y) {
	if ((y >= 0) && (y < WINDOW_HEIGHT / LEFT_SHAPES_COUNT)) {
		return Color::Red;
	}
	else if ((y >= WINDOW_HEIGHT / LEFT_SHAPES_COUNT) && (y < 2 * WINDOW_HEIGHT / LEFT_SHAPES_COUNT)) {
		return Color::Blue;
	}
	else {
		return Color::Green;
	}
}

int main()
{
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML Works!");
	MainShape* mainShape = NULL;
	mainShape = NULL;
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{		
			if (Mouse::isButtonPressed(Mouse::Left)) {
				Vector2i pixelPos = Mouse::getPosition(window);//забираем коорд курсора
				int x = pixelPos.x;
				if (x < BLACK_RECTANGLE_WIDTH) 
				{
					//create shape
					mainShape = createShape(pixelPos.y, window);
				}
				else if ((x > (WINDOW_WIDTH - BLACK_RECTANGLE_WIDTH)) && (mainShape != NULL))
				{
					//set shape main shape collor
					mainShape->setColorShape(setColorMainShape(pixelPos.y));
				}
			}

			if (event.type == Event::Closed)
				window.close(); // тогда закрываем его
		}
		
		drawBackground(window);
		if (mainShape != NULL) {
			mainShape->drawShape();
		}
		window.display();
		window.clear(Color(250, 220, 100));
	
	}

	return 0;
}

