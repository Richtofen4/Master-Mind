#pragma once
#include "Losowanie.h"

class Kulki {
private:
    Losowanie& losu;
    sf::RectangleShape obszar1;
    sf::RectangleShape obszar2;
    sf::RectangleShape obszar3;
    sf::RectangleShape obszar4;
    sf::RectangleShape obszar5;
    sf::RectangleShape obszar6;
    sf::RectangleShape obszar7;
    sf::RectangleShape obszar8;
    sf::RectangleShape obszarx1;
    sf::RectangleShape obszarx2;
    sf::RectangleShape obszarx3;
    sf::RectangleShape obszarx4;

    float y0, y1, y2, y3, y4, y5, y6, y7, y8;
    void WyborKulki(const sf::RenderWindow& window);

    void wyrysujKulkewobszarze1(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze2(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze3(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze4(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze5(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze6(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze7(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze8(const sf::RenderWindow& window);
    void wyrysujKulkewobszarze9(const sf::RenderWindow& window);

    void wyrysuj1(sf::RenderWindow& window);
    void wyrysuj2(sf::RenderWindow& window);
    void wyrysuj3(sf::RenderWindow& window);
    void wyrysuj4(sf::RenderWindow& window);
    void wyrysuj5(sf::RenderWindow& window);
    void wyrysuj6(sf::RenderWindow& window);
    void wyrysuj7(sf::RenderWindow& window);
    void wyrysuj8(sf::RenderWindow& window);
    void wyrysuj9(sf::RenderWindow& window);
public:
    Kulki(Losowanie& _losu);
    void wyrysuj(sf::RenderWindow& window);
    void zbudujkulka(const sf::RenderWindow& window);
};
