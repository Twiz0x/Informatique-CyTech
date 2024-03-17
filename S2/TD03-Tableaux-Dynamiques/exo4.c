#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc == 4) {
		switch (argv[2][0]) {
			case '+':
				printf("%s + %s = %g\n", argv[1], argv[3], atof(argv[1]) + atof(argv[3]));
				break;
			case '-':
				printf("%s - %s = %g\n", argv[1], argv[3], atof(argv[1]) - atof(argv[3]));
				break;
	
			case '/':
				printf("%s / %s = %g\n", argv[1], argv[3], atof(argv[1]) / atof(argv[3]));
				break;
			case '*':
				printf("%s * %s = %g\n", argv[1], argv[3], atof(argv[1]) * atof(argv[3]));
				break;
		}
	}
}
