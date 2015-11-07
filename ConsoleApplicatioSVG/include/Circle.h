#include <iostream>

#ifndef CIRCLE_H
#define CIRCLE_H

struct Circle {
	int cx;
	int cy;
	int r;
	std::string stroke;
	int strokeWidth;
	std::string color;

	Circle();

	void Read(std::string data);

	std::string Write();
};
#endif