#pragma once

#ifndef LINEGENERATOR_H
#define LINEGENERATOR_H
#define ALPHABET_COUNT 26
#include <iostream>
class LineGenerator
{
private:
public:
	std::string lineName;
	char alphabet[ALPHABET_COUNT]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char line_start;
	char line_finish;
	std::string lineGenerator();
};

#endif


