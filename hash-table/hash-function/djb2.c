#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int djb2(char code[]) {
	unsigned int h = 0;
	int len = strlen(code);
	for(int i = 0; i < len; i++) {
		h = (h << 6) + h + code[i];
	}
	return h;
};

int main() {
	char s[] = "a14bceg";
	char *temp = NULL;
	int read;
	size_t len;
	read = getline(&temp, &len, stdin);
	free(temp);

	printf("hash(%s) = %u\n", s, djb2(s));
}