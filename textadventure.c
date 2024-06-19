#include <stdio.h>
#include <stdbool.h>

int main() {
	char name[50];
	int hp;
	int choice;
	bool loop = true;
	bool treasure = false;
	bool trained = false;
	bool rested = false;
	bool named = false;
	while (loop) {
	if (loop == true) {
	if (named == true) {
		printf("You're standing in the middle of the woods. You feel wide awake\n");
		printf("What shall you do warrior\n1:Go to town \n2:Fight the demon \n3:Take a nap\n0: Quit game\n");	
		scanf("%d", &choice);
	}
	if (named == false) {
		printf("You're standing in the middle of the woods. You feel groggy. What's your name\n");
		scanf("%s", &name);
		printf("Ah yes, how could I forget, %s\n", name);
		printf("What shall you do warrior\n1:Go to town \n2:Fight the demon \n3:Take a nap\n0: Quit game\n");
		scanf("%d", &choice);
		named = true;
		}
	}
	if (choice == 0) {
		loop = false;
		printf("Thank you for playing. Goodbye!\n");
	}
	if (choice == 1) {
		if (treasure == false) {
			trained = true;	
			printf("You're in town, and you see a lot of people hussling and bussling. You train with the swordmaster and feel a lot stronger\n");
		}	
		if (treasure == true) {
			printf("The townsfolk surround you and give you lots of praise.	You returned their treasure and brought peace to the town. Congratulations! You beat the game\n");
			printf("Thank you for playing! The end!\n");
			loop = false;
		}	
	}
	if (choice == 2) {
		if (trained == true && rested == true) {
		printf("You fight the demon, win, and find the treasure.\n");
		treasure = true;
		} else {
		printf("The demon chops your dick off and feeds it to his cat and dog. You've never seen anything like it\n You lost. The end!\n");
		loop = false;
		}
	}
	if (choice == 3) {
		rested = true;	
		printf("You feel well rested like you're ready to fight a demon. Let's whoop some ass!\n");
	}
	}
	
	
return 0;
}
