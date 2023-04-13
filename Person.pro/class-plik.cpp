#include "header.hpp"
void Plik::plik_wyswietl() {
	string myText;
	ifstream MyReadFile("filename.txt");														//WYŚWIETLANIE PLIKU

	while (getline(MyReadFile, myText)) {
		cout << myText << endl;
	}
}
void Plik::plik_wprowadzdane() {

	ofstream MyFile;
	MyFile.open("filename.txt", std::ofstream::app);											//ZAPISYWANIE PLIKU

	Person personObj;

	std::string a;
	std::cout << "Person Name:";
	std::cin >> a;
	personObj.setName(a);
	MyFile << a <<",";

	std::string b;
	std::cout << "Person SurName:";
	std::cin >> b;
	personObj.setSurName(b);
	MyFile << b << ",";

	std::string c;
	std::cout << "Person Age:";
	std::cin >> c;
	personObj.setAge(c);
	MyFile << c << ",";
	MyFile << "\n\r";

	MyFile.close();
}
void Plik::plik_zmien() {
	Plik obj;
	ifstream Myfile("filename.txt");
	ofstream Outfile("fileout.txt");
	int linia = 0, znajdz;
	string line;

	cout << "Linia w ktorej znajduje sie person do zmienienia: " << "\n";
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
void Plik::plik_usun() {
	string filename = "filename.txt";
	string filedell = "filedel.txt";
	string line;
	int line_number;
	int x = 0;
	ifstream Myfile(filename);
	ofstream Delfile(filedell);
	cout << "Linia w ktorej znajduje sie zbedny person: ";
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
void Plik::plik_szukaj() {
	string line;
	int offset;
	string x = "";
	ifstream Myfile("filename.txt");

	cout << "Dane person: ";
	cin >> x;

	while (getline(Myfile, line)) {
		if ((offset = line.find(x, 0)) != string::npos) {
			cout << "Znaleziono oponenta " << line << endl;
		}
	}
	Myfile.close();
}
