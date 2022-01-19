#ifndef Library_h
#define Library_h

#include <iostream>
#include <string>
#include "Room.h"
#include "Student.h"
#include "Reservation.h"
#include "Date.h"
const int s_length = 100;
const int r_length = 10;
const int res_length = 50;
using namespace std;
class Library {
	Student** s;
	int s_num;
	Room** r;
	int r_num;
	Reservation** res;
	int res_num;
	
	public:
	Library();
	~Library();
	bool addStudent(const string& name, const string& number);
	bool addRoom(string n, int cap = 1, int comp = 0, bool wb = false);
	bool getStudent(const string& name, Student** student);
	bool getRoom(const string& roomName, Room** room);
	bool isFree(const string& room, Date&);
	bool makeReservation(const string& student, const string& room, Date&);
	void update(Date&);
	void printReservations();
};
#endif
