#include <iostream>

struct point
{
	double x;
	double y;
};

void getPointValue(point &p)
{
	std::cout << "Podaj x: \n";
	std::cin >> p.x;

	std::cout << "Podaj y3: \n";
	std::cin >> p.y;
}

void task2()
{
	point firstPoint;

	getPointValue(firstPoint);

	double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

	std::cout << "Odleg³oœæ to: " << distance; 
}
