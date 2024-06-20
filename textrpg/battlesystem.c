#include <stdio.h>
#include <stdbool.h>
int monsterAttack(char monster[50], int hp, int def, int att, int mag);
int playerAttack(char player[50], int hp, int def, int att, int mag);
int combat(char monster, int hp, int def, int att, int mag);
char monName[50] = "Wolf";
int monHp, monDef, monAtt, monMag;
bool innitiative = true;
bool ingame = true;
int battleCondition = 0;

 int main() {
	 while (ingame){
	 battleCondition = playerAttack("Test", 0, 0,0,0);
	 battleCondition = monsterAttack(monName, monHp,monDef,monAtt,monMag);		
	
	if (battleCondition = 1){
	ingame = false;
	}

	 }



return 0;
 }


int playerAttack(char player[50], int hp, int def, int att, int mag){
printf("Inside player attack, %s\n", player);	
int playerMove=0;
scanf("%d", &playerMove);

return 0;
}
int monsterAttack(char monster[50], int hp, int def, int att, int mag){
printf("Enemy name:  %s\n", monster);	
printf("Enemy HP: %d Enemy Defense: %d, Enemy Attack: %d, Enemy Magic: %d\n", hp, def, att, mag); 


return 1;
}
