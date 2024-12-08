#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	unsigned int decimal;
	if (argc > 1) {
		decimal = atoi(argv[1]);
	} else {
		printf("Enter a decimal number: ");
		scanf("%u", &decimal);
	}

	printf("Decimal: %u\n", decimal);
	printf("Hexadecimal: %x\n", decimal);
	printf("ASCII: '");
	
	int length = sizeof(decimal) - 1;
	for (int i = 0; i <= length; i++) {
		char ascii_char = (decimal >> (i * 8)) & 0xFF;
		printf("%c", ascii_char);
	}
	printf("'\n");
	printf("\nDo not include the single quotes in the output at the start/end\n");
	return 0;
}
