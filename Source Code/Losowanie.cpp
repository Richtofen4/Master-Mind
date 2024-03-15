#include "Losowanie.h"
Losowanie::Losowanie() {
    wynik = 0;
    Kulka1 = 0; Kulka2 = 0; Kulka3 = 0; Kulka4 = 0;
    czarny = 0; bialy = 0;
    kiedygit = 0;
    obszarKlikniety = 0;
    czyt11 = 0; czyt12 = 0; czyt21 = 0; czyt22 = 0;
    czyt31 = 0; czyt32 = 0; czyt41 = 0; czyt42 = 0;
    czyt51 = 0; czyt52 = 0; czyt61 = 0; czyt62 = 0;
    czyt71 = 0; czyt72 = 0; czyt81 = 0; czyt82 = 0;
    czyt91 = 0; czyt92 = 0;
    test1 = 0, test2 = 0, test3 = 0, test4 = 0, test5 = 0,
        test6 = 0, test7 = 0, test8 = 0, test9 = 0, test10 = 0,
        test11 = 0, test12 = 0, test13 = 0, test14 = 0, test15 = 0,
        test16 = 0, test17 = 0, test18 = 0, test19 = 0, test20 = 0,
        test21 = 0, test22 = 0, test23 = 0, test24 = 0, test25 = 0,
        test26 = 0, test27 = 0, test28 = 0, test29 = 0, test30 = 0,
        test31 = 0, test32 = 0, test33 = 0, test34 = 0, test35 = 0,
        test36 = 0;
    los1 = 0, los2 = 0, los3 = 0, los4 = 0;
}

void Losowanie::settest(int nowytest) {
    test1 = nowytest;
    test2 = nowytest;
    test3 = nowytest;
    test4 = nowytest;
    test5 = nowytest;
    test6 = nowytest;
    test7 = nowytest;
    test8 = nowytest;
    test9 = nowytest;
    test10 = nowytest;
    test11 = nowytest;
    test12 = nowytest;
    test13 = nowytest;
    test14 = nowytest;
    test15 = nowytest;
    test16 = nowytest;
    test17 = nowytest;
    test18 = nowytest;
    test19 = nowytest;
    test20 = nowytest;
    test21 = nowytest;
    test22 = nowytest;
    test23 = nowytest;
    test24 = nowytest;
    test25 = nowytest;
    test26 = nowytest;
    test27 = nowytest;
    test28 = nowytest;
    test29 = nowytest;
    test30 = nowytest;
    test31 = nowytest;
    test32 = nowytest;
    test33 = nowytest;
    test34 = nowytest;
    test35 = nowytest;
    test36 = nowytest;
}

void Losowanie::sprwskazowek() {
    vector<int> losowe = { Kulka1, Kulka2, Kulka3, Kulka4 };
    vector<int> wylosowane = { los1, los2, los3, los4 };
    vector<bool> sprawdzoneLiczby = { false, false, false, false };
    vector<bool> trafioneLosowe = { false, false, false, false };

    // Sprawdümy czarne trafienia
    for (int i = 0; i < 4; ++i) {
        if (losowe[i] == wylosowane[i]) {
            czarny++;
            sprawdzoneLiczby[i] = true;
            trafioneLosowe[i] = true;
        }
    }
    // Sprawdümy bia≥e trafienia
    for (int i = 0; i < 4; ++i) {
        if (!trafioneLosowe[i]) {
            for (int j = 0; j < 4; ++j) {
                if (!sprawdzoneLiczby[j] && losowe[i] == wylosowane[j]) {
                    bialy++;
                    sprawdzoneLiczby[j] = true;
                    break;
                }
            }
        }
    }
    //cout << "Ile czarny: " << czarny << "\nIle bialy: " << bialy << endl;
}

void Losowanie::wyrysujwskazowki1(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt11;
    const int bi = czyt12;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 645);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 645);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 645);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki2(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt21;
    const int bi = czyt22;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 585);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 585);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 585);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki3(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt31;
    const int bi = czyt32;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 525);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 525);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 525);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki4(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt41;
    const int bi = czyt42;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 465);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 465);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 465);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki5(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt51;
    const int bi = czyt52;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 405);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 405);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 405);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki6(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt61;
    const int bi = czyt62;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 345);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 345);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 345);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki7(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt71;
    const int bi = czyt72;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 285);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 285);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 285);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki8(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt81;
    const int bi = czyt82;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 225);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 225);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 225);
        window.draw(kulka1);
        ++ile;
    }
}
void Losowanie::wyrysujwskazowki9(sf::RenderWindow& window) {
    float ile = 0;
    const int cz = czyt91;
    const int bi = czyt92;
    //cout << "Carny: " << cz << "Bialy: " << bi << endl;
    for (int i = 0; i < cz; ++i) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Black);
        kulka1.setPosition(670 + 25 * ile, 165);
        window.draw(kulka1);
        ++ile;
    }
    for (int j = 0; j < bi; ++j) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::White);
        kulka1.setPosition(670 + 25 * ile, 165);
        window.draw(kulka1);
        ++ile;
    }
    for (int k = cz + bi; k < 4; ++k) {
        sf::CircleShape kulka1(10);
        kulka1.setFillColor(sf::Color::Red);
        kulka1.setPosition(670 + 25 * ile, 165);
        window.draw(kulka1);
        ++ile;
    }
}

void Losowanie::wyrysujwskazowki(sf::RenderWindow& window) {
    switch (kiedygit) {
    case 1:
        wyrysujwskazowki1(window);
        break;
    case 2:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window);
        break;
    case 3:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window); wyrysujwskazowki3(window);
        break;
    case 4:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window); wyrysujwskazowki3(window); wyrysujwskazowki4(window);
        break;
    case 5:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window); wyrysujwskazowki3(window); wyrysujwskazowki4(window); wyrysujwskazowki5(window);
        break;
    case 6:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window); wyrysujwskazowki3(window); wyrysujwskazowki4(window); wyrysujwskazowki5(window);
        wyrysujwskazowki6(window);
        break;
    case 7:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window); wyrysujwskazowki3(window); wyrysujwskazowki4(window); wyrysujwskazowki5(window);
        wyrysujwskazowki6(window); wyrysujwskazowki7(window);
        break;
    case 8:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window); wyrysujwskazowki3(window); wyrysujwskazowki4(window); wyrysujwskazowki5(window);
        wyrysujwskazowki6(window); wyrysujwskazowki7(window); wyrysujwskazowki8(window);
        break;
    case 9:
        wyrysujwskazowki1(window); wyrysujwskazowki2(window); wyrysujwskazowki3(window); wyrysujwskazowki4(window); wyrysujwskazowki5(window);
        wyrysujwskazowki6(window); wyrysujwskazowki7(window); wyrysujwskazowki8(window); wyrysujwskazowki9(window);
        break;
    default:
        break;
    }
}

void Losowanie::losujPiecLiczb() {
    srand(static_cast<unsigned int>(time(nullptr)));
    los1 = (rand() % 8) + 1;
    los2 = (rand() % 8) + 1;
    los3 = (rand() % 8) + 1;
    los4 = (rand() % 8) + 1;
    //cout << los1 << "\t" << los2 << "\t" << los3 << "\t" << los4 << endl;
}