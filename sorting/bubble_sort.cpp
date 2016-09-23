// https://en.wikipedia.org/wiki/Bubble_sort

#include <iostream>
#include <cmath>
#include <ctime>

// bubble sort
// or as `sinking sort`
// time complexity:
// best: O(n)
// worst: O(n^2)
// average: O(n^2)

// space complexity:
// O(1)

// 冒泡排序
void bubble_sort(int list[], int n) {
	int i, j, temp;
	for(j=0; j < n-1; j++) {
		for(i=0; i<n-1-j; i++) {
			if(list[i]>list[i+1]) {
				temp = list[i];
				list[i] = list[i+1];
				list[i+1] = temp;
			}
		}
	}
}

void bubble_sort2(int list[], int n) {
	int i, j, temp;
	for(i=n-1; i>0; --i) {
		for(j=0; j<i; ++j) {
			if(list[j+1]<list[j]) {
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
}

int main(void) {
	void bubble_sort(int list[], int n);
	void bubble_sort2(int list[], int n);

	srand(time(0));
	unsigned int SIZE = 20;
	int list[SIZE];
	for(int i=0; i <SIZE; i++) {
		list[i] = rand()%1000;
		std::cout<<"list["<<i<<"] = " << list[i] << std::endl;
	}


	// small <- big
	for(int i=0; i<SIZE-1; i++) {
		for(int j=0; j<SIZE-1-i; j++) {
			if(list[j]<list[j+1]) {
				//std::cout << "b: " << list[j] << ", " << list[j+1] << std::endl;
				int temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
				//std::cout << "a: " << list[j] << ", " << list[j+1] << std::endl;
			}
		}
	}

	std::cout<<"\nAfter sorted:" <<std::endl;
	for(int i=0; i <SIZE; i++) {
		std::cout<<"list["<<i<<"] = " << list[i] << std::endl;
	}

	return 0;
}