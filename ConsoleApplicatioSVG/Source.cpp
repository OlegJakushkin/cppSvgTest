#include <iostream>
#include <fstream>
#include <ctime>

#include <Canvas.h>

int main() {
	std::fstream file("Default.htm", std::fstream::in | std::fstream::out | std::fstream::trunc);
	srand(time(nullptr));
	Canvas can;
	auto s = can.Write();
	file.write(s.c_str(), s.length());
	file << s;
	file.close();
 
	return 0;
} 