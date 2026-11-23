#include <iostream>
using namespace std;

int main()
{
	int noPassengers;
	int busCount = 20;
	int trainCount = 18;
	float averageFair = 14.2;

	string passengerName;
	int passengerAge;
	char passengerGender;
	float passengerHeight;

	cout << "Welcome to GamanSara Transport System" << endl;
	cout << "GamanSara is a Smart Transport Management System." << endl;
	cout << "It will be developed using Object Oriented Programming.\n" << endl;

	cout << "No of buses available: " << busCount << endl;
	cout << "No of trains available: " << trainCount << endl;
	cout << "Average Fair: " << averageFair << endl << endl;

	cout << "Enter the number of passengers: ";
	cin >> noPassengers;

	cout << endl << "Enter Name: ";
	cin >> passengerName;
	cout << "Enter Age: ";
	cin >> passengerAge;
	cout << "Enter Gender (M/F): ";
	cin >> passengerGender;
	cout << "Enter Height: ";
	cin >> passengerHeight;

	cout << "\nPassenger Details:" << endl;
	cout << "Name: " << passengerName << endl;
	cout << "Age: " << passengerAge << endl;
	cout << "Gender: " << passengerGender << endl;
	cout << "Height: " << passengerHeight << endl;
}
