
#include<string.h>
#include<stdio.h>

int main() {
	char one[50];
	char two[50];
	char three[50];

	fgets(one, sizeof(one), stdin);
	fgets(two, sieof(two), stdin);

	if (one[strlen(one) - 1] == '\n') {
		one[strlen(one) - 1] = '\0';
	}

	if (two[strlen(two) - 1] == '\n') {
		two[strlen(two) - 1] = '\0';
	}

	printf("the concatanation is: %s", strcat(one, two));
	return 0;
}