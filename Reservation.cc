#include<iostream>
#include "Reservation.h"
#include "Room.h"
#include "Date.h"
#include "Student.h"
Reservation :: Reservation(Student* s, Room* r, Date& d){
	stu = s;
	room = r;
	date = new Date(d);
}
Reservation :: ~Reservation(){
	delete date;
	}
Student* Reservation :: getStudent(){ return stu; }
Room* Reservation :: getRoom(){ return room; }
Date* Reservation :: getDate(){ return date; }
bool Reservation :: lessThan(Reservation& res){
	if(this->date->lessThan(*(res.getDate())))
		return true;
	else
		return false;
}
bool Reservation :: overlaps(string r, Date& d){
	if(r == room->getName() && this->date->overlaps(d))
		return true;
	else
		return false;
}
void Reservation ::  print(){
	cout<<"Reseravtion "<<", "<<endl;
	cout<<"Student ";
	stu->print();
	cout<<"Room ";
	room->print();
	cout<<"Date ";
	date->print();
}
