
#include <iostream>
#include <string>
#include "Room.h"

void::Room::reservecourtyard(Hotel& e) {
	e.totalopencourtyard = e.totalopencourtyard - 1;
	e.totalreservedcourtyard = e.totalreservedcourtyard + 1;
	e.totalopen = e.totalopen - 1;
	e.totalreserved = e.totalreserved + 1;
	cout << "\nThe number of open rooms of this type left is: " << e.totalopencourtyard;
	cout << "\nThe number of reserved rooms of this type is: " << e.totalreservedcourtyard<< "\n";
	return;
};

void::Room::reservesuite(Hotel& e) {
	e.totalopensuite = e.totalopensuite - 1;
	e.totalreservedsuite = e.totalreservedsuite + 1;
	e.totalopen = e.totalopen - 1;
	e.totalreserved = e.totalreserved + 1;
	cout << "\nThe number of open rooms of this type left is: " << e.totalopensuite;
	cout << "\nThe number of reserved rooms of this type is: " << e.totalreservedsuite << "\n";
	return;
};

void::Room::reservescenic(Hotel& e) {
	e.totalopenscenic = e.totalopenscenic - 1;
	e.totalreservedscenic = e.totalreservedscenic + 1;
	e.totalopen = e.totalopen - 1;
	e.totalreserved = e.totalreserved + 1;
	cout << "\nThe number of open rooms of this type left is: " << e.totalopenscenic;
	cout << "\nThe number of reserved rooms of this type is: " << e.totalreservedscenic << "\n";
	return;
};

void::Room::reservepenthouse(Hotel& e) {
	e.totalopenpenthouse = e.totalopenpenthouse - 1;
	e.totalreservedpenthouse = e.totalreservedpenthouse + 1;
	e.totalopen = e.totalopen - 1;
	e.totalreserved = e.totalreserved + 1;
	cout << "\nThe number of open rooms of this type left is: " << e.totalopenpenthouse;
	cout << "\nThe number of reserved rooms of this type is: " << e.totalreservedpenthouse << "\n";
	return;
};


void::Room::constructor(int a, int b, string c) {
	price = a;
	roomnumber = b;
	roomtype = c;
	return;
};