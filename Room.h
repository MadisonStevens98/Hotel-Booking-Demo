#pragma once
#ifndef ROOM
#define ROOM
#include "Hotel.h"

using namespace std;

class Room : public Hotel {

public: 

	int price;
	int roomnumber;
	string roomtype;
	string occupantname;
	void constructor(int, int, string);
	
	void reservecourtyard(Hotel&);
	void reservescenic(Hotel&);
	void reservesuite(Hotel&);
	void reservepenthouse(Hotel&);

};

#endif