#include <iostream>
#include <string>
using namespace std;

class Train
{
	private:
		int trainNumber;
		string trainName;
	public:
		Train(int no, string name)
		{
			trainNumber = no;
			trainName = name;
		}
		void displayTrain();
};

void Train::displayTrain()
{
	cout << "Train Number: " << trainNumber << endl;
	cout << "Train Name: " << trainName << endl;
}

int main()
{
	Train T1(1201, "Northern Express");
	T1.displayTrain();
	return 0;
}
