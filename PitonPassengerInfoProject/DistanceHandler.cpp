#include "DistanceHandler.h"

int DistanceHandler::distanceGenerator()		// The function that generates a random distance between 2500-3000
{
	srand((unsigned)time(NULL));
	distance = (rand() % 50) + 1475;
	return distance;
}
int DistanceHandler::remainingDistanceCalculator(int speed, int f_remained_distance, int time_interval)
{
	f_remained_distance = f_remained_distance - (speed * time_interval);

	return f_remained_distance;
}
double DistanceHandler::remainingTimeCalculator(int remained_distance, int speed)
{
	remained_time = remained_distance / speed;
	return remained_time;
}
bool DistanceHandler::thresholdDistanceController(int remained_distance, int threshold_distance, std::string line_name)
{
	if (remained_distance <= threshold_distance)
	{
		std::cout << line_name << " tram is close" << std::endl;
		return true;
	}
}