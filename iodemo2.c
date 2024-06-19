#include <stdio.h>

int main(){
	int prime[5] = {2,3,543,7,125};
	for( int i = 0; i < 5; i++)
	{
	  
	   printf("\nDone without pointers:\n");
	  printf("index = %d, address = %d, value = %d\n", i, &prime[i], prime[i]);
	   printf("\nDone with pointers:\n");
	   printf("index = %d, address = %d, value = %d\n", i, prime + i, *(prime + i));
	}
}
