#ifndef Reservation_H
#define Reservation_H
#include "Room.h"
#include "Date.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;
class Reservation {
	Student *stu;
	Room *room;
	Date *date;
	
	public:
	Reservation(Student*, Room*, Date&);
	~Reservation();
	Student* getStudent();
	Room* getRoom();
	Date* getDate();
	bool lessThan(Reservation& res);
	bool overlaps(string r, Date& d);
	void print();
};

#endif
