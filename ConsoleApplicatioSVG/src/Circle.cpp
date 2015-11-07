#include <Circle.h>
#include <Reader.h>
#include <Color.h>

Circle::Circle() {
	cx = 0;
	cy = 0;
	r = 0;
	Colors c;
 
	stroke = c.GetRandom();
	strokeWidth = 0;
 
	color =c.GetRandom();
}

void Circle::Read(std::string data) {
	Reader reader(data);
	cx = reader.GetInt();
	cy = reader.GetInt();
	r = reader.GetInt();
	stroke = reader.GetString();
	strokeWidth = reader.GetInt();
	color = reader.GetString();
}

std::string Circle::Write() {
	std::stringstream out;
	out << "<circle cx=\"" << cx
		<< "\" cy=\"" << cy
		<< "\" r=\"" << r
		<< "\" stroke=\"" << stroke
		<< "\" stroke-width=\"" << strokeWidth
		<< "\" fill=\"" << color
		<< "\" />" << std::endl;
	return out.str();
}