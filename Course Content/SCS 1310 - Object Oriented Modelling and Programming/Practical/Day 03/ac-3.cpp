#include <iostream>
using namespace std;

struct Passenger 
{
	string Name;
	int ID;
	int Age;
	string Destination;
};

int main()
{
	Passenger p1;
	p1.Name = "Chamal";
	p1.ID = 1;
	p1.Age = 21;
	p1.Destination = "Colombo";

	cout << "Passenger Name: " << p1.Name << endl;
	cout << "Passenger ID: " << p1.ID << endl;
	cout << "Passenger Age: " << p1.Age << endl;
	cout << "Passenger Destination: " << p1.Destination << endl;
}
