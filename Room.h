#ifndef ROOM_H
#define ROOM_H

#include<iostream>
#include<string>
using namespace std;
class Room {
	string name;
	int capacity;
	int computer; 
	bool whiteboard;
	public:
	Room(string n, int cap, int comp, bool wb);
	string getName();
	int getCapacity(); 
	int getComputers(); 
	bool hasWhiteboard();
	void setName(string&);
	void setCapacity(int);
	void setComputers(int); 
	void setWhiteboard(bool);
	bool meetsCriteria(int, int, bool);
	bool lessThan(Room&);
	void print();

};
#endif
