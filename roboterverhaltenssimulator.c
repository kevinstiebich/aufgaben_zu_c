#include <stdio.h>

int main() {
    int zustand = 1, befehl;
    //Zustaende: 1 = happy, 2 = sad, 3 = tired, 4 = confused

    printf("Gebe einen Befehl ein (1 = blink, 2 = spin, 3 = beep): ");
    scanf("%d", &befehl);

    if (befehl > 3) {
        printf("Üngültige Eingabe.\n");
        return 1;
    }

    if (zustand == 1) {
        if (befehl == 1) {
            printf("Der Roboter zwinkert dir zu!\n");
            return 0;
        } else if (befehl == 2) {
            printf("Der Roboter tanzt wie eine Ballerina!\n");
            return 0;
        } else {
            printf("Der Roboter piept die Melodie von Funky Town für dich!\n");
            return 0;
        }
    }
}