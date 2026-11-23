#include <iostream>
#include <string>

class Ticket
{
	private:
		int ticketID;
		std::string passengerName;
		int distance;
		double fare;

	public:
		Ticket(int id, std::string n, int d);
		void displayTicket();	
};
		
Ticket::Ticket(int id, std::string n, int d) : ticketID(id), passengerName(n), distance(d) 
{
	fare = distance * 12.0;
}			
		
void Ticket::displayTicket()
{
	std::cout << "Ticket ID: " << ticketID << std::endl;
	std::cout << "Passenger Name: " << passengerName<< std::endl;
	std::cout << "Distance: " << distance << "km" << std::endl;
	std::cout << "Fare: LKR " << fare << std::endl;
}

int main()
{
	Ticket* newTicket = new Ticket(120, "Chamal", 40);
	newTicket->displayTicket();
	delete newTicket;
}
