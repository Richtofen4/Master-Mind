#pragma once
#include <iostream>
#include "Losowanie.h"
#include <SFML/Graphics.hpp>
using namespace std;
class Plansza
{
    Losowanie& l;
    sf::Font font;
    sf::Text myText;
    void napis(sf::RenderWindow& window);
    void wyborkulki(sf::RenderWindow& window);
    void krozowe(sf::RenderWindow& window);
    void kciemnoNiebieski(sf::RenderWindow& window);
    void kzolte(sf::RenderWindow& window);
    void kjasnoZielone(sf::RenderWindow& window);
    void kciemnoZielone(sf::RenderWindow& window);
    void kblekitny(sf::RenderWindow& window);
    void kbrazowy(sf::RenderWindow& window);
    void kpomaranczowy(sf::RenderWindow& window);
    void rysujKwadrat(sf::RenderWindow& window, float x, float y, float dlugoscBoku, float gruboscLinii);
    void rysujProstokat(sf::RenderWindow& window, float x, float y, float szerokosc, float wysokosc);
    void kzgadnij(sf::RenderWindow& window);
    void kwskazowka(sf::RenderWindow& window);
    void kodpowiedz(sf::RenderWindow& window);
    void instrukcja(sf::RenderWindow& window);
public:
    Plansza(Losowanie& _l);
    void zbuduj(sf::RenderWindow& window);
};

