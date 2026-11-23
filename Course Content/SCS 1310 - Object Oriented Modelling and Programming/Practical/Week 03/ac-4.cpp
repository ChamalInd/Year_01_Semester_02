#include <iostream>
using namespace std;

struct Bus 
{
	int Number;
	string RouteName;
	int Capacity;
};

int main()
{
	Bus b1; 
 	b1.Number = 120;
	b1.RouteName = "Horana-Pettah";
	b1.Capacity = 50;

	Bus b2; 
	b2.Number = 138;
	b2.RouteName = "Kottawa-Pettah";
	b2.Capacity = 55;

	cout << "Bus 1 Number: " << b1.Number << endl;
	cout << "Bus 1 Route: " << b1.RouteName << endl;
	cout << "Bus 1 Capacity: " << b1.Capacity << endl << endl;
	
	cout << "Bus 2 Number: " << b2.Number << endl;
	cout << "Bus 2 Route: " << b2.RouteName << endl;
	cout << "Bus 2 Capacity: " << b2.Capacity << endl;

}
