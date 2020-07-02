#include <SFML/Graphics.hpp>
#include "Globals.h"
using namespace sf;
class Background
{ 
public:
	Background(RenderWindow& window) :m_window(window) {};
	void draw()
	{
		//left part
		int leftShapesCounter = 1;
		drawLeftRectangles();
		CircleShape triangle(LEFT_TRIANGLE_SIZE, TRIANGLE_ANGLE_COUNT);
		triangle.setPosition(BLACK_RECTANGLE_WIDTH/2 - LEFT_TRIANGLE_SIZE,  (leftShapesCounter *WINDOW_HEIGHT/ LEFT_SHAPES_COUNT) - (WINDOW_HEIGHT /(LEFT_SHAPES_COUNT*2)) - (LEFT_TRIANGLE_SIZE /2));
		triangle.setFillColor(Color::White);
		m_window.draw(triangle);
		leftShapesCounter++;

		RectangleShape rectangle(Vector2f(LEFT_CIRCLE_SIZE*2, LEFT_CIRCLE_SIZE*2));
		rectangle.setPosition(BLACK_RECTANGLE_WIDTH/2 - (LEFT_CIRCLE_SIZE), (leftShapesCounter * WINDOW_HEIGHT / LEFT_SHAPES_COUNT) - (WINDOW_HEIGHT / (LEFT_SHAPES_COUNT*2)) - LEFT_CIRCLE_SIZE );
		rectangle.setFillColor(Color::White);
		m_window.draw(rectangle);
		leftShapesCounter++;

		CircleShape circle(LEFT_CIRCLE_SIZE);
		circle.setFillColor(Color::White);
		circle.setPosition((BLACK_RECTANGLE_WIDTH/2)- LEFT_CIRCLE_SIZE, (leftShapesCounter * WINDOW_HEIGHT / LEFT_SHAPES_COUNT)- (WINDOW_HEIGHT / (LEFT_SHAPES_COUNT*2)) - LEFT_CIRCLE_SIZE);
		m_window.draw(circle);
		leftShapesCounter++;
		//left part end

		//right part
		drawRightRectangles();
		int rightShapesCounter = 1;

		RectangleShape rectangleTop(Vector2f(LEFT_CIRCLE_SIZE * 2, LEFT_CIRCLE_SIZE * 2));
		rectangleTop.setPosition((BLACK_RECTANGLE_WIDTH / 2) + (WINDOW_WIDTH - BLACK_RECTANGLE_WIDTH)  - (LEFT_CIRCLE_SIZE), (rightShapesCounter * WINDOW_HEIGHT / LEFT_SHAPES_COUNT) - (WINDOW_HEIGHT / (LEFT_SHAPES_COUNT * 2)) - LEFT_CIRCLE_SIZE);
		rectangleTop.setFillColor(Color::Red);
		m_window.draw(rectangleTop);
		rightShapesCounter++;

		RectangleShape rectangleMid(Vector2f(LEFT_CIRCLE_SIZE * 2, LEFT_CIRCLE_SIZE * 2));
		rectangleMid.setPosition((BLACK_RECTANGLE_WIDTH / 2) + (WINDOW_WIDTH - BLACK_RECTANGLE_WIDTH) - (LEFT_CIRCLE_SIZE), (rightShapesCounter * WINDOW_HEIGHT / LEFT_SHAPES_COUNT) - (WINDOW_HEIGHT / (LEFT_SHAPES_COUNT * 2)) - LEFT_CIRCLE_SIZE);
		rectangleMid.setFillColor(Color::Blue);
		m_window.draw(rectangleMid);
		rightShapesCounter++;

		RectangleShape rectangleBot(Vector2f(LEFT_CIRCLE_SIZE * 2, LEFT_CIRCLE_SIZE * 2));
		rectangleBot.setPosition((BLACK_RECTANGLE_WIDTH / 2) + (WINDOW_WIDTH - BLACK_RECTANGLE_WIDTH) - (LEFT_CIRCLE_SIZE), (rightShapesCounter * WINDOW_HEIGHT / LEFT_SHAPES_COUNT) - (WINDOW_HEIGHT / (LEFT_SHAPES_COUNT * 2)) - LEFT_CIRCLE_SIZE);
		rectangleBot.setFillColor(Color::Green);
		m_window.draw(rectangleBot);
		rightShapesCounter++;
		//right part end

	};

private:
	RenderWindow& m_window;
	void drawLeftRectangles() 
	{
		RectangleShape rectangle(Vector2f(BLACK_RECTANGLE_WIDTH, WINDOW_HEIGHT));
		rectangle.setPosition(0, 0);
		rectangle.setFillColor(Color(0, 0, 0));
		m_window.draw(rectangle);

		for (int i = 0; i < 3; i++) {
			RectangleShape rectangle(Vector2f(BLACK_RECTANGLE_WIDTH-2*SECTORS_PADDING, WINDOW_HEIGHT/ LEFT_SHAPES_COUNT - 2* SECTORS_PADDING));
			rectangle.setPosition(SECTORS_PADDING, i*WINDOW_HEIGHT / LEFT_SHAPES_COUNT + (SECTORS_PADDING/2));
			rectangle.setFillColor(Color(180, 230, 230));
			m_window.draw(rectangle);

		}
	}

	void drawRightRectangles()
	{
		RectangleShape rectangle(Vector2f(BLACK_RECTANGLE_WIDTH, WINDOW_HEIGHT));
		rectangle.setPosition(WINDOW_WIDTH - BLACK_RECTANGLE_WIDTH, 0);
		rectangle.setFillColor(Color(0, 0, 0));
		m_window.draw(rectangle);

		for (int i = 0; i < 3; i++) {
			RectangleShape rectangle(Vector2f(BLACK_RECTANGLE_WIDTH - 2 * SECTORS_PADDING, WINDOW_HEIGHT / LEFT_SHAPES_COUNT - 2 * SECTORS_PADDING));
			rectangle.setPosition(WINDOW_WIDTH - BLACK_RECTANGLE_WIDTH + SECTORS_PADDING, i * WINDOW_HEIGHT / LEFT_SHAPES_COUNT + (SECTORS_PADDING / 2));
			rectangle.setFillColor(Color(180, 230, 230));
			m_window.draw(rectangle);

		}
	}
};