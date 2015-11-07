#include <Reader.h>

using namespace std;

Reader::Reader(string input) {
	in << input;
}

int Reader::GetInt() {
	int result = 0;
	getline(in, ignore, '\"');
	getline(in, token, '\"');
	data.str(token);
	data >> result;
	data.clear();
	return result;
}

std::string Reader::GetString() {
	string result = "";
	getline(in, ignore, '\"');
	getline(in, result, '\"');
	return result;
}