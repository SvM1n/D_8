#ifndef DOM8_H
#define DOM8_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
class Student {

	private:
		std:: string name;
		std::string surname;
		std::string group;
	public:
		Student();
		Student(std::string n, std::string s, std::string g);
		friend std::ostream& operator << (std::ostream& os, const Student& st1);
		friend std::istream& operator >> (std::istream& is, const Student& st1);
		Student operator = (Student st1);
};

#endif