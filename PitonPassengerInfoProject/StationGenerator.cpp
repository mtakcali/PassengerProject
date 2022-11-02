#include "StationGenerator.h"



std::string StationGenerator::stationGenerator()	//	The function that generates a random station name
{
	station = alphabet[(rand() % 26)];
	stationName = "Station ";
	stationName += station;
	return stationName;
}