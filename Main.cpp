
#include <iostream>
#include <string>
#include <fstream>
#include "Hotel.h"
#include "Room.h"

using namespace std;
char charinput;
int intinput;
string date;
Room arrayofcourtyardrooms[70];
Room arrayofscenicrooms[35];
Room arrayofsuiterooms[15];
Room arrayofpenthouserooms[2];

void myfilewriter(Hotel& Ourhotel , ofstream& myfile) {
	myfile.open(date);
	myfile.write((char*)&Ourhotel, sizeof(Ourhotel));
	myfile.close();
};

Hotel Hotelconstructor(Hotel& Ourhotel) {
	Ourhotel.totalrooms = 122;
	Ourhotel.totalreserved = 0;
	Ourhotel.totalopen = 122;
	Ourhotel.totalopencourtyard = 70;
	Ourhotel.totalreservedcourtyard = 0;
	Ourhotel.totalopenscenic = 15;
	Ourhotel.totalreservedscenic = 0;
	Ourhotel.totalopensuite = 35;
	Ourhotel.totalreservedsuite = 0;
	Ourhotel.totalopenpenthouse = 2;
	Ourhotel.totalreservedpenthouse = 0;
	for (int i = 0; i < 70; i++) {
		arrayofcourtyardrooms[i].constructor(125, 101 + i, "Courtyard");
	}

	for (int i = 0; i < 35; i++) {
		arrayofscenicrooms[i].constructor(145, 201 + i, "Scenic");
	}

	for (int i = 0; i < 15; i++) {
		arrayofsuiterooms[i].constructor(350, 236 + i, "Suite");
	}

	for (int i = 0; i < 2; i++) {
		arrayofpenthouserooms[i].constructor(1135, 301 + i, "Penthouse");
	}
	return Ourhotel;
};

void recurse(Hotel& e, ofstream& myfile) {
	cout << "\nHotel Current Status:\nTotal # of Rooms: " << e.totalrooms << "\nOpen Rooms: " << e.totalopen << "\nReserved Rooms: " << e.totalreserved;
	cout << "\nType R to make a reservation, and type T for the days total revenue and room status. Type D if you would like to change the date.\n";
	cin >> charinput;
	if (charinput == 'T') {
		e.getTotal();
	}
	else if (charinput == 'R') {
		cout << "\nPlease select which room from the following options:\n1.Courtyard\n2.Scenic\n3.Suite\n4.Penthouse\n";
		cin >> intinput;
		if (intinput == 1) {
			for (int i = 0; i < 70; i++) {
				if (arrayofcourtyardrooms[i].occupantname == "")
					cout << "Please enter the name of occupent: ";
					cin >> arrayofcourtyardrooms[i].occupantname;
					cout << "Room number: " << arrayofcourtyardrooms[i].roomnumber << " has been reserved under " << arrayofcourtyardrooms[i].occupantname<< "\n";
					arrayofcourtyardrooms[i].reservecourtyard(e);
					i = 70;
			}
			myfilewriter(e, myfile);
		}
		else if (intinput == 2) {
			for (int i = 0; i < 35; i++) {
				if (arrayofscenicrooms[i].occupantname == "")
					cout << "Please enter the name of occupent: ";
				cin >> arrayofscenicrooms[i].occupantname;
				cout << "Room number: " << arrayofscenicrooms[i].roomnumber << " has been reserved under " << arrayofscenicrooms[i].occupantname<< "\n";
				arrayofscenicrooms[i].reservescenic(e);
				i = 35;
			}
			myfilewriter(e, myfile);
		}
		else if (intinput == 3) {
			for (int i = 0; i < 15; i++) {
				if (arrayofsuiterooms[i].occupantname == "")
					cout << "Please enter the name of occupent: ";
				cin >> arrayofsuiterooms[i].occupantname;
				cout << "Room number: " << arrayofsuiterooms[i].roomnumber << " has been reserved under " << arrayofsuiterooms[i].occupantname << "\n";
				arrayofsuiterooms[i].reservesuite(e);
				i = 15;
			}
			myfilewriter(e, myfile);
		}
		else if (intinput == 4) {
			for (int i = 0; i < 2; i++) {
				if (arrayofpenthouserooms[i].occupantname == "")
					cout << "Please enter the name of occupent: ";
				cin >> arrayofpenthouserooms[i].occupantname;
				cout << "Room number: " << arrayofpenthouserooms[i].roomnumber << " has been reserved under " << arrayofpenthouserooms[i].occupantname << "\n";
				arrayofpenthouserooms[i].reservepenthouse(e);
				i = 2;
			}
			myfilewriter(e, myfile);
		}
	}
	else if (charinput == 'D'){
		cout << "Please enter the date for reservations (ex.MMDDYY). Try to keep the date format consistant.: ";
		cin >> date;
		ifstream file1;
		file1.open(date);
		file1.read((char*)&e, sizeof(e));
	}
	else {
		cout << "Please try again.";
	}
	recurse(e, myfile);
};

int main()
{
	Hotel Ourhotel;
	Hotelconstructor(Ourhotel);

	cout << "Please enter the date for reservations (ex.MMDDYY). Try to keep the date format consistant.: ";
	cin >> date;
	ifstream file1;
	file1.open(date);
	file1.read((char*)&Ourhotel, sizeof(Ourhotel));
	ofstream myfile;
	recurse(Ourhotel, myfile);
	system("PAUSE");
}