#include <stdio.h>
#include <string.h>

unsigned int djb2(char code[]) {
	unsigned int h = 0;
	int len = strlen(code);
	for(int i = 0; i < len; i++) {
		h = (h << 6) + (h << 16) - h + code[i];
	}
	return h;
};

int main() {
	char s[] = "a14bcef";
	printf("hash(%s) = %u\n", s, djb2(s));
}