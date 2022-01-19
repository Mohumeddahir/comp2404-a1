#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
	string name;
	string number;
	public:
	Student();
	Student(string n, string num);
	Student(const Student &std);
	string getName();
	string getNumber();
	void setName(string n);
	void setNumber(string num);
	bool lessThan(Student&);
	void print();
};
#endif
