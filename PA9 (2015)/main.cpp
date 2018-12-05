#include<SFML\Graphics.hpp>
#include<iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000,600), "Awesome Game");

	sf::Font font;
	if (!font.loadFromFile("FontFile.ttf"))
	{
		std::cout << "Error loading file" << std::endl;

		system("pause");
	}

	sf::Text text1, text2, text3, text4;
	text1.setFont(font);
	text1.setString("Welcome to the exciting, evolutionary and teaching game 'PLANT  THE  TREE '");

	text1.setCharacterSize(60);
	text1.setFillColor(sf::Color::Red);		
	text1.setStyle(sf::Text::Underlined);
	


	//Main Menu
	text2.setFont(font);
	text2.setLineSpacing(3);
	text2.setString(" \nMain Menu\n");
	text2.setCharacterSize(40);
	text2.setFillColor(sf::Color::White);
	text2.setStyle(sf::Text::Underlined);
	text2.setLineSpacing(2);
	
    
	text3.setFont(font);
	text3.setLineSpacing(1);
	text3.setString(" \n \n \nPlay : press Space   \n Exit : press Enter");
	text3.setCharacterSize(40);
	text3.setFillColor(sf::Color::White);
	window.clear();

	
	while (window.isOpen())
	{
		sf::Event event;
		// handle all events
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed)
			{
					//play
					if (event.key.code == sf::Keyboard::Space)
					{
				
						//print rules
						window.clear();
						text4.setFont(font);
						text4.setString("\n \n \n \n \n \n!!!Game Rules!!! \nThe game starts with you putting one or more seeds into the ground with a mouse click. \nIt will grow to a little plant and eventually to a tree. \nBased on the treatment, if the tree gets watered, fertilized appropritely it will grow fast or get broken. \nTry out, how well you can handle a plant! \nKeys to use: \nW  to  water \nF  to  fertilize");
						text4.setCharacterSize(40);
						text4.setFillColor(sf::Color::White);
						//then go to actual game
					}
					//exit
					//if (event.key.code == sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Enter))
					if (event.key.code == sf::Keyboard::Enter)
					{
						window.close();
					}
			}



			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		// update the game
		window.clear();
		window.draw(text1);
		window.draw(text2);
		window.draw(text3);
		window.draw(text4);
		window.display();
	}
	return 0;
}



//	sf::RenderWindow window(sf::VideoMode(1000, 600), "Tree");
//	/*sf::CircleShape shape(100.f);
//	shape.setFillColor(sf::Color::Green);
//	sf::RectangleShape rectangle(sf::Vector2f(120.f, 50.f));
//	shape.setFillColor(sf::Color::Magenta);*/
//
//	
//	
//	while (window.isOpen())
//	{
//		sf::Text text;
//		sf::Font font;
//		// select the font
//		text.setFont(font);
//		// set the string to display
//		text.setString("Welcome to the exciting, evolutionary and teaching game 'PLANT THE TREE'!");
//		// set the character size
//		text.setCharacterSize(24);
//		// set the color
//		text.setFillColor(sf::Color::White);
//		// set the text style
//		text.setStyle(sf::Text::Bold | sf::Text::Underlined);
//
//
//
//		sf::Event event;
//
//		text.setFont(font);
//		text.setString("Main Menu");
//		text.setStyle(sf::Text::Underlined);
//		text.setString("Play -> press Space");
//		text.setString("Exit -> press Enter");
//		text.setCharacterSize(18);
//		text.setFillColor(sf::Color::White);
//
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//
//			if (event.type == sf::Event::KeyPressed)
//			{
//				//if (sf::Event::key )
//				//play
//				if (event.key.code == sf::Keyboard::Space)
//				{
//					//print rules
//					text.setString("The game starts with you putting a seed into the ground.");
//					text.setString("It will grow to a little plant and eventually to a tree.");
//					text.setString("Based on the treatment, if the tree gets watered, fertilized appropritely it will grow fast or get broken.");
//					text.setString("Keys to use:");
//					text.setString("w to water");
//					text.setString("f to fertilize");
//					//then go to actual game
//					//left water, right fertilize
//				}
//				//exit
//				if (event.key.code == sf::Keyboard::Enter)
//				{
//
//				}
//			}
//		}
//		window.clear();
//		//window.draw(shape);
//		window.draw(text);
//		window.display();
//	}
//	
//
//	return 0;
//}