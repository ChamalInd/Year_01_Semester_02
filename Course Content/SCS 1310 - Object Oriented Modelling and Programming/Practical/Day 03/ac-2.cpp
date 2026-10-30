#include <iostream>
using namespace std;

int main()
{
	int PassengerCounts[] = {45, 38, 52, 41, 60};
	int Length = sizeof(PassengerCounts) / sizeof(PassengerCounts[0]);

	for (int i = 0; i < Length; i++)
	{
		cout << PassengerCounts[i] << endl;
	}
}
