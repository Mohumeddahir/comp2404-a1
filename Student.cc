#include<iostream>
#include "Student.h"
Student::Student(){
	name = "Khalid";
	number = "22";
}
Student::Student(string n, string num){
	name = n;
	number = num;
}
Student :: Student(const Student &std){
	name = std.name;
	number = std.number;
}
string Student::getName(){ 
		return name;
	}
string Student::getNumber(){ 
		return number;
	}
void Student::setName(string n)	{
	 	name = n;
	 }
void Student :: setNumber(string num){
	 	number = num;	
	 }
bool Student::lessThan(Student& s){
		return (this->number.compare(s.number)<0);
	}
void Student::print(){
	cout <<getName()<<" "<<getNumber()<<endl;
}

