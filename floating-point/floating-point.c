#include "stdio.h"

void print_hex(double d) {
	unsigned char *desmond = (unsigned char *) &d;
	int i;
	for (i=0; i < sizeof(double); i++) {
		printf("%02X ", desmond[i]);
	}
	printf("\n");
}

int main(void) {
	if (0.3 - 0.1 == 0.4 - 0.2) {
		printf("equal.\n");
	} else {
		printf("not equal.\n");
	}

	printf("\n");
	print_hex(0.3);
	// 0.0(1001) = 1.(0011) * 2^-2
	// 00110011 00110011 00110011 00110011 00110011 00110011 1100;0011 0011111;1

	print_hex(0.1);
	print_hex(0.3-0.1);

	printf("\n");
	print_hex(0.4);
	print_hex(0.2);
	print_hex(0.4-0.2);

	return 0;
}

// 0011 0011