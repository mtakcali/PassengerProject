#include "LineGenerator.h"

std::string LineGenerator:: lineGenerator()	//	The function that generates a random line name
{
	line_start = alphabet[(rand() % 26)];
	line_finish = alphabet[(rand() % 26)];
	lineName = "Line ";
	lineName += line_start;
	lineName += " - ";
	lineName += line_finish;
	return lineName;
}