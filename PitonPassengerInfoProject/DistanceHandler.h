#pragma once
#ifndef DISTANCEHANDLER_H
#define DISTANCEHANDLER_H
#define ALPHABET_COUNT 26
#include <iostream>
#include <iostream>
#include <chrono>
class DistanceHandler
{
private:
public:
	int distance;
	int remained_time;
	double f_remained_distance;
	std::string line_name;

	
	int distanceGenerator();	// The function that generates a random distance between 2500-3000

	int remainingDistanceCalculator(int speed, int f_remained_distance, int time_interval);
	
	double remainingTimeCalculator(int remained_distance, int speed);
	
	bool thresholdDistanceController(int remained_distance, int threshold_distance, std::string line_name);
	
};
#endif
