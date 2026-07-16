#include <stdio.h>

int main() {
    int zustand = 1, befehl;
    //Zustaende: 1 = happy, 2 = sad, 3 = tired, 4 = confused

    printf("Gebe einen Befehl ein (1 = blink, 2 = spin, 3 = beep): ");
    scanf("%d", &befehl);

    if (zustand == 1 && befehl == 1) {
        printf("Der Roboter zwinkert dir zu!");
        return 0;
    } else if (zustand == 1 && befehl == 2) {
        printf("Der Roboter tanzt wie eine Ballerina!");
        return 0;
    } else if (zustand == 1 && befehl == 3) {
        printf("Der Roboter piept die Melodie von Funky Town für dich!")
    }
}