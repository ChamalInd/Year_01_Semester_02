#include <iostream>

namespace BusModule
{
	void displaySchedule();
	double calculateFare(int distance);
};

namespace RailwayModule
{
	void displaySchedule();
	double calculateFare(int distance);
};

void BusModule::displaySchedule()
{
	std::cout << "This is the bus schedule for this week." << std::endl;
}

double BusModule::calculateFare(int distance)
{
	return distance * 15.50;
}

void RailwayModule::displaySchedule()
{
	std::cout << "This is the train schedule for this week." << std::endl;
}

double RailwayModule::calculateFare(int distance)
{
	return distance * 30.25;
}

int main()
{
	int distance = 50;
	std::cout << "Bus fare for " << distance << " km is LKR ";
	std::cout << BusModule::calculateFare(distance) << std::endl;
	std::cout << "Train fare for " << distance << " km is LKR ";
	std::cout << RailwayModule::calculateFare(distance) << std::endl;
}
