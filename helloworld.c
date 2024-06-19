#include <stdio.h>
#include "./hellofromspace.h"

char favoritefood[50] = "Cheese Cake";
int main(){
	//printf() displays the string inside the quotation
	printf("Hello, world!\n");
	HelloAgain();
	printf("Jenny, I got your number %d\n", phonenumber);
	printf("My favorite food is %s\n", favoritefood);
	printf("What's your favorite food?");
	scanf("%s", &favoritefood);
	printf("I'm glad that you like to eat %s", favoritefood);
	return 0;
}
