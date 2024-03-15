#include "Okno.h"

void Okno::zbudujokno() {
    sf::RenderWindow window(sf::VideoMode(850, 750), "Mastermind Game");
    Losowanie l;
    Plansza p(l);
    Guzik g(l);
    Kulki k(l);
    l.losujPiecLiczb();

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::Resized)
                window.setSize(sf::Vector2u(850, 750)); // Ustaw sta³y rozmiar okna 
            else if (event.type == sf::Event::MouseMoved) {
                const sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                //cout << "Pozycja kursora: " << mousePosition.x << ", " << mousePosition.y << endl;
            }
            else if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    g.kolizjaguzik(window);
                    k.zbudujkulka(window);
                }
            }
        }

        window.clear(sf::Color(37, 150, 190));

        p.zbuduj(window);
        g.zbuduj2(window);
        k.wyrysuj(window);
        l.wyrysujwskazowki(window);
        if (g.decyzja == 1)
            g.wyrysowaniepoprawnychodpowiedzi(window);

        window.display();
    }
}
