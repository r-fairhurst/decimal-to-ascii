#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// EXAMPLE:
// Decimal: 1633840489 
// HEX: 0x696d6261
// ASCII: imba

// EXAMPLE 2:
// Decimal: 26984
// HEX: 0x6968
// ASCII: hi

void convert_to_hex(int input) {
	printf("HEX: 0x%x\n", input);
}

void convert_to_ascii(int input) {
	int length = sizeof(input) - 1;
	printf("ASCII: '");
	for (int i = 0; i <= length; i++) {
		char ascii_char = (input >> (i * 8)) & 0xFF;
		printf("%c", ascii_char);
	}
	printf("'\n");
}

int main(int argc, char *argv[]) {
	unsigned int decimal;
	if (argc > 1) {
		decimal = atoi(argv[1]);
	} else {
		printf("Enter a decimal number: ");
		scanf("%u", &decimal);
	}

	printf("Decimal: %u\n", decimal);
	convert_to_hex(decimal);
	convert_to_ascii(decimal);
	printf("\nDo not include the single quotes in the output at the start/end\n");
	return 0;
}
