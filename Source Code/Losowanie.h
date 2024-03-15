#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <random>
#include <ctime>
#include <vector>
using namespace std;
class Losowanie
{
	sf::CircleShape circle;
	void wyrysujwskazowki1(sf::RenderWindow& window);
	void wyrysujwskazowki2(sf::RenderWindow& window);
	void wyrysujwskazowki3(sf::RenderWindow& window);
	void wyrysujwskazowki4(sf::RenderWindow& window);
	void wyrysujwskazowki5(sf::RenderWindow& window);
	void wyrysujwskazowki6(sf::RenderWindow& window);
	void wyrysujwskazowki7(sf::RenderWindow& window);
	void wyrysujwskazowki8(sf::RenderWindow& window);
	void wyrysujwskazowki9(sf::RenderWindow& window);
public:
	Losowanie();

	int obszarKlikniety;
	int wynik, Kulka1, Kulka2, Kulka3, Kulka4;
	int los1, los2, los3, los4;
	int czarny, bialy;
	int kiedygit;
	int czyt11, czyt12, czyt21, czyt22, czyt31, czyt32, czyt41, czyt42, czyt51, czyt52, czyt61, czyt62, czyt71, czyt72, czyt81, czyt82, czyt91, czyt92;

	int test1, test2, test3, test4, test5, test6, test7, test8, test9, test10,
		test11, test12, test13, test14, test15, test16, test17, test18, test19, test20,
		test21, test22, test23, test24, test25, test26, test27, test28, test29, test30,
		test31, test32, test33, test34, test35, test36;

	void settest(int nowytest);

	void losujPiecLiczb();

	void sprwskazowek();

	void wyrysujwskazowki(sf::RenderWindow& window);
};
