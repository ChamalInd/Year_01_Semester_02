#include <iostream>
using namespace std;

#define PI 3.14

int main() 
{
	float radius, area, volume;

	cout << "Enter a radius: ";
	cin >> radius;

	area = 4.0 * PI * radius * radius;
	volume = (4.0 / 3.0) * PI * radius * radius * radius;

	cout << "Area of a sphere: " << area << endl;
	cout << "Volume of a sphere: " << volume << endl;
}
