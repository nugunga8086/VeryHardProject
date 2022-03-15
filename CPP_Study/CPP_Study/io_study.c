#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int length = 0;
	char str[50];
	gets(str);

	for (int i = 0; str[i]; i++) {
		length += 1;
	}
	printf("%d", length);
}