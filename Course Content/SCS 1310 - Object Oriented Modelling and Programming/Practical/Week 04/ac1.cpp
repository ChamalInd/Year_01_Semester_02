#include <iostream>

class Route
{
	private:
		int routeID;
		std::string startLocation;
		std::string endLocation;
		double distance;
		double fare;

	public:
		void setRouteDetails(int ID, std::string start, std::string end, int dis);
		void calculateFare();
		void displayRouteDetails();
};

void Route::setRouteDetails(int ID, std::string start, std::string end, int dis)
{
	routeID = ID;
	startLocation = start;
	endLocation = end;
	distance = dis;
}
		
void Route::calculateFare()
{
	fare = distance * 15.50;
}
		
void Route::displayRouteDetails()
{
	calculateFare();
	std::cout << "Route ID: " << routeID << std::endl;
	std::cout << "Start Location: " << startLocation << std::endl;
	std::cout << "End Location: " << endLocation << std::endl;
	std::cout << "Distance: " << distance << " km" << std::endl;
	std::cout << "Fare: LKR " << fare << std::endl << std::endl;
}

int main()
{
	Route r1;
	r1.setRouteDetails(1, "Colombo", "Galle", 55);
	Route r2;
	r2.setRouteDetails(2, "Kandy", "Jaffna", 100);

	r1.displayRouteDetails();
	r2.displayRouteDetails();
}
