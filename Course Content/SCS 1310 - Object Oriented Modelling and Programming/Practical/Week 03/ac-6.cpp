#include <iostream>
using namespace std;

class Ticket
{
	private:
		int ticketFare;
	public:
		int ticketNumber;
		Ticket(int fare, int number) : ticketFare(fare), ticketNumber(number) {}
};

int main()
{
	Ticket tk1(800, 12345);
	cout << "Ticket Number: " << tk1.ticketNumber << endl;
	cout << "Ticket Fare: " << tk1.ticketFare << endl;
}
