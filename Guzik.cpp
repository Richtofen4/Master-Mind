#include "Guzik.h"
Guzik::Guzik(Losowanie& _lo) : lo(_lo) {
    decyzja = 0;
}

void Guzik::gzamknij(sf::RenderWindow& window) {

    pzamknij.setSize(sf::Vector2f(95, 25));
    pzamknij.setOutlineThickness(2);
    pzamknij.setFillColor(sf::Color(15, 60, 75));
    pzamknij.setOutlineColor(sf::Color::Black);
    pzamknij.setPosition(240, 650);
    window.draw(pzamknij);

    if (!font.loadFromFile("font/Roboto-Black.ttf")) {}
    myText.setFont(font);
    myText.setString("Zamknij");
    myText.setCharacterSize(26);
    myText.setFillColor(sf::Color::White);
    myText.setPosition(240, 645);
    window.draw(myText);
}
void Guzik::gsprawdz(sf::RenderWindow& window) {
    psprawdz.setSize(sf::Vector2f(105, 25));
    psprawdz.setOutlineThickness(2);
    psprawdz.setFillColor(sf::Color(15, 60, 75));
    psprawdz.setOutlineColor(sf::Color::Black);
    psprawdz.setPosition(430, 700);
    window.draw(psprawdz);

    if (!font.loadFromFile("font/Roboto-Black.ttf")) {}
    myText.setFont(font);
    myText.setString("Sprawdz");
    myText.setCharacterSize(26);
    myText.setFillColor(sf::Color::White);
    myText.setPosition(430, 695);
    window.draw(myText);
}
void Guzik::gnowagra(sf::RenderWindow& window) {
    pnowagra.setSize(sf::Vector2f(115, 25));
    pnowagra.setOutlineThickness(2);
    pnowagra.setFillColor(sf::Color(15, 60, 75));
    pnowagra.setOutlineColor(sf::Color::Black);
    pnowagra.setPosition(40, 650);
    window.draw(pnowagra);;

    if (!font.loadFromFile("font/Roboto-Black.ttf")) {}
    myText.setFont(font);
    myText.setString("Nowa Gra");
    myText.setCharacterSize(26);
    myText.setFillColor(sf::Color::White);
    myText.setPosition(40, 645);
    window.draw(myText);
}

void Guzik::kolizjagzamknij(sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (pzamknij.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        window.close();
    }
}
void Guzik::kolizjagsprawdz(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (psprawdz.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        lo.wynik += 1;
        lo.sprwskazowek();
        switch (lo.wynik) {
        case 1:
            lo.kiedygit += 1;
            lo.czyt11 = lo.czarny;
            lo.czyt12 = lo.bialy;
            break;
        case 2:
            lo.kiedygit += 1;
            lo.czyt21 = lo.czarny;
            lo.czyt22 = lo.bialy;
            break;
        case 3:
            lo.kiedygit += 1;
            lo.czyt31 = lo.czarny;
            lo.czyt32 = lo.bialy;
            break;
        case 4:
            lo.kiedygit += 1;
            lo.czyt41 = lo.czarny;
            lo.czyt42 = lo.bialy;
            break;
        case 5:
            lo.kiedygit += 1;
            lo.czyt51 = lo.czarny;
            lo.czyt52 = lo.bialy;
            break;
        case 6:
            lo.kiedygit += 1;
            lo.czyt61 = lo.czarny;
            lo.czyt62 = lo.bialy;
            break;
        case 7:
            lo.kiedygit += 1;
            lo.czyt71 = lo.czarny;
            lo.czyt72 = lo.bialy;
            break;
        case 8:
            lo.kiedygit += 1;
            lo.czyt81 = lo.czarny;
            lo.czyt82 = lo.bialy;
            break;
        case 9:
            lo.kiedygit += 1;
            lo.czyt91 = lo.czarny;
            lo.czyt92 = lo.bialy;
            break;
        default:
            break;
        }
        if (lo.czarny == 4) {
            string message;
            if (lo.wynik == 1)
                message = "Gratulacje, rozwiazales w " + to_string(lo.wynik) + " ture";
            else
                message = "Gratulacje, rozwiazales w " + to_string(lo.wynik) + " turach";
            Komunikat(message.c_str());
            lo.wynik = 10;
            decyzja = 1;
        }
        else {
            if (lo.wynik == 9) {
                Komunikat("Niestety, przegrales");
                decyzja = 1;
            }
        }
        lo.Kulka1 = 0;
        lo.Kulka2 = 0;
        lo.Kulka3 = 0;
        lo.Kulka4 = 0;
        lo.czarny = 0;
        lo.bialy = 0;
    }
}
void Guzik::kolizjagnowagra(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (pnowagra.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        lo.kiedygit = 0;
        lo.wynik = 0;
        lo.czarny = 0;
        decyzja = 0;
        lo.obszarKlikniety = 0;
        lo.settest(0);
        lo.losujPiecLiczb();
    }
}

void Guzik::Komunikat(const std::string& message) {
    static bool isWindowOpen = false;
    if (!isWindowOpen) {
        sf::RenderWindow window(sf::VideoMode(350, 200), "Komunikat");

        sf::Font font;
        if (!font.loadFromFile("font/Roboto-Black.ttf")) {}

        sf::Text text(message, font, 20);
        text.setFillColor(sf::Color::Black);
        text.setPosition(20, 50);

        sf::RectangleShape closeButton(sf::Vector2f(100, 30));
        closeButton.setFillColor(sf::Color(15, 60, 75));
        closeButton.setOutlineThickness(2);
        closeButton.setOutlineColor(sf::Color::Black);
        closeButton.setPosition(125, 120);

        sf::Text closeButtonText("Zamknij", font, 20);
        closeButtonText.setFillColor(sf::Color::White);

        const sf::FloatRect textRect = closeButtonText.getLocalBounds();
        closeButtonText.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
        closeButtonText.setPosition(closeButton.getPosition().x + closeButton.getSize().x / 2.0f, closeButton.getPosition().y + closeButton.getSize().y / 2.0f);

        isWindowOpen = true;

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                    isWindowOpen = false;
                }
                if (event.type == sf::Event::Resized)
                    window.setSize(sf::Vector2u(350, 200)); // Ustaw sta³y rozmiar okna 
                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                        if (closeButton.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
                            window.close();
                            isWindowOpen = false;
                        }
                    }
                }
            }

            window.clear(sf::Color::White);
            window.draw(text);
            window.draw(closeButton);
            window.draw(closeButtonText);
            window.display();
        }
    }
}

void Guzik::wyrysowaniepoprawnychodpowiedzi(sf::RenderWindow& window) {
    sf::CircleShape kulka1(25);
    switch (lo.los1) {
    case 1:
        kulka1.setFillColor(sf::Color(255, 192, 203));
        break;
    case 2:
        kulka1.setFillColor(sf::Color(0, 0, 128));
        break;
    case 3:
        kulka1.setFillColor(sf::Color::Yellow);
        break;
    case 4:
        kulka1.setFillColor(sf::Color(144, 238, 144));
        break;
    case 5:
        kulka1.setFillColor(sf::Color(0, 100, 0));
        break;
    case 6:
        kulka1.setFillColor(sf::Color(135, 206, 250));
        break;
    case 7:
        kulka1.setFillColor(sf::Color(139, 69, 19));
        break;
    case 8:
        kulka1.setFillColor(sf::Color(255, 165, 0));
        break;
    default:
        break;
    }
    kulka1.setPosition(370, 30);
    window.draw(kulka1);

    sf::CircleShape kulka2(25);
    switch (lo.los2) {
    case 1:
        kulka2.setFillColor(sf::Color(255, 192, 203));
        break;
    case 2:
        kulka2.setFillColor(sf::Color(0, 0, 128));
        break;
    case 3:
        kulka2.setFillColor(sf::Color::Yellow);
        break;
    case 4:
        kulka2.setFillColor(sf::Color(144, 238, 144));
        break;
    case 5:
        kulka2.setFillColor(sf::Color(0, 100, 0));
        break;
    case 6:
        kulka2.setFillColor(sf::Color(135, 206, 250));
        break;
    case 7:
        kulka2.setFillColor(sf::Color(139, 69, 19));
        break;
    case 8:
        kulka2.setFillColor(sf::Color(255, 165, 0));
        break;
    default:
        break;
    }
    kulka2.setPosition(430, 30);
    window.draw(kulka2);

    sf::CircleShape kulka3(25);
    switch (lo.los3) {
    case 1:
        kulka3.setFillColor(sf::Color(255, 192, 203));
        break;
    case 2:
        kulka3.setFillColor(sf::Color(0, 0, 128));
        break;
    case 3:
        kulka3.setFillColor(sf::Color::Yellow);
        break;
    case 4:
        kulka3.setFillColor(sf::Color(144, 238, 144));
        break;
    case 5:
        kulka3.setFillColor(sf::Color(0, 100, 0));
        break;
    case 6:
        kulka3.setFillColor(sf::Color(135, 206, 250));
        break;
    case 7:
        kulka3.setFillColor(sf::Color(139, 69, 19));
        break;
    case 8:
        kulka3.setFillColor(sf::Color(255, 165, 0));
        break;
    default:
        break;
    }
    kulka3.setPosition(490, 30);
    window.draw(kulka3);

    sf::CircleShape kulka4(25);
    switch (lo.los4) {
    case 1:
        kulka4.setFillColor(sf::Color(255, 192, 203));
        break;
    case 2:
        kulka4.setFillColor(sf::Color(0, 0, 128));
        break;
    case 3:
        kulka4.setFillColor(sf::Color::Yellow);
        break;
    case 4:
        kulka4.setFillColor(sf::Color(144, 238, 144));
        break;
    case 5:
        kulka4.setFillColor(sf::Color(0, 100, 0));
        break;
    case 6:
        kulka4.setFillColor(sf::Color(135, 206, 250));
        break;
    case 7:
        kulka4.setFillColor(sf::Color(139, 69, 19));
        break;
    case 8:
        kulka4.setFillColor(sf::Color(255, 165, 0));
        break;
    default:
        break;
    }
    kulka4.setPosition(550, 30);
    window.draw(kulka4);
}

void Guzik::zbuduj2(sf::RenderWindow& window) {
    gzamknij(window);
    gsprawdz(window);
    gnowagra(window);
}
void Guzik::kolizjaguzik(sf::RenderWindow& window) {
    kolizjagzamknij(window);
    kolizjagsprawdz(window);
    kolizjagnowagra(window);
}