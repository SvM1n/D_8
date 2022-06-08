#include "Dom8.h"
Student::Student() {
	name = "";
	surname = "";
	group = "";
}

Student::Student(std::string n, std::string s, std::string g) {
	name = n;
	surname = s;
	group = g;
}

std::ostream& operator <<(std::ostream& os, const Student& st1){
	os << st1.name<<" " << st1.surname<<" " << st1.group;
	return os;
}

std::istream& operator >> (std::istream& is, const Student& st1){
	is >> st1.name >> st1.surname >> st1.group;
	return is;
}

Student Student:: operator= (Student st1) {
	name = st1.name;
	surname = st1.surname;
	group = st1.group;
	return *this;
}
