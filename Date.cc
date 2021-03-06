#include<iostream>
#include "Date.h"

Date::Date(){
	setDate(1,1,1901, 23, 3);
}

Date::Date(int y, int m, int d, int h, int dur){
	setDate(y,m,d,h,dur);
}

//setters
void Date::setDay(int d){
	int max = getMaxDay();
	if (d>max) d=max;
	if (d<1) d=1;
	day = d;
}

void Date::setMonth(int m){
	if (m > 12) m = 12;
	if (m < 1) m = 1;
	month = m;
}

void Date::setYear(int y){
	if (y < 1901) y = 1901;
	year = y;
}

void Date::setDate(int y, int m, int d, int h, int dur){
	setMonth(m);
	setDay(d);
	setYear(y);
	setHour(h);
	setDuration(dur);
}

void Date::setDate(Date& d){
	setDate(d.day, d.month, d.year, d.hour, d.duration);
}
void Date :: setHour(int h){
	if(h<0)
		hour = 0;
	else if(h>23)
		hour = 23;
	else
		hour = h;
		
}
void Date :: setDuration(int dur){
	if(dur<1)
		duration = 1;
	else if(dur>MAX)
		duration = MAX;
	else
		duration = dur;	
}

//getters
int Date::getDay(){ return day; }
int Date::getMonth(){ return month; }
int Date::getYear(){ return year; }
const string& Date::getMonthName(){return months[month-1];}
int Date :: getHour(){ return hour; }
int Date :: getDuration(){ return duration; }


//other

bool Date::lessThan(Date& d){
	if (year == d.year){
		if (month == d.month){
			if(day == d.day)
				return hour < d.hour;
			else
				return day < d.day;
		}else{
			return month  < d.month;
		}
	}else{
		return year < d.year;
	}	
}
bool Date :: overlaps(Date &d){
	
	if(this->month == d.month && this->day == d.day && this->year == d.year){
		if(this->hour == d.hour){
			return true;
		}else if(d.hour> this->hour){
			if(d.hour - this->hour < this->duration)
				return true;
			else
				return false;
		}else if(this->hour>d.hour){
			if(this->hour - d.hour < d.duration)
				return true;
			else
				return false;
		}else{
			return false;
		}
		
	}else
		return false;
		
}
void Date::print(){
	cout << getMonthName()<<" "<<getDay()<<", "<<getYear()<<endl;
}

int Date::getMaxDay(){
	switch(getMonth()){
		case 4:
		case 6:
		case 9:
		case 11: 			return 30;
		case 2:				return 28;
		default:			return 31;
	}
}

