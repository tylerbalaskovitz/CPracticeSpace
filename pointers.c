#include <stdio.h>

int main () {
	int num = 5;
	int *p = &num;
	printf("Address using %%p = %p",p);
	printf("Address using %%d = %d",p);
	printf("Address using %%o = %o",p);
}
