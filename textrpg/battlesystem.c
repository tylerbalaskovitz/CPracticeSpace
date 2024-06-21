#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int monsterAttack(char monster[50], int hp, int def, int att, int mag);
int playerAttack(char player[50], int hp, int def, int att, int mag);
int combat(char monster, int hp, int def, int att, int mag);

char playName[50] = "Ralphie";
int playHp = 30, playDef = 5, playAtt = 20, playMag = 25, playTempDef = 0;
char monName[50] = "Wolf";
int monHp, monDef, monAtt, monMag;
bool innitiative = true;
bool inBattle = true;
int battleCondition = 0;
bool victory = false;

 int main() {
	 while (inBattle){
	 battleCondition = playerAttack(playName, playHp, playDef, playAtt, playMag);
	 battleCondition = monsterAttack(monName, monHp,monDef,monAtt,monMag);		
	
	if (battleCondition = 1){
	inBattle = false;
	}

	 }



return 0;
 }


int playerAttack(char player[50], int hp, int def, int att, int mag){
printf("Enemy name:  %s\n", monName);	
printf("Enemy HP: %d Enemy Defense: %d, Enemy Attack: %d, Enemy Magic: %d\n", monHp, monDef, monAtt, monMag); 
printf("=============================================================================================\n");
printf("Player name:  %s\n", player);	
printf("Player HP: %d Player Defense: %d, Player Attack: %d, Player Magic: %d\n", hp, def, att, mag);
printf("1: Attack\n 2: Defend\n 3: Magic Attack\n 4:Pass");
int playerAttack=0;
scanf("%d", &playerAttack);
switch(playerAttack){
	case 1: monHp= monHp - att+monDef; break;
	case 2: playTempDef = playTempDef+2  ; break;
	case 3: monHp= monHp - mag+monDef; break;
	case 4: printf("You pass this round. Wow neat!"); break;
	default:printf("You pass this round. Wow neat!"); break;
 
}
return 0;
}
int monsterAttack(char monster[50], int hp, int def, int att, int mag){
printf("Enemy name:  %s\n", monster);	
printf("Enemy HP: %d Enemy Defense: %d, Enemy Attack: %d, Enemy Magic: %d\n", hp, def, att, mag); 


return 0;
}

void magicAttack(int target, int damage){

}
