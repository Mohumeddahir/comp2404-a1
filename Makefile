all: Reservation.o Date.o Room.o Student.o Library.o main.o
	g++ -o p1 Reservation.o Date.o Room.o Student.o Library.o main.o
Reservation.o:  Reservation.h Reservation.cc
	g++ -c Reservation.cc
Date.o:  Date.h Date.cc
	g++ -c Date.cc
Room.o:  Room.h Room.cc
	g++ -c Room.cc
Student.o:  Student.h Student.cc
	g++ -c Student.cc
Library.o:  Library.h Library.cc
	g++ -c Library.cc
main.o: main.cc
	g++ -c main.cc
clean:
	rm -f *.o
