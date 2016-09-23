#include <iostream>

int main(void) {
	unsigned int SIZE = 14;
	
	int searchKey = 2;
	int index = 0;

	int table[] = {
		0, 1, 4, 6, 8, 9, 12,
		15, 28, 30, 34, 36, 39, 40
	};

	for(int i=0;i<SIZE;i++) {
		std::cout << "table[" << i << "] = " << table[i] <<std::endl;
		
		if(searchKey == table[i]) {
			index = i+1;
			break;
		}
	}

	if(index>0) {
		std::cout << "catch: table["<< index-1 << "] = " << table[index-1] << std::endl;
	} else {
		std::cout << "value not found in table" << std::endl;
	}


}