#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc == 1) {
		printf("Expected an argument.\n");
		exit(1);
	}

	int value = 0;
	int position = 7;
	int j = 0;

	for (int i = 1; i < argc; i++) {
		while (argv[i][j] != '\0') {
			if (argv[i][j] != '1' && argv[i][j] != '0') {
				printf("Error in byte sequence.\n");
				exit(1);
			}
			
			if (argv[i][j] == '1') 
				value += 1 << position;
			
			position--;
			if (position < 0) {
				printf("%c", value);
				value = 0;
				position = 7;
			}
			j++;
		}
		j = 0;
	}
	return 0;
}
