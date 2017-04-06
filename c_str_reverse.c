#include <stdio.h>
#include <string.h>

void inplace_reverse(char *);

int main() {
	char str[]="The long string to be reversed";
	char * reversed;

	printf("%s\n", str);
	inplace_reverse(str);
	printf("%s\n", str);
	return 0;
}

void inplace_reverse(char * in_str) {
	char * end = NULL;
	if (in_str) {
		end = in_str + strlen(in_str) - 1;

		while (in_str < end) {
			*in_str ^= *end;
			*end ^= *in_str;
			*in_str ^= *end;
			in_str++;
			end--;
		}
	}
}
