#include <iostream>
using namespace std;

class Passenger
{
	public:
		string name;
		int age;

		void display()
		{
			cout << "Passenger name: " << name << endl;
			cout << "Passenger age: " << age << endl; 
		}
};

int main()
{
	Passenger P1;
	P1.name = "Kamal";
	P1.age = 25;
	P1.display();
	return 0;
}
