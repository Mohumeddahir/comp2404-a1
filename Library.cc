#include<iostream>
#include "Library.h"


Library :: Library(){
	res = new Reservation* [res_length];
	s = new Student* [s_length];
	r = new Room* [r_length];
	s_num = 0;
	r_num = 0;
	res_num = 0;
}
Library :: ~Library(){
	//delete res
	for(int i = 0; i<s_num; i++){
		delete s[i];
	}
	delete [] s;
	for(int j = 0; j<r_num; j++){
		delete r[j];
	}
	delete [] r;
	for(int k = 0; k<res_num; k++){
		delete res[k];
	}
	delete [] res;
}

bool Library :: addStudent(const string& name, const string& number){
	if(s_num >= s_length-1){
		return false;
	}else{
		//there can be pointers
		Student *s1 = new Student(name, number);
		s[s_num] = s1;
		s_num++;
		return true;
	}
}
bool Library :: addRoom(string n, int cap, int comp, bool wb){
	if(r_num >= r_length-1){
		return false;
	}else{
		//there can be pointers
		Room *r1 = new Room(n, 1, 0, false);
		r[r_num] = r1;
		r_num++;
		return true;
	}
}
bool Library :: getStudent(const string& name, Student** student){
	bool result = false;
	for(int i = 0; i<s_num; i++){
		if(s[i]->getName() == name){
			cout<<"student found"<<s[i]->getName()<<endl;
			*student = s[i];
			result = true;
		}
			
	}
	return result;
}
bool Library :: getRoom(const string& roomName, Room** room){
	bool response = false;
	for(int i = 0; i<r_num; i++){
		if(r[i]->getName() == roomName){
			cout<<"room found"<<r[i]->getName()<<endl;
			*room = r[i];
			response = true;
		}
			
	}
	return response;
}
bool Library :: isFree(const string& room, Date& d){
	
//check existence
	Room *rm_check;
	bool value = true;
	if(!getRoom(room, &rm_check)){
		value = false;
	}else{
		for(int k = 0; k<res_num; k++){
			if(res[k]->overlaps(room, d))
				value =  false;
			else
				value = true;
		}
	}
	return value;
}
bool Library :: makeReservation(const string& student, const string& room, Date& d){
 	Room *rm;
 	Student *sd;
 	if(res_num>= res_length){
		return false;
	}
 	if(!getRoom(room, &rm) || !getStudent(student, &sd)){
		return false;
	}else{
		if(isFree(room, d)){
			Reservation *r1 = new Reservation(sd, rm, d);
			res[res_num] = r1;
			res_num++;
			return true;
			
		}else{
			return false;
		}
	}
	
}
void Library :: update(Date&){

}
void Library ::  printReservations(){
	for(int k = 0; k<res_num; k++){
		res[k]->print();
	}
}
