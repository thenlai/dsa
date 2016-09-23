#include <iostream>

int main(void) {
	unsigned int SIZE = 14;
	int table[] = {
		0, 1, 4, 6, 8, 9, 12,
		15, 28, 30, 34, 36, 39, 40
	};

	int searchKey = 9;
	int index = 0;
	std::cout << "input searchkey: ";
	std::cin >> searchKey;


	int i= 0;
	int j= SIZE-1;
	while(i<=j) {
		std::cout << "i, j = " << i << "," << j << std::endl;
		int mid = (i+j) / 2;

		if(searchKey == table[mid]) {
			index = mid+1;
			break;
		}
		if(searchKey > table[mid]) {
			i = mid+1;
		} else {
			j = mid-1;
		}
	}

	if(index>0) {
		std::cout << "found: table["<< index-1 << "] = " << table[index-1] << std::endl;
	} else {
		std::cout << "not found in table" << std::endl;
	}


}