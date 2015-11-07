#include <Canvas.h>
#include <Reader.h>

Canvas::Canvas() {
	width = 500;
	height = 500;
	circles.resize(20);
	for (auto & circle : circles) {
		circle.r = rand() % 40;
		circle.cx = rand() % width;
		circle.cy = rand() % height;
	}
}

void Canvas::Read(std::istream& in) {
	std::string line;
	std::getline(in, line);
	Reader reader(line);
	height = reader.GetInt();
	width = reader.GetInt();
 
	while(getline(in, line)) {
		Circle c;
		c.Read(line);
		circles.push_back(c);
	}
}

std::string Canvas::Write() {
	std::stringstream out;
	out << "<svg height=\"" << height
		<< "\" width=\"" << width
		<< "\">" << std::endl;
 
	for(auto c : circles) {
		out << "\t" << c.Write();
	}
	out << "</svg>" << std::endl;
	return out.str();
}