#include <sstream>

#ifndef READER_H
#define READER_H


struct Reader {
	std::stringstream in;
	std::stringstream data;
	std::string token;
	std::string ignore;

	Reader(std::string input);
	int GetInt();
	std::string GetString();
};

#endif
