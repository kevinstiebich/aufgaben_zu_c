#include <stdio.h>

int main(int zustand) {
    int befehl;
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

    if (zustand == 2) {
        if (befehl == 1) {
            printf("Der Roboter zwinkert kurz, bevor er seufzt.\n");
            return 0;
        } else if (befehl == 2) {
            printf("Der Roboter dreht sich mühsam und setzt sich auf anschließend auf den Boden.\n");
            return 0;
        } else {
            printf("Der Roboter gibt ein langes, dumpfes piepen von sich.\n");
            return 0;
        }
    }

    if (zustand == 3) {
        if (befehl == 1) {
            printf("Der Roboter schließt die Augen.\n");
            return 0;
        } else if (befehl == 2) {
            printf("Der Roboter fällt bei der halben Drehung um.\n");
            return 0;
        } else {
            printf("Der Roboter gibt ein durchgängigen Piepton von sich und hört nichtmehr auf.\n");
            return 0;
        }
    }

    if (zustand == 4) {
        if (befehl == 1) {
            printf("Der Roboter klimpert nervös mit den Augen.\n");
            return 0;
        } else if (befehl == 2) {
            printf("Der Roboter macht eine halbe Umdrehung nach links und dann hastig eine nach rechts.\n");
            return 0;
        } else {
            printf("Der Roboter piept ganz schnell und pinkelt auf den Boden.\n");
            return 0;
        }
    }
}