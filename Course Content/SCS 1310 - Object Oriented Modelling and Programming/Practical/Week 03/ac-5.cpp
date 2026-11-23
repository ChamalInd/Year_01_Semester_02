#include <iostream>
using namespace std;

class Train
{
	private:
		string trainName;
		int trainNumber;
		int passengerCapacity;
	public:
		void setTrainDetails(string, int, int);
		void displayTrainDetails();
};

void Train::setTrainDetails(string name, int number, int capacity)
{
	trainName = name;
	trainNumber = number;
	passengerCapacity = capacity;
}

void Train::displayTrainDetails()
{
	cout << "Train name: " << trainName << endl;
	cout << "Train Number: " << trainNumber << endl;
	cout << "Passenger Capacity: " << passengerCapacity << endl;
}

int main()
{
	Train t1;
	t1.setTrainDetails("Udarata Manike", 1234, 300);
	t1.displayTrainDetails();
}
