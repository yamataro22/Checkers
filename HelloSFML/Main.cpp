#include "stdafx.h"
#include <memory>
#include "ChessEngine.h"
#include "HelloSFML.h"
//#include <SFML/Graphics.hpp>

//using namespace sf;

int main()
{
	ChessEngine engine;
	engine.addPlayers("Roman", "Grzegorz");
	engine.startGame();

	//VideoMode vm(1920, 1080);
	//RenderWindow window(vm, "TimberMan!!", Style::Fullscreen);

	//Texture backgroundTexture;
	//backgroundTexture.loadFromFile("graphics/background.png");

	//Sprite backgroundSprite;
	//backgroundSprite.setTexture(backgroundTexture);
	//backgroundSprite.setPosition(0, 0);


	//while (window.isOpen())
	//{
	//	if (Keyboard::isKeyPressed(Keyboard::Escape))
	//		window.close();

	//	//update the scene
	//	
	//	//draw the scene

	//	//clear last frame

	//	window.clear();

	//	//draw game scene

	//	window.draw(backgroundSprite);

	//	//show new stuff

	//	window.display();
	//}
	return 0;
}

