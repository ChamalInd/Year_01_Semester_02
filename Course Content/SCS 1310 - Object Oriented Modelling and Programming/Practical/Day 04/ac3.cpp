#include <iostream>
#include <string>

class Bus
{
	private:
		int busNumber;
		std::string routeName;
		int capacity;
	
	public:
		Bus() : busNumber(0), routeName("NONE"), capacity(0) {}
		Bus(int b, std::string n, int c) : busNumber(b), routeName(n), capacity(c) {}
		void displayBusDetails();
};

void Bus::displayBusDetails()
{
	std::cout << "Bus Number: " << busNumber << std::endl;
	std::cout << "Route Name: " << routeName << std::endl;
	std::cout << "Capacity: " << capacity << std::endl << std::endl;
}

int main()
{
	int number;
	std::cout << "Enter the no of buses required: ";
	std::cin >> number;
	Bus* availableBuses = new Bus[number];

	for (int i = 0; i < number; i++)
	{
		availableBuses[i] = Bus(i + 1, "A" + std::to_string(i), 50);
	}
	for (int i = 0; i < number; i++)
	{
		availableBuses[i].displayBusDetails();
	}

	delete[] availableBuses;
}
