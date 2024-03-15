# Master Mind w C++

## Opis projektu
Aplikacja jest implementacj¹ gry logicznej Master Mind, w której zadaniem gracza jest odgadniêcie ukrytej kombinacji kolorów. Program zosta³ napisany w C++ z wykorzystaniem biblioteki SFML i jest przeznaczony do dzia³ania na systemach z graficznym interfejsem u¿ytkownika.

## Funkcje
- Graficzny interfejs u¿ytkownika do interakcji z graczem.
- Losowanie kombinacji kolorów przez komputer.
- Odpowiedzi komputera w postaci kolorowych wskazówek.
- Przyciski do obs³ugi gry: nowa gra, sprawdzenie kombinacji i zakoñczenie gry.

## Wymagania
- SFML (Simple and Fast Multimedia Library) zainstalowany i skonfigurowany.
- Kompilator obs³uguj¹cy standard C++17 lub nowszy.

## Instrukcja
1. Sklonuj repozytorium na swoje lokalne œrodowisko.
2. Upewnij siê, ¿e masz zainstalowan¹ bibliotekê SFML i skonfiguruj projekt, aby j¹ uwzglêdnia³.
3. Skompiluj projekt przy u¿yciu wybranego IDE lub narzêdzia kompilacji.
4. Uruchom wykonywalny plik `.exe` aby rozpocz¹æ grê.

## Struktura projektu
Projekt sk³ada siê z kilku kluczowych klas:
- `Plansza.cpp` & `Plansza.h` - zarz¹dzanie plansz¹ gry, w tym rozmieszczanie kulek i przycisków.
- `Guzik.cpp` & `Guzik.h` - obs³uga przycisków interfejsu u¿ytkownika.
- `Losowanie.cpp` & `Losowanie.h` - logika losowania kombinacji kolorów.
- `Kulki.cpp` & `Kulki.h` - reprezentacja kulek i ich umiejscowienie.
- `main.cpp` - punkt wejœcia do aplikacji, inicjalizacja g³ównego okna gry.

## Jak uruchomiæ
Aby uruchomiæ grê, wykonaj nastêpuj¹ce kroki:
- Skompiluj kod Ÿród³owy i wygeneruj plik wykonywalny.
- Uruchom plik wykonywalny.