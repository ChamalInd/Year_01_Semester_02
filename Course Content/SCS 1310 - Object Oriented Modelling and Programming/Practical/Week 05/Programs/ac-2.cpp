#include <iostream>

class Passenger
{
	private:
		int passengerID;
		std::string passengerName;
		std::string destination;
	public:
		Passenger(int i, std::string n, std::string d);
		Passenger(Passenger& other);
		void displayPassenger();
};
		
		
Passenger::Passenger(int i, std::string n, std::string d) : passengerID(i), passengerName(n), destination(d) {}
		
Passenger::Passenger(Passenger& other)
{
	this->passengerID = other.passengerID;
	this->passengerName = other.passengerName;
	this->destination = other.destination;
	std::cout << "Copy created for: " << this->passengerName << std::endl << std::endl;
}
		
void Passenger::displayPassenger()
{
	std::cout << "Passenger: " << passengerID << std::endl;
	std::cout << "\tPassenger name: " << passengerName << std::endl;
	std::cout << "\tDestination: " << destination << std::endl << std::endl;
}

int main()
{
	Passenger passOne(1, "Chamal", "Kandy");
	Passenger passTwo = passOne;

	passOne.displayPassenger();
	passTwo.displayPassenger();
}
