#include "stdio.h"

template <class T>
void print(T v) {
	unsigned char *desmond = (unsigned char *) &v;
	int i;
	for (i=0; i < sizeof(T); i++) {
		printf("%02X ", desmond[i]);
	}
	printf("\n");
};

int main(void) {
	// print<double>(0.3);
	// print<double>(0.1);
	// print<double>(0.3 - 0.1);
	// print<double>(0.4);
	// print<double>(0.2);
	// print<double>(0.4 - 0.2);

	print<float>(1.0);
	print<float>(-1.0);
}

// 0011 0011