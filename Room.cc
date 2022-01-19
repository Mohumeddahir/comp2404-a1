#include<iostream>
#include"Room.h"
Room :: Room(string n, int cap, int comp, bool wb){
	name = n;
	capacity = cap;
	computer = comp;
	whiteboard = wb;
}
string Room :: getName(){
	return name;
	}
int Room :: getCapacity(){
	return capacity;
	}
int Room :: getComputers(){
	return computer;
	}
bool Room :: hasWhiteboard(){
	return whiteboard;
	}
void Room :: setName(string &n){
	name = n;
	}
void Room :: setCapacity(int cap){
	capacity = cap;
	}
void Room :: setComputers(int comp){
	computer = comp;
	} 
void Room :: setWhiteboard(bool wb){
	whiteboard = wb;
}
bool Room :: meetsCriteria(int cap, int comp, bool wb){
	if(capacity>=cap)
		return true;
	else
		return false;
}
bool Room :: lessThan(Room& r){
	if(this->name.compare(r.name) < 0)
		return true;
	else
		return false;
}
void Room::print(){
	cout<< getName()<<", "<<getCapacity()<<", "<<getComputers()<<", "<<hasWhiteboard()<<endl;
}

