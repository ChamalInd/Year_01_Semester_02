#include <iostream>
using namespace std;

class Ticket {
    int ticketID;
    string passengerName;
	
	public:
    	Ticket(int id, string name) {
    	    ticketID = id;
        	passengerName = name;
    	}

		Ticket(const Ticket& t) {
    		ticketID = t.ticketID;
        	passengerName = t.passengerName;
    	}

    	~Ticket() {
        	cout << "Ticket removed." << endl;
    	}

    	void display() {
        	cout << "ID: " << ticketID << endl;
        	cout << "Name: " << passengerName << endl;
    	}
};

int main() {
    Ticket T1(101, "Nimal");
    Ticket T2 = T1;

    T1.display();
    T2.display();

    return 0;
}
