#include <stdio.h>

int main () {
	char name[50];
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Hello there, %s", name);

	return 0;
}
