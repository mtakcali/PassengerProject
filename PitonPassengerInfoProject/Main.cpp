#include <iostream>
#include <chrono>
#include <Windows.h>
#include <stdlib.h>
#define ALPHABET_COUNT 26
#include <future>
int time_interval = 3;
int threshold_distance = 100;

#include "DistanceHandler.h"
#include "LineGenerator.h"
#include "SpeedHandler.h"
#include "StationGenerator.h"


using namespace std;
using namespace chrono;

void deneme()
{
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();		// Start time of execution

	//	Initialization of classes and srand
	DistanceHandler distanceHandler;
	LineGenerator line_generator;
	StationGenerator station_generator;
	SpeedHandler speedHandler;

	int remained_distance = 0;

	string station_Name = station_generator.stationGenerator();

	while (1)
	{
		srand((unsigned)time(NULL));
		remained_distance = distanceHandler.distanceGenerator();
		string line_Name = line_generator.lineGenerator();



		while (remained_distance >= 0)
		{

			steady_clock::time_point end = steady_clock::now();
			//int rand = duration_cast<seconds> (end - begin).count();
			//srand((unsigned)rand);
			int speed = speedHandler.speedGenerator();


			remained_distance = distanceHandler.remainingDistanceCalculator(speed, remained_distance, time_interval);
			double remained_time = distanceHandler.remainingTimeCalculator(remained_distance, speed);

			if (distanceHandler.thresholdDistanceController(remained_distance, threshold_distance, line_Name) == true)
			{
				std::this_thread::sleep_for(std::chrono::seconds(time_interval));
				//system("CLS");
				break;
			}
			else {
				cout << line_Name << " arrives in " << remained_time << " second" << endl;
				std::this_thread::sleep_for(std::chrono::seconds(time_interval));
				//system("CLS");

				end = steady_clock::now();
				int t_elapsed = duration_cast<seconds> (end - begin).count();
				//cout << " elapsed " << t_elapsed << " second" << endl;


			}



		}
		//system("CLS");

	}
}


int main()
{

	srand((unsigned)time(NULL));
	std::future<void> tram_1 = std::async(deneme);
	std::this_thread::sleep_for(std::chrono::seconds(time_interval));
	std::future<void> tram_2 = std::async(deneme);
	std::this_thread::sleep_for(std::chrono::seconds(time_interval));
	std::future<void> tram_3 = std::async(deneme);

	return 0;
}