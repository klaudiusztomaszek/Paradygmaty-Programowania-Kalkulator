// Kalkulator Kaludek.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;


int main(){
    int liczba1, liczba2;
    int wybor;

    do{
        cout << "Witaj w Kalkulatorze";
        cout << "\n";
        cout << "\n";
        cout << "Dostepne operacje";
        cout << "\n";
        cout << "1 - dodawanie";
        cout << "\n";
        cout << "2 - odejmowanie";
        cout << "\n";
        cout << "3 - mnozenie";
        cout << "\n";
        cout << "4 - dzielenie";
        cout << "\n";
        cout << "\n";
        cout << "9 - Wyjscie";
        cout << "\n";
        cout << "\n";

        cout << "Wybierz operacje: ";
        cin >> wybor;
        cout << "\n";

        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba1;
        cout << "\n";

        cout << "Podaj druga liczbe: ";
        cin >> liczba2;
        cout << "\n";

        switch (wybor) {
            default: 
                cout << "Niedozwolona liczba";
                break;
            case 1:
                //Dodawanie
                cout << "Twoj wynik to: " << liczba1 + liczba2 << endl;
                cout << "\n";
                break;
            case 2:
                //odejmowanie
                cout << "Twoj wynik to: " << liczba1 - liczba2 << endl;
                cout << "\n";
                break;
            case 3:
                //Mnożenie
                cout << "Twoj wynik to: " << liczba1 * liczba2 << endl;
                cout << "\n";
                break;
            case 4:
                //Dzielenie
                if (liczba2 == 0) {
                    cout << "Nie dziel przez zero!" << endl;
                }
                else {
                    cout << "Twoj wynik to: " << liczba1 / liczba2 << endl;
                    cout << "\n";
                }
                break;
            case 9:
                //Dzielenie
                cout << "Do zobaczenia!";
                cout << "\n";
                break;
        }

    } while(wybor != 9);
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
