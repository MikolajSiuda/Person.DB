#include "header.hpp"

Person::Person() {
	std::cout << "Deafult Constructor" << std::endl;
	_name = "";
	_surname = "";
	_age = "";
}
Person::Person(std::string pname ,std::string psurname ,std::string page) {
	std::cout << "Overloaded Constructor for " << pname << std::endl;
	_name = pname;
	std::cout << "Overloaded Constructor for " << psurname << std::endl;
	_surname = psurname;
	std::cout << "Overloaded Constructor for " << page << std::endl;
	_age = age;
}
Person::~Person() {
	std::cout << "Destructor for " << _name << std::endl;
	std::cout << "Destructor for " << _surname << std::endl;
	std::cout << "Destructor for " << _age << std::endl;
}
void Person::setName(string name) {
	_name = name;
}
string Person::getName() {
	return _name;
}
void Person::setSurName(string surname) {
	_surname = surname;
}
string Person::getSurName() {
	return _surname;
}
void Person::setAge(string age) {
	_age = age;
}
string Person::getAge() {
	return _age;
}

