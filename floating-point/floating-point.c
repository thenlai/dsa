#include "stdio.h"

void print_hex(double d) {
	unsigned char *desmond = (unsigned char *) &d;
	int i;
	for (i=0; i < sizeof(double); i++) {
		printf("%02X ", desmond[i]);
	}
	printf("\n");
}

void print_hex_float(float d) {
	unsigned char *desmond = (unsigned char *) &d;
	int i;
	for (i=0; i < sizeof(float); i++) {
		printf("%02X ", desmond[i]);
	}
	printf("\n");
}

void print_hex_int(int d) {
	unsigned char *desmond = (unsigned char *) &d;
	int i;
	for (i=0; i < sizeof(int); i++) {
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
	// 33 33 33 33 33 33 D3 3F
	// 00110011 00110011 00110011 00110011 00110011 00110011 11010011 00111111
	// 转换成正常顺序后：
	// 0,0111111 1101,0011 00110011 00110011 00110011 00110011 00110011 00110011
	// 符号： (-1)^0 = +1
	// 幂：0111111 1100 = 1020
	// mantissa: 1.(0011 0011...)
	// decimal: (-1)^0 * 1.0011 0011... * 2^(1021 - 1023)

	print_hex(0.1);
	// 1001,0110 01010101 01010101 01010101 01010101 01010101 1011;0101 0011 111;1
	print_hex(0.3-0.1);

	printf("\n");
	print_hex(0.4);
	print_hex(0.2);
	print_hex(0.4-0.2);

	printf("\n");
	int num = 9;
	float *fp = &num;
	*fp = 9.0;
	print_hex_int(num);
	print_hex_float(*fp);

	printf("\n");
	float f1 = 0.3;
	print_hex_float(f1);
	double d1 = 0.3;
	print_hex(d1);
	return 0;
}

// 0011 0011