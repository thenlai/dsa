#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	int SIZE = 13;
	int key = 6;
	int table[] = {
		0, 1, 4, 6, 8, 9, 12,
		15, 28, 30, 34, 36, 39, 40
	};

	std::vector<int> v(table, table+SIZE);
	std::sort(v.begin(), v.end());

	if(std::binary_search(v.begin(), v.end(), key)) {
		std::cout << "found!" << std::endl;
	} else {
		std::cout << "not found" << std::endl;
	}
}