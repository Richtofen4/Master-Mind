#include "Plansza.h"
Plansza::Plansza(Losowanie& _l) : l(_l) {}
void Plansza::napis(sf::RenderWindow& window) {
    if (!font.loadFromFile("font/Roboto-Black.ttf")) {}
    myText.setFont(font);
    myText.setString("Master Mind");
    myText.setCharacterSize(36);
    myText.setFillColor(sf::Color::Black);
    myText.setPosition(80, 50);
    window.draw(myText);

    myText.setFont(font);
    myText.setString("Wybor koloru kulki:");
    myText.setCharacterSize(20);
    myText.setFillColor(sf::Color::Black);
    myText.setPosition(110, 380);
    window.draw(myText);
}
void Plansza::wyborkulki(sf::RenderWindow& window) {
    sf::RectangleShape square(sf::Vector2f(59, 59));
    square.setFillColor(sf::Color::Black);
    switch (l.obszarKlikniety) {
    case 1:
        square.setPosition(75, 415);
        window.draw(square);
        break;
    case 2:
        square.setPosition(135, 415);
        window.draw(square);
        break;

    case 3:
        square.setPosition(195, 415);
        window.draw(square);
        break;
    case 4:
        square.setPosition(256, 415);
        window.draw(square);
        break;
    case 5:
        square.setPosition(75, 476);
        window.draw(square);
        break;
    case 6:
        square.setPosition(135, 476);
        window.draw(square);
        break;
    case 7:
        square.setPosition(195, 476);
        window.draw(square);
        break;
    case 8:
        square.setPosition(256, 476);
        window.draw(square);
        break;
    default:
        break;
    }
}
void Plansza::krozowe(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(255, 192, 203));
    circle.setPosition(80, 420);
    window.draw(circle);
}
void Plansza::kciemnoNiebieski(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(0, 0, 128));
    circle.setPosition(140, 420);
    window.draw(circle);
}
void Plansza::kzolte(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color::Yellow);
    circle.setPosition(200, 420);
    window.draw(circle);
}
void Plansza::kjasnoZielone(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(144, 238, 144));
    circle.setPosition(260, 420);
    window.draw(circle);
}
void Plansza::kciemnoZielone(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(0, 100, 0));
    circle.setPosition(80, 480);
    window.draw(circle);
}
void Plansza::kblekitny(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(135, 206, 250));
    circle.setPosition(140, 480);
    window.draw(circle);
}
void Plansza::kbrazowy(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(139, 69, 19));
    circle.setPosition(200, 480);
    window.draw(circle);
}
void Plansza::kpomaranczowy(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(255, 165, 0));
    circle.setPosition(260, 480);
    window.draw(circle);
}
void Plansza::rysujKwadrat(sf::RenderWindow& window, float x, float y, float dlugoscBoku, float gruboscLinii) {
    for (int j = 0; j < 2; ++j) {
        for (int i = 0; i < 4; ++i) {
            sf::RectangleShape kwadrat(sf::Vector2f(dlugoscBoku, dlugoscBoku));
            kwadrat.setOutlineThickness(gruboscLinii);
            kwadrat.setFillColor(sf::Color::Transparent);
            kwadrat.setOutlineColor(sf::Color::Black);
            kwadrat.setPosition(x + (dlugoscBoku)*i, y);
            window.draw(kwadrat);
        }
        y += dlugoscBoku;
    }
}
void Plansza::rysujProstokat(sf::RenderWindow& window, float x, float y, float szerokosc, float wysokosc) {
    sf::RectangleShape prostokat(sf::Vector2f(szerokosc, wysokosc));
    prostokat.setFillColor(sf::Color(30, 120, 150));
    prostokat.setPosition(x, y);
    window.draw(prostokat);
}
void Plansza::kzgadnij(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(128, 128, 128));
    constexpr float start_x = 370;

    for (float i = 0; i < 4; ++i) {
        for (float j = 0; j < 9; ++j) {
            circle.setPosition(start_x + i * 60, 630 - j * 60);
            window.draw(circle);
        }
    }
}
void Plansza::kwskazowka(sf::RenderWindow& window) {
    sf::CircleShape circle(10);
    circle.setFillColor(sf::Color(128, 128, 128));
    constexpr float start_x = 670;

    for (float i = 0; i < 4; ++i) {
        for (float j = 0; j < 9; ++j) {
            circle.setPosition(start_x + i * 25, 645 - j * 60);
            window.draw(circle);
        }
    }
}
void Plansza::kodpowiedz(sf::RenderWindow& window) {
    sf::CircleShape circle(25);
    circle.setFillColor(sf::Color(255, 255, 255));
    constexpr float start_x = 370;

    for (int i = 0; i < 4; ++i) {
        circle.setPosition(start_x + i * 60, 30);
        window.draw(circle);
    }
}
void Plansza::instrukcja(sf::RenderWindow& window) {
    sf::RectangleShape prostokat(sf::Vector2f(320, 180));
    prostokat.setOutlineThickness(2);
    prostokat.setFillColor(sf::Color::Transparent);
    prostokat.setOutlineColor(sf::Color::Black);
    prostokat.setPosition(30, 135);
    window.draw(prostokat);

    myText.setFont(font);
    myText.setString("Wskazówki dotyczace kulek : Zasady gry");

    myText.setCharacterSize(16);
    myText.setFillColor(sf::Color::Black);
    myText.setPosition(35, 140);
    window.draw(myText);
    sf::CircleShape kulka1(10);
    kulka1.setFillColor(sf::Color::Black);
    kulka1.setPosition(70, 180);
    window.draw(kulka1);

    myText.setFont(font);
    myText.setString(" - jedna z kulek ma wlasciwy kolor\n i znajduje sie we wlasciwym miejscu");
    myText.setCharacterSize(12);
    myText.setFillColor(sf::Color::Black);
    myText.setPosition(90, 180);
    window.draw(myText);

    sf::CircleShape kulka2(10);
    kulka2.setFillColor(sf::Color::White);
    kulka2.setPosition(70, 230);
    window.draw(kulka2);

    myText.setFont(font);
    myText.setString(" - jedna z kulek ma wlasciwy kolor\n ale znajduje sie w niewlasciwym miejsu");
    myText.setCharacterSize(12);
    myText.setFillColor(sf::Color::Black);
    myText.setPosition(90, 230);
    window.draw(myText);

    sf::CircleShape kulka3(10);
    kulka3.setFillColor(sf::Color::Red);
    kulka3.setPosition(70, 280);
    window.draw(kulka3);

    myText.setFont(font);
    myText.setString(" - jeden z podanych kolorow kulek\n nie wystepuje w ukladzie");
    myText.setCharacterSize(12);
    myText.setFillColor(sf::Color::Black);
    myText.setPosition(90, 280);
    window.draw(myText);
}
void Plansza::zbuduj(sf::RenderWindow& window) {
    napis(window);
    wyborkulki(window);
    krozowe(window);
    kciemnoNiebieski(window);
    kzolte(window);
    kjasnoZielone(window);
    kciemnoZielone(window);
    kblekitny(window);
    kbrazowy(window);
    kpomaranczowy(window);
    rysujKwadrat(window, 75, 415, 60, 1);
    rysujProstokat(window, 360, 10, 420, 730);
    kzgadnij(window);
    kwskazowka(window);
    kodpowiedz(window);
    instrukcja(window);
}