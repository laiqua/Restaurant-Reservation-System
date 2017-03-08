#include <iostream>
#include <string>


using namespace std;

// Prototypes

int main(){

	// Declaration of arrays
	int tables[20];
	string names[20];
	int reserved_table2 = 0;
	int reserved_table4 = 0;
	int reserved_table6 = 0;


	int input = 1;
	int book= 0;
	
	while (input != 0)
	{
		// User will select a choice
		cout << "Welcome to Restaurant Reservation System!" << endl;
		cout << "press 1 to  Reserve a Table for dinner/lunch" << endl;
		cout << "press 2 to Reserve a Table for a party" << endl;
		cout << "press 0 to Exit" << endl;

		// User input
		cin >> input;

		// Reserve a table
		if (input == 1)
		{
			cout << "press 1  for booking a table for 2 people"<<endl;
			cout << "press 2  for booking a table for 4 people" << endl;
			cout << "press 3  for booking a table for 6 people" << endl;
			cin >> book;
			cout << "Thankyou dear customer, your table has been booked" << endl;
			if (book = 1){
				reserved_table2++;
				if (reserved_table2 > 4)
				{
					cout << "sorry customer , all the tables have been filled" << endl;
				}
			}

			
			if (book = 2){
				reserved_table4++;
				if (reserved_table4 > 8)
				{
					cout << "sorry customer , all the tables have been filled" << endl;
				}
			}
			if (book = 3){
				reserved_table6++;
				if (reserved_table6 > 3)
				{
					cout << "sorry customer , all the tables have been filled" << endl;
				}

			}
		}
		if (input == 2)
		{
			
			cout << "Thankyou dear customer, your table has been booked for party.Enjoy :) " << endl;
		}
	}


	system("PAUSE");
	return 0;
}

