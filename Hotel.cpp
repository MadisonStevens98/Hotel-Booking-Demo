
#include <iostream>
#include <string>
#include "Hotel.h"

void::Hotel::getTotal() {
	int runningtotal = 0;
	runningtotal = runningtotal + (totalreservedcourtyard * 125);
	runningtotal = runningtotal + (totalreservedscenic * 145);
	runningtotal = runningtotal + (totalreservedsuite * 350);
	runningtotal = runningtotal + (totalreservedpenthouse * 1135);
	cout << "Total Revenue: " << runningtotal << "\nTotal Reserved Rooms: " << totalreserved << "\nTotal Open Rooms: " << totalopen << endl;
	return;
};