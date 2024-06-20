#include <stdio.h>
#include <stdbool.h>

// Function prototypes
int combat(char monster[50], int hp, int def, int att, int mag);
int playerAttack(char monster[50], int hp, int def, int att, int mag);
int monsterAttack(char monster[50], int hp, int def, int att, int mag);

bool initiative = true;
bool ingame = true;
int battleCondition = 0;

int main() {
    while (ingame) {
        battleCondition = playerAttack("Player", 0, 0, 0, 0);
        if (battleCondition == 1) {
            ingame = false;
            printf("Player wins!\n");
            break;
        }

        battleCondition = monsterAttack("Enemy", 0, 0, 0, 0);
        if (battleCondition == 1) {
            ingame = false;
            printf("Monster wins!\n");
        }
    }

    return 0;
}

int combat(char monster[50], int hp, int def, int att, int mag) {
    // Function implementation will be filled in later
    return 0;
}

int playerAttack(char monster[50], int hp, int def, int att, int mag) {
    // Function implementation will be filled in later
    return 0;
}

int monsterAttack(char monster[50], int hp, int def, int att, int mag) {
    // Function implementation will be filled in later
    return 0;
}

