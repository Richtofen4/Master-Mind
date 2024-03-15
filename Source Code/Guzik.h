#pragma once
#include "Losowanie.h"
class Guzik
{
	Losowanie& lo;
	sf::RectangleShape pzamknij;
	sf::RectangleShape psprawdz;
	sf::RectangleShape pnowagra;
	sf::Font font;
	sf::Text myText;

	void gzamknij(sf::RenderWindow& window);
	void gsprawdz(sf::RenderWindow& window);
	void gnowagra(sf::RenderWindow& window);

	void kolizjagzamknij(sf::RenderWindow& window);
	void kolizjagsprawdz(const sf::RenderWindow& window);
	void kolizjagnowagra(const sf::RenderWindow& window);

	void Komunikat(const std::string& message);
public:
	int decyzja;
	Guzik(Losowanie& _lo);
	void zbuduj2(sf::RenderWindow& window);
	void kolizjaguzik(sf::RenderWindow& window);

	void wyrysowaniepoprawnychodpowiedzi(sf::RenderWindow& window);
};

