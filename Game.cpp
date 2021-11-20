#include "Game.h"

void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800,600), "Game");
	this->window->setFramerateLimit(144);
	this->window->setVerticalSyncEnbled(false);
}

Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

void Game::run()
{
	while(this->window->isOpen())
	{
	  this->update();
	  this->render();
     }
}

void Game::update()
{
	
}

void Game::render()
{
	this->widow->clear();
	this->widow->display();
}
