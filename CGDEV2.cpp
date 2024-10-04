// C++Gdevep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<SFML\Graphics.hpp>
using namespace std;
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "2D App");
	//first rectangle
	sf::RectangleShape rect(sf::Vector2f(50, 50));
	rect.setPosition(sf::Vector2f(400, 300));
	rect.setOrigin(sf::Vector2f(0,0));
	bool x1 = false, o1 = false;
	//second rectangle
	sf::RectangleShape rect2(sf::Vector2f(50, 50));
	rect2.setPosition(sf::Vector2f(450, 300));
	rect2.setOrigin(sf::Vector2f(0,0));
	rect2.setFillColor(sf::Color::Green);
	bool x2= false, o2 = false;
	//Third rectangle
	sf::RectangleShape rect3(sf::Vector2f(50, 50));
	rect3.setPosition(sf::Vector2f(500, 300));
	rect3.setOrigin(sf::Vector2f(0,0));
	rect3.setFillColor(sf::Color::Red);
	bool x3= false, o3 = false;
	//fourth rectangle
	sf::RectangleShape rect4(sf::Vector2f(50, 50));
	rect4.setPosition(sf::Vector2f(400, 350));
	rect4.setOrigin(sf::Vector2f(0,0));
	rect4.setFillColor(sf::Color::Blue);
	bool x4= false, o4 = false;
	//fifth rectangle
	sf::RectangleShape rect5(sf::Vector2f(50, 50));
	rect5.setPosition(sf::Vector2f(450, 350));
	rect5.setOrigin(sf::Vector2f(0,0));
	rect5.setFillColor(sf::Color::Yellow);
	bool x5= false, o5 = false;
	//sixth rectangle
	sf::RectangleShape rect6(sf::Vector2f(50, 50));
	rect6.setPosition(sf::Vector2f(500, 350));
	rect6.setOrigin(sf::Vector2f(0,0));
	rect6.setFillColor(sf::Color::Cyan);
	bool x6 = false, o6 = false;
	//seventh rectangle
	sf::RectangleShape rect7(sf::Vector2f(50, 50));
	rect7.setPosition(sf::Vector2f(400, 400));
	rect7.setOrigin(sf::Vector2f(0, 0));
	rect7.setFillColor(sf::Color::Magenta);
	bool x7 = false, o7 = false;
	//eighth rectanglet
	sf::RectangleShape rect8(sf::Vector2f(50, 50));
	rect8.setPosition(sf::Vector2f(450, 400));
	rect8.setOrigin(sf::Vector2f(0, 0));
	rect8.setFillColor(sf::Color::Green);
	bool x8 = true, o8 = false;
	//nineth rectangle
	sf::RectangleShape rect9(sf::Vector2f(50, 50));
	rect9.setPosition(sf::Vector2f(500, 400));
	rect9.setOrigin(sf::Vector2f(0, 0));
	rect9.setFillColor(sf::Color::Blue);
	bool x9 = false, o9 = false;
	bool gameOn = true;

	//font and text
	sf::Font font;
	if (!font.loadFromFile("Data/arial.ttf")) {
		return 0;
	}
	//this is not working
	sf::Text text;
	text.setFont(font);
	text.setCharacterSize(16);
	text.setString("Welcome to our Tic Tac Toe Game");
    text.setPosition(sf::Vector2f(400, 100));
	text.setOrigin(sf::Vector2f(0, 0));
	text.setFillColor(sf::Color::Red);
	//rect.setFillColor(sf::Color::Blue);
char Ticx[] = "Data/Tic-x.png";
char Ticy[] = "Data/Tic-y.png";
int y,*x=&y,*m=&y;
if (x == &y) {cout<<"hi";}
//int &z = y;
//sf::Image images;
//	images.loadFromFile(image);
sf::Texture tex;
	try{
	tex.loadFromFile(Ticx);
	}
	catch (exception e) { cout << "Image cannot be loaded" << endl; }
	sf::Texture tex2;
	try {
		tex2.loadFromFile(Ticy);
	}
	catch (exception e) { cout << "Image cannot be loaded" << endl; }
	const sf::Texture *tex3 = &tex;
/////	else { cout << "image loaded" << endl; }
//	rect.setTexture(&tex);
//	rect.setSize(sf::Vector2f(400, 100));
//	rect.setOrigin(sf::Vector2f(0, 0));
	bool  xactive = true;
	int turn = 1;
	string str = "Player 1 turn";
	string str2 = "Player 2 turn";

	//text.setString(str);
	while (window.isOpen()) {
		//rect.move(0.001f,0.002f);
		//rect.rotate(0.020);
		if (xactive) { text.setString(str); }
		else text.setString(str2);
		sf::Event event;
		
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::MouseButtonPressed&&gameOn) {
				/*if (turn == 1) { turn++;
				text.setString("Player 2 turn");
				}
				else { turn--; 
				text.setString("Player 1 turn");
				}*/
				//use the code below for game logic
			//	sf::Texture tex3 = rect.getTexture;
				//if (rect.getTexture == tex) {}
				if ((event.mouseButton.x >= 400 && event.mouseButton.x < 450) && (event.mouseButton.y >= 300 && event.mouseButton.y < 350))
				{
					if (xactive) {
						rect.setTexture(&tex);
						xactive = false;
						x1 = true;
					}
					else {
						rect.setTexture(&tex2);
						xactive = true;
						o1 = true;
					}
				}
				if ((event.mouseButton.x >= 450 && event.mouseButton.x < 500) && (event.mouseButton.y >= 300 && event.mouseButton.y < 350))
				{
					if (xactive) {
						rect2.setTexture(&tex);
						xactive = false;
						x2 = true;
					}
					else {
						rect2.setTexture(&tex2);
						xactive = true;
						o2= true;
					}
				}
				if ((event.mouseButton.x >=500 && event.mouseButton.x < 550) && (event.mouseButton.y >= 300 && event.mouseButton.y < 350))
				{
					if (xactive) {
						rect3.setTexture(&tex);
						xactive = false;
						x3 = true;
					}
					else {
						rect3.setTexture(&tex2);
						xactive = true;
						o3=true;
					}
				}
				if ((event.mouseButton.x >=400 && event.mouseButton.x <450) && (event.mouseButton.y >= 350 && event.mouseButton.y < 400))
				{
					if (xactive) {
						rect4.setTexture(&tex);
						xactive = false;
						x4 = true;
					}
					else {
						rect4.setTexture(&tex2);
						xactive = true;
						o4=true;
					}
				}
				if ((event.mouseButton.x >=450 && event.mouseButton.x <500) && (event.mouseButton.y >= 350 && event.mouseButton.y < 400))
				{
					if (xactive) {
						rect5.setTexture(&tex);
						xactive = false;
						x5 = true;
					}
					else {
						rect5.setTexture(&tex2);
						xactive = true;
						o5=true;
					}
				}
				if ((event.mouseButton.x >= 500 && event.mouseButton.x < 550) && (event.mouseButton.y >= 350 && event.mouseButton.y < 400))
				{
					if (xactive) {
						rect6.setTexture(&tex);
						xactive = false;
						x6 = true;
					}
					else {
						rect6.setTexture(&tex2);
						xactive = true;
						o6=true;
					}
				}
				if ((event.mouseButton.x >= 400 && event.mouseButton.x < 450) && (event.mouseButton.y >= 400 && event.mouseButton.y < 450))
				{
					if (xactive) {
						rect7.setTexture(&tex);
						xactive = false;
						x7 = true;
					}
					else {
						rect7.setTexture(&tex2);
						xactive = true;
						o7=true;
					}
				}
				if ((event.mouseButton.x >= 450 && event.mouseButton.x <500) && (event.mouseButton.y >= 400 && event.mouseButton.y < 450))
				{
					if (xactive) {
						rect8.setTexture(&tex);
						xactive = false;
						x8 = true;
					}
					else {
						rect8.setTexture(&tex2);
						xactive = true;
						o8=true;
					}
				}
				if ((event.mouseButton.x >= 500 && event.mouseButton.x <550) && (event.mouseButton.y >= 400 && event.mouseButton.y < 450))
				{
					if (xactive) {
						rect9.setTexture(&tex);
						xactive = false;
						x9 = true;
					}
					else {
						rect9.setTexture(&tex2);
						xactive = true;
						o9=true;
					}
				}
			}
			
		}
		//logic handling
		if (x1&&x2&&x3) {
			text.setString("Game over,Player 1 won A");
			gameOn = false;
		}
		if (x1&&x4&&x7) {
			text.setString("Game over,Player 1 won B");
			gameOn = false;
		}
		if (x1&&x5&&x9) {
			text.setString("Game over,Player 1 won C");
			gameOn = false;
		}
		if (x3&&x5&&x7) {
			text.setString("Game over,Player 1 won D");
			gameOn = false;
		}
		if (x7&&x8&&x9) {
			text.setString("Game over,Player 1 won E");
			gameOn = false;
		}
		if (x3&&x6&&x9) {
			text.setString("Game over,Player 1 won F");
			gameOn = false;
		}
		if (x2&&x5&&x8) {
			text.setString("Game over,Player 1 won G");
			gameOn = false;
		}
		if (x4&&x5&&x6) {
			text.setString("Game over,Player 1 won H");
			gameOn = false;
		}

		//O logic handling


		if (o1&&o2&&o3) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		if (o1&&o4&&o7) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		if (o1&&o5&&o9) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		if (o3&&o5&&o7) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		if (o7&&o8&&o9) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		if (o3&&o6&&o9) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		if (o2&&o5&&o8) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		if (o4&&o5&&o6) {
			text.setString("Game over,Player 2 won");
			gameOn = false;
		}
		window.clear();
		window.draw(text);
		window.draw(rect);
		window.draw(rect2);
		window.draw(rect3);
		window.draw(rect4);
		window.draw(rect5);
		window.draw(rect6);
		window.draw(rect7);
		window.draw(rect8);
		window.draw(rect9);
		//window.draw(text);
		window.display();
	
	}
	//    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
