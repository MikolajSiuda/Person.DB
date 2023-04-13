using namespace std;
class Person {
public:
	string name;
	string surname;
	string age;
	Person();
	Person(std::string pname, std::string psurname, std::string page);
	~Person();
public:
	void setName(string name);
	string getName();

	void setSurName(string surname);
	string getSurName();

	void setAge(string age);
	string getAge();

	
private:
	string _name;
	string _surname;
	string _age;
};	