#include <iostream>

class Bus
{
	private:
		int busNumber;
		std::string routeName;
		int capacity;
	public:
		Bus();
		Bus(int n, std::string r, int c);
		~Bus();
		void displayBus();
};
		
Bus::Bus() : busNumber(0), routeName("Unknown"), capacity(0) {}

Bus::Bus(int n, std::string r, int c) : busNumber(n), routeName(r), capacity(c) {}

Bus::~Bus()
{
	std::cout << "Bus " << busNumber << " removed from the system." << std::endl;
}
		
void Bus::displayBus()
{
	std::cout << "Bus: " << busNumber << std::endl;
	std::cout << "\tRoute name: " << routeName << std::endl;
	std::cout << "\tCapacity: " << capacity << std::endl << std::endl;
}

int main()
{
	Bus busOne;
	Bus busTwo(138, "Pettah-Kohuwala", 50);

	busOne.displayBus();
	busTwo.displayBus();
}
