#pragma once
#include<SFML/Graphics.hpp>

class Game
{
	public:
		sf::RenderWindow* window;
		
		void initWindow();
		
	public:
		Game();
		virtual ~Game();
		
	     
	     void run();  
	     
	     void update();
	     void render();
};

//#endif
