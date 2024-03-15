#include "Kulki.h"
Kulki::Kulki(Losowanie& _losu) : losu(_losu) {
    y0 = 630;
    y1 = 570;
    y2 = 510;
    y3 = 450;
    y4 = 390;
    y5 = 330;
    y6 = 270;
    y7 = 210;
    y8 = 150;

    obszar1.setSize(sf::Vector2f(59, 59)); // Obszar 1
    obszar1.setPosition(75, 415);

    obszar2.setSize(sf::Vector2f(59, 59)); // Obszar 2
    obszar2.setPosition(135, 415);

    obszar3.setSize(sf::Vector2f(59, 59)); // Obszar 3
    obszar3.setPosition(195, 415);

    obszar4.setSize(sf::Vector2f(59, 59)); // Obszar 4
    obszar4.setPosition(255, 415);

    obszar5.setSize(sf::Vector2f(59, 59)); // Obszar 5
    obszar5.setPosition(75, 475);

    obszar6.setSize(sf::Vector2f(59, 59)); // Obszar 6
    obszar6.setPosition(135, 475);

    obszar7.setSize(sf::Vector2f(59, 59)); // Obszar 7
    obszar7.setPosition(195, 475);

    obszar8.setSize(sf::Vector2f(59, 59)); // Obszar 8
    obszar8.setPosition(255, 475);

    obszarx1.setSize(sf::Vector2f(64, 590)); // Obszar x1
    obszarx1.setPosition(360, 100);

    obszarx2.setSize(sf::Vector2f(59, 590)); // Obszar x2
    obszarx2.setPosition(425, 100);

    obszarx3.setSize(sf::Vector2f(59, 590)); // Obszar x3
    obszarx3.setPosition(485, 100);

    obszarx4.setSize(sf::Vector2f(64, 590)); // Obszar x4
    obszarx4.setPosition(545, 100);
}

void Kulki::WyborKulki(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    // Sprawdzenie klikniêcia w obszar
    if (obszar1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 1;
    }
    else if (obszar2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 2;
    }
    else if (obszar3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 3;
    }
    else if (obszar4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 4;
    }
    else if (obszar5.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 5;
    }
    else if (obszar6.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 6;
    }
    else if (obszar7.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 7;
    }
    else if (obszar8.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        losu.obszarKlikniety = 8;
    }

}

void Kulki::wyrysujKulkewobszarze1(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test1 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test1 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test1 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test1 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test1 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test1 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test1 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test1 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test2 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test2 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test2 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test2 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test2 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test2 = 6; losu.Kulka2 = 6;;
            break;
        case 7:
            losu.test2 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test2 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test3 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test3 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test3 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test3 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test3 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test3 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test3 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test3 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test4 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test4 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test4 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test4 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test4 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test4 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test4 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test4 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze2(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test5 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test5 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test5 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test5 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test5 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test5 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test5 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test5 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test6 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test6 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test6 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test6 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test6 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test6 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test6 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test6 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test7 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test7 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test7 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test7 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test7 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test7 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test7 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test7 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test8 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test8 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test8 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test8 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test8 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test8 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test8 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test8 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze3(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test9 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test9 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test9 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test9 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test9 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test9 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test9 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test9 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test10 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test10 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test10 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test10 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test10 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test10 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test10 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test10 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test11 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test11 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test11 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test11 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test11 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test11 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test11 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test11 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test12 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test12 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test12 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test12 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test12 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test12 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test12 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test12 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze4(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test13 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test13 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test13 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test13 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test13 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test13 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test13 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test13 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test14 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test14 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test14 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test14 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test14 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test14 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test14 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test14 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test15 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test15 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test15 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test15 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test15 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test15 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test15 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test15 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test16 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test16 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test16 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test16 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test16 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test16 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test16 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test16 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze5(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test17 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test17 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test17 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test17 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test17 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test17 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test17 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test17 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test18 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test18 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test18 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test18 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test18 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test18 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test18 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test18 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test19 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test19 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test19 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test19 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test19 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test19 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test19 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test19 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test20 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test20 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test20 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test20 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test20 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test20 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test20 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test20 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze6(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test21 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test21 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test21 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test21 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test21 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test21 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test21 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test21 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test22 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test22 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test22 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test22 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test22 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test22 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test22 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test22 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test23 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test23 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test23 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test23 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test23 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test23 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test23 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test23 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test24 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test24 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test24 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test24 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test24 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test24 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test24 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test24 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze7(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test25 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test25 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test25 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test25 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test25 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test25 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test25 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test25 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test26 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test26 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test26 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test26 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test26 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test26 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test26 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test26 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test27 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test27 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test27 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test27 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test27 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test27 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test27 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test27 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test28 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test28 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test28 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test28 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test28 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test28 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test28 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test28 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze8(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test29 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test29 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test29 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test29 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test29 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test29 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test29 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test29 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test30 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test30 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test30 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test30 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test30 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test30 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test30 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test30 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test31 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test31 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test31 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test31 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test31 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test31 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test31 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test31 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test32 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test32 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test32 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test32 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test32 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test32 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test32 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test32 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}
void Kulki::wyrysujKulkewobszarze9(const sf::RenderWindow& window) {
    const sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    if (obszarx1.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test33 = 1; losu.Kulka1 = 1;
            break;
        case 2:
            losu.test33 = 2; losu.Kulka1 = 2;
            break;
        case 3:
            losu.test33 = 3; losu.Kulka1 = 3;
            break;
        case 4:
            losu.test33 = 4; losu.Kulka1 = 4;
            break;
        case 5:
            losu.test33 = 5; losu.Kulka1 = 5;
            break;
        case 6:
            losu.test33 = 6; losu.Kulka1 = 6;
            break;
        case 7:
            losu.test33 = 7; losu.Kulka1 = 7;
            break;
        case 8:
            losu.test33 = 8; losu.Kulka1 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx2.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test34 = 1; losu.Kulka2 = 1;
            break;
        case 2:
            losu.test34 = 2; losu.Kulka2 = 2;
            break;
        case 3:
            losu.test34 = 3; losu.Kulka2 = 3;
            break;
        case 4:
            losu.test34 = 4; losu.Kulka2 = 4;
            break;
        case 5:
            losu.test34 = 5; losu.Kulka2 = 5;
            break;
        case 6:
            losu.test34 = 6; losu.Kulka2 = 6;
            break;
        case 7:
            losu.test34 = 7; losu.Kulka2 = 7;
            break;
        case 8:
            losu.test34 = 8; losu.Kulka2 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx3.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test35 = 1; losu.Kulka3 = 1;
            break;
        case 2:
            losu.test35 = 2; losu.Kulka3 = 2;
            break;
        case 3:
            losu.test35 = 3; losu.Kulka3 = 3;
            break;
        case 4:
            losu.test35 = 4; losu.Kulka3 = 4;
            break;
        case 5:
            losu.test35 = 5; losu.Kulka3 = 5;
            break;
        case 6:
            losu.test35 = 6; losu.Kulka3 = 6;
            break;
        case 7:
            losu.test35 = 7; losu.Kulka3 = 7;
            break;
        case 8:
            losu.test35 = 8; losu.Kulka3 = 8;
            break;
        default:
            break;
        }
    }

    if (obszarx4.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos))) {
        switch (losu.obszarKlikniety) {
        case 1:
            losu.test36 = 1; losu.Kulka4 = 1;
            break;
        case 2:
            losu.test36 = 2; losu.Kulka4 = 2;
            break;
        case 3:
            losu.test36 = 3; losu.Kulka4 = 3;
            break;
        case 4:
            losu.test36 = 4; losu.Kulka4 = 4;
            break;
        case 5:
            losu.test36 = 5; losu.Kulka4 = 5;
            break;
        case 6:
            losu.test36 = 6; losu.Kulka4 = 6;
            break;
        case 7:
            losu.test36 = 7; losu.Kulka4 = 7;
            break;
        case 8:
            losu.test36 = 8; losu.Kulka4 = 8;
            break;
        default:
            break;
        }
    }
}

void Kulki::wyrysuj1(sf::RenderWindow& window) {
    if (losu.test1 >= 1 && losu.test1 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test1) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y0);
        window.draw(kulka);
    }

    if (losu.test2 >= 1 && losu.test2 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test2) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y0);
        window.draw(kulka);
    }

    if (losu.test3 >= 1 && losu.test3 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test3) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y0);
        window.draw(kulka);
    }

    if (losu.test4 >= 1 && losu.test4 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test4) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y0);
        window.draw(kulka);
    }

}
void Kulki::wyrysuj2(sf::RenderWindow& window) {
    if (losu.test5 >= 1 && losu.test5 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test5) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y1);
        window.draw(kulka);
    }

    if (losu.test6 >= 1 && losu.test6 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test6) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y1);
        window.draw(kulka);
    }

    if (losu.test7 >= 1 && losu.test7 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test7) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y1);
        window.draw(kulka);
    }
    if (losu.test8 >= 1 && losu.test8 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test8) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y1);
        window.draw(kulka);
    }
}
void Kulki::wyrysuj3(sf::RenderWindow& window) {
    if (losu.test9 >= 1 && losu.test9 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test9) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y2);
        window.draw(kulka);
    }

    if (losu.test10 >= 1 && losu.test10 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test10) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y2);
        window.draw(kulka);
    }

    if (losu.test11 >= 1 && losu.test11 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test11) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y2);
        window.draw(kulka);
    }
    if (losu.test12 >= 1 && losu.test12 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test12) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y2);
        window.draw(kulka);
    }
}
void Kulki::wyrysuj4(sf::RenderWindow& window) {
    if (losu.test13 >= 1 && losu.test13 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test13) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y3);
        window.draw(kulka);
    }

    if (losu.test14 >= 1 && losu.test14 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test14) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y3);
        window.draw(kulka);
    }

    if (losu.test15 >= 1 && losu.test15 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test15) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y3);
        window.draw(kulka);
    }
    if (losu.test16 >= 1 && losu.test16 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test16) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y3);
        window.draw(kulka);
    }
}
void Kulki::wyrysuj5(sf::RenderWindow& window) {
    if (losu.test17 >= 1 && losu.test17 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test17) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y4);
        window.draw(kulka);
    }

    if (losu.test18 >= 1 && losu.test18 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test18) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y4);
        window.draw(kulka);
    }

    if (losu.test19 >= 1 && losu.test19 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test19) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y4);
        window.draw(kulka);
    }
    if (losu.test20 >= 1 && losu.test20 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test20) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y4);
        window.draw(kulka);
    }
}
void Kulki::wyrysuj6(sf::RenderWindow& window) {
    if (losu.test21 >= 1 && losu.test21 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test21) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y5);
        window.draw(kulka);
    }

    if (losu.test22 >= 1 && losu.test22 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test22) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y5);
        window.draw(kulka);
    }

    if (losu.test23 >= 1 && losu.test23 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test23) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y5);
        window.draw(kulka);
    }
    if (losu.test24 >= 1 && losu.test24 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test24) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y5);
        window.draw(kulka);
    }
}
void Kulki::wyrysuj7(sf::RenderWindow& window) {
    if (losu.test25 >= 1 && losu.test25 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test25) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y6);
        window.draw(kulka);
    }

    if (losu.test26 >= 1 && losu.test26 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test26) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y6);
        window.draw(kulka);
    }

    if (losu.test27 >= 1 && losu.test27 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test27) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y6);
        window.draw(kulka);
    }
    if (losu.test28 >= 1 && losu.test28 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test28) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y6);
        window.draw(kulka);
    }
}
void Kulki::wyrysuj8(sf::RenderWindow& window) {
    if (losu.test29 >= 1 && losu.test29 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test29) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y7);
        window.draw(kulka);
    }

    if (losu.test30 >= 1 && losu.test30 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test30) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y7);
        window.draw(kulka);
    }

    if (losu.test31 >= 1 && losu.test31 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test31) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y7);
        window.draw(kulka);
    }
    if (losu.test32 >= 1 && losu.test32 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test32) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y7);
        window.draw(kulka);
    }
}
void Kulki::wyrysuj9(sf::RenderWindow& window) {
    if (losu.test33 >= 1 && losu.test33 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test33) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(370, y8);
        window.draw(kulka);
    }

    if (losu.test34 >= 1 && losu.test34 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test34) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(430, y8);
        window.draw(kulka);
    }

    if (losu.test35 >= 1 && losu.test35 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test35) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(490, y8);
        window.draw(kulka);
    }
    if (losu.test36 >= 1 && losu.test36 <= 8) {
        sf::CircleShape kulka(25);
        switch (losu.test36) {
        case 1:
            kulka.setFillColor(sf::Color(255, 192, 203));
            break;
        case 2:
            kulka.setFillColor(sf::Color(0, 0, 128));
            break;
        case 3:
            kulka.setFillColor(sf::Color::Yellow);
            break;
        case 4:
            kulka.setFillColor(sf::Color(144, 238, 144));
            break;
        case 5:
            kulka.setFillColor(sf::Color(0, 100, 0));
            break;
        case 6:
            kulka.setFillColor(sf::Color(135, 206, 250));
            break;
        case 7:
            kulka.setFillColor(sf::Color(139, 69, 19));
            break;
        case 8:
            kulka.setFillColor(sf::Color(255, 165, 0));
            break;
        default:
            break;
        }
        kulka.setPosition(550, y8);
        window.draw(kulka);
    }
}

void Kulki::zbudujkulka(const sf::RenderWindow& window) {
    switch (losu.wynik) {
    case 0:
        wyrysujKulkewobszarze1(window);
        break;
    case 1:
        wyrysujKulkewobszarze2(window);
        break;
    case 2:
        wyrysujKulkewobszarze3(window);
        break;
    case 3:
        wyrysujKulkewobszarze4(window);
        break;
    case 4:
        wyrysujKulkewobszarze5(window);
        break;
    case 5:
        wyrysujKulkewobszarze6(window);
        break;
    case 6:
        wyrysujKulkewobszarze7(window);
        break;
    case 7:
        wyrysujKulkewobszarze8(window);
        break;
    case 8:
        wyrysujKulkewobszarze9(window);
        break;
    default:
        break;
    }
    WyborKulki(window);
}
void Kulki::wyrysuj(sf::RenderWindow& window) {
    wyrysuj1(window);
    wyrysuj2(window);
    wyrysuj3(window);
    wyrysuj4(window);
    wyrysuj5(window);
    wyrysuj6(window);
    wyrysuj7(window);
    wyrysuj8(window);
    wyrysuj9(window);
}