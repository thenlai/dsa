#include <iostream>
#include <map>

int main(void) {

	std::map<std::string, std::string> lang = {
		{"C++", "C plus plus"},
		{"JS", "JavaScript"}
	};

	std::cout << lang["C++"] << std::endl;
	return 0;
}