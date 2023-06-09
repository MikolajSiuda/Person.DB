#include "header.hpp"
void Plik::plik_wyswietl() {																	//WYŚWIETLANIE PLIKU
	string myText;
	ifstream MyReadFile("filename.txt");														
	int i = 1;
	while (getline(MyReadFile, myText)) {
		cout << i << " ";
		cout << myText << endl;
		i++;
	}
}
void Plik::plik_wprowadzdane() {																//ZAPISYWANIE PLIKU

	ofstream MyFile;
	MyFile.open("filename.txt", std::ofstream::app);											

	Person personObj;

	std::string a;
	std::cout << "Imie:";
	std::cin >> a;
	personObj.setName(a);
	MyFile << a <<",";

	std::string b;
	std::cout << "Nazwisko:";
	std::cin >> b;
	personObj.setSurName(b);
	MyFile << b << ",";

	std::string c;
	std::cout << "Wiek:";
	std::cin >> c;
	personObj.setAge(c);
	MyFile << c << ",";
	MyFile << "\n";

	MyFile.close();
}
void Plik::plik_zmien() {																		//ZMIANA PLIKU
	Plik obj;
	ifstream Myfile("filename.txt");
	ofstream Outfile("fileout.txt");
	int linia = 0, znajdz;
	string line;

	cout << "Linia w ktorej znajduje sie osoba do zmienienia: " << "\n";
	cin >> znajdz;

	while (getline(Myfile, line)) {
		linia++;
		if (linia != znajdz) {
			Outfile << line << endl;
		}
		else if (linia = znajdz) {
			obj.plik_wprowadzdane();
		}
	}
	Myfile.close();
	Outfile.close();

	remove("filename.txt");
	rename("fileout.txt", "filename.txt");
}
void Plik::plik_usun() {																		//USUWANIE PLIKU
	string filename = "filename.txt";
	string filedell = "filedel.txt";
	string line;
	int line_number;
	int x = 0;
	ifstream Myfile(filename);
	ofstream Delfile(filedell);
	cout << "Linia w ktorej znajduje sie osoba do usuniecia: ";
	cin >> line_number;

	while (getline(Myfile, line)) {
		x++;
		if (x != line_number) {
			Delfile << line << endl;
		}
	}
	Myfile.close();
	Delfile.close();
	remove("filename.txt");
	rename("filedel.txt", "filename.txt");
}
void Plik::plik_szukaj() {																		//SZUKAJ PLIKU
	string line;
	int offset;
	string x = "";
	ifstream Myfile("filename.txt");

	cout << "Dane osoby ktora chcesz znalesc: ";
	cin >> x;

	while (getline(Myfile, line)) {
		if ((offset = line.find(x, 0)) != string::npos) {
			cout << line << endl;
		}
	}
	Myfile.close();
}
