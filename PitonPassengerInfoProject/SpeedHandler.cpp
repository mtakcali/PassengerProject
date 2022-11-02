#include "SpeedHandler.h"
#include <chrono>


int SpeedHandler::speedGenerator()
{
	srand((unsigned)time(NULL));
	speed = (rand() % 6) + 47;
	return speed;
}