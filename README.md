# Master Mind w C++

## Opis projektu
Aplikacja jest implementacj� gry logicznej Master Mind, w kt�rej zadaniem gracza jest odgadni�cie ukrytej kombinacji kolor�w. Program zosta� napisany w C++ z wykorzystaniem biblioteki SFML i jest przeznaczony do dzia�ania na systemach z graficznym interfejsem u�ytkownika.

## Funkcje
- Graficzny interfejs u�ytkownika do interakcji z graczem.
- Losowanie kombinacji kolor�w przez komputer.
- Odpowiedzi komputera w postaci kolorowych wskaz�wek.
- Przyciski do obs�ugi gry: nowa gra, sprawdzenie kombinacji i zako�czenie gry.

## Wymagania
- SFML (Simple and Fast Multimedia Library) zainstalowany i skonfigurowany.
- Kompilator obs�uguj�cy standard C++17 lub nowszy.

## Instrukcja
1. Sklonuj repozytorium na swoje lokalne �rodowisko.
2. Upewnij si�, �e masz zainstalowan� bibliotek� SFML i skonfiguruj projekt, aby j� uwzgl�dnia�.
3. Skompiluj projekt przy u�yciu wybranego IDE lub narz�dzia kompilacji.
4. Uruchom wykonywalny plik `.exe` aby rozpocz�� gr�.

## Struktura projektu
Projekt sk�ada si� z kilku kluczowych klas:
- `Plansza.cpp` & `Plansza.h` - zarz�dzanie plansz� gry, w tym rozmieszczanie kulek i przycisk�w.
- `Guzik.cpp` & `Guzik.h` - obs�uga przycisk�w interfejsu u�ytkownika.
- `Losowanie.cpp` & `Losowanie.h` - logika losowania kombinacji kolor�w.
- `Kulki.cpp` & `Kulki.h` - reprezentacja kulek i ich umiejscowienie.
- `main.cpp` - punkt wej�cia do aplikacji, inicjalizacja g��wnego okna gry.

## Jak uruchomi�
Aby uruchomi� gr�, wykonaj nast�puj�ce kroki:
- Skompiluj kod �r�d�owy i wygeneruj plik wykonywalny.
- Uruchom plik wykonywalny.