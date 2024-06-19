#include <stdio.h>
int main() {
	int marks[5][3] = { { 98, 76, 89},
			    { 81, 96, 79},
			    { 88, 86, 89},
			    { 97, 94, 99},
			    { 92, 81, 59}
			  };
	printf("Address of whole 2-D array = %d\n", &marks);
	printf("Addition of 1 results in %d\n", &marks +1);
}
