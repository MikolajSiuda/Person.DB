#include "header.hpp"
void Menu::menu() {
	Plik plik;
	int x = 0;
	while (x < 6)
	{
		cout << "\n*******************MENU********************" << endl;
		cout << "1.Dodawanie osoby" << endl;
		cout << "2.Wyswietlanie osob" << endl;
		cout << "3.Zmiana osoby" << endl;
		cout << "4.Usuwanie osoby" << endl;
		cout << "5.Szukaj osoby" << endl;
		cout << "6.Wyjscie" << endl;
		cout << "Wybieram : ";
		cin >> x;
		system("cls");
		if (x == 1) {
			plik.plik_wprowadzdane();
		}
		else if (x == 2) {
			plik.plik_wyswietl();
		}
		else if (x == 3) {
			plik.plik_zmien();
		}
		else if (x == 4) {
			plik.plik_usun();
		}
		else if (x == 5) {
			plik.plik_szukaj();
		}
		else if (x == 6) {
			exit(0);
		}
	}
}
