#include <Circle.h>
#include <vector>

#ifndef  CANVAS_H
#define CANVAS_H


struct Canvas {
	int width;
	int height;

	std::vector<Circle> circles;

	Canvas();
	void Read(std::istream & in);
	std::string Write();
};
#endif
