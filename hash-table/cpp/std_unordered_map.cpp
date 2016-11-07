#include <iostream>
#include <unordered_map>

int main(void) {

	// that must compile with `--std=c++11`
	/*
	std::unordered_map<std::string, std::string> countries = {
		{"USA", "United States Of America"},
		{"PRC", "People's Republic of China"}
	};
	*/

	std::unordered_map<std::string, std::string> countries = std::unordered_map<std::string, std::string>();
	countries["USA"] = "United States Of America";
	countries["PRC"] = "People's Republic of China";
	countries["UK"] = "United Kingdoms";
	
	std::cout << "PRC is: " << countries["PRC"] << std::endl;
	return 0;
}