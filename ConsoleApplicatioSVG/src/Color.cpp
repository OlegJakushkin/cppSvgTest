#include <Color.h>

Colors::Colors() {
	all.push_back("azure");
	all.push_back("orangered");
	all.push_back("greenyellow");
	all.push_back("yellow");
}

std::string Colors::GetRandom() {
	int randomColorIndex = rand() % all.size();
	return all[randomColorIndex];
}