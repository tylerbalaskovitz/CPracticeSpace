#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int monsterAttack(char monster[50], int hp, int def, int att, int mag);
int playerAttack(char player[50], int hp, int def, int att, int mag);
int combat(char monster, int hp, int def, int att, int mag);
char turnHolder[50];
int damageDealt = 0;
char playName[50] = "Ralphie";
int playHp = 30, playDef = 5, playAtt = 20, playMag = 25, playTempDef = 0;
char monName[50] = "Wolf";
int monHp = 45, monDef = 7, monAtt = 10, monMag = 15, monTempDef = 0;
bool innitiative = true;
bool inBattle = true;
int battleCondition = 0;
bool victory = false;

 int main() {
	 while (inBattle){
	 printf("\033[2J\033[1;1H");
	 if (battleCondition == 0) {
	 battleCondition = playerAttack(playName, playHp, playDef, playAtt, playMag);
		if (battleCondition == 1){
			inBattle = false;
		}
	}
	 if (battleCondition == 0) {
	 battleCondition = monsterAttack(monName, monHp,monDef,monAtt,monMag);		
		if (battleCondition == 1){
			inBattle = false;
		}
	}
	 


	}
return 0;
 }


int playerAttack(char player[50], int hp, int def, int att, int mag){
printf("\nEnemy name:  %s\n", monName);	
printf("Enemy HP: %d Enemy Defense: %d, Enemy Attack: %d, Enemy Magic: %d\n", monHp, monDef, monAtt, monMag); 
printf("=============================================================================================\n");
printf("Player name:  %s\n", player);	
printf("Player HP: %d Player Defense: %d, Player Attack: %d, Player Magic: %d\n", hp, def, att, mag);
printf("1: Attack\n2: Defend\n3: Magic Attack\n4:Pass\n");
	int playerAttack=0;
	damageDealt = 0;
	scanf("%d", &playerAttack);
	switch(playerAttack){
		case 1: damageDealt = att - monDef; monHp-= damageDealt; break;
		case 2: playTempDef = playTempDef+2  ; break;
		case 3: damageDealt = mag - monDef; monHp-= damageDealt; break;
		case 4: printf("You pass this round. Wow neat!"); break;
		default:printf("You pass this round. Wow neat!"); break;
	}
	if (damageDealt > 0) {
		printf("\nYou attack the %s for %d damage\n",monName, damageDealt);
	}
	if (monHp <= 0) {
		printf("You have defeated the %s, congratulations!\n", monName);
		victory = true;
		return 1;
	}
	fgets(turnHolder, sizeof(turnHolder), stdin);


return 0;
}

int monsterAttack(char monster[50], int hp, int def, int att, int mag){

	damageDealt = 0;
	int enemyAttack=0;
	enemyAttack = 1 + (rand() % 4); // random chance to atack 
	printf("The %s rolled a %d\n", monName, enemyAttack);
	switch(enemyAttack){
		case 1: damageDealt = att - monDef; playHp-= damageDealt; break;
		case 2: monTempDef = monTempDef+2; printf("The %s raises their defense!\n", monName); break;
		case 3: damageDealt = mag - playDef; playHp-= damageDealt; break;
		case 4: printf("The %s attacks and misses. How lucky!\n", monName); break;
	}
	if (damageDealt > 0) {
		printf("The %s attacks you for %d damage\n", monName, damageDealt);
	}
	if (playHp <= 0) {
		printf("You have been defeated by the %s, you lose!\n", monName);
		victory = false;
		return 1;
}
	fgets(turnHolder, sizeof(turnHolder), stdin);


return 0;
}

void magicAttack(int target, int damage){

}
