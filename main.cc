#include <iostream>
#include <string>
#include "Room.h"
#include "Student.h"
#include "Reservation.h"
#include "Library.h"
#include "a1-global.cc"
using namespace std;
int main(){
	Date d1(2020,1,24,11,3);
	Date d2(2020,1,23,11,3);
	testDate(d1,d2,false);
	Date d3(2021, 1, 1, 15, 1);
	Date d4(2021, 1, 1, 18, 1);
	testDate(d3,d4,false);	
	Date d5(2021, 1, 1, 15, 1);
	Date d6(2021, 1, 1, 16, 3);
	testDate(d5,d6,false);
	Date d7(2021, 1, 1, 15, 3);
	Date d8(2021, 1, 1, 16, 3);
	testDate(d7,d8,true);
	Date d9(2021, 1, 1, 15, 3);
	Date d10(2021, 1, 1, 15, 3);
	testDate(d9,d10,true);		
	Library lib;
	populate(lib);
	testReservations(lib);
	return 0;
}
