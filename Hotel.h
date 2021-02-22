#pragma once
#ifndef HOTEL
#define HOTEL

using namespace std;

class Hotel {

public:
	int totalrooms;
	int totalreserved;
	int totalopen;
	int totalopencourtyard;
	int totalreservedcourtyard;
	int totalopenscenic;
	int totalreservedscenic;
	int totalopensuite;
	int totalreservedsuite;
	int totalopenpenthouse;
	int totalreservedpenthouse;
	void getTotal();
};

#endif