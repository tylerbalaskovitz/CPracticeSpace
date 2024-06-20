#include <stdio.h>
#include <stdbool.h>
int monsterAttack(char monster[50], int hp, int def, int att, int mag);
int playerAttack(char player[50], int hp, int def, int att, int mag);
int combat(char monster, int hp, int def, int att, int mag);

bool innitiative = true;
bool ingame = true;
int battleCondition = 0;

 int main() {
	 while (ingame){
	 battleCondition = playerAttack("Test", 0, 0,0,0);
	 battleCondition = monsterAttack("Test2", 0,0,0,0);		
	
	if (battleCondition = 1){
	ingame = false;
	}

	 }



return 0;
 }


int playerAttack(char player[50], int hp, int def, int att, int mag){
printf("Inside player attack, %s\n", player);	

return 0;
}
int monsterAttack(char monster[50], int hp, int def, int att, int mag){
printf("Inside monster attack, %s\n", monster);	


return 1;
}
