#pragma once
#ifndef STATIONGENERATOR_H
#define STATIONGENERATOR_H
#define ALPHABET_COUNT 26
#include <iostream>
#include <chrono>
class StationGenerator
{
private:
public:
	char station;
	char alphabet[ALPHABET_COUNT]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	std::string stationName;
	std::string stationGenerator();
};

#endif