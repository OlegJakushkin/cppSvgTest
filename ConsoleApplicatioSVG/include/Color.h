#include <random>

#ifndef COLOR_H
#define COLOR_H

struct Colors {
	std::vector<std::string> all;
	
	Colors();
	std::string GetRandom();
};

#endif