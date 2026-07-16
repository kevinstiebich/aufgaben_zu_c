#include <stdio.h>

int main() {
    int zustand = 4, befehl;
    //Zustaende: 1 = happy, 2 = sad, 3 = tired, 4 = confused

    printf("Gebe einen Befehl ein (1 = blink, 2 = spin, 3 = beep): ");
    scanf("%d", &befehl);

    if (befehl > 3 || befehl < 1) {
        printf("Üngültige Eingabe.\n");
        return 1;
    } else if (zustand == 1) {
        if (befehl == 1) {
            printf("Der Roboter zwinkert dir zu!\n");
        } else if (befehl == 2) {
            printf("Der Roboter tanzt wie eine Ballerina!\n");
        } else {
            printf("Der Roboter piept die Melodie von Funky Town für dich!\n");
        }
    } else if (zustand == 2) {
        if (befehl == 1) {
            printf("Der Roboter zwinkert kurz, bevor er seufzt.\n");
        } else if (befehl == 2) {
            printf("Der Roboter dreht sich mühsam und setzt sich auf anschließend auf den Boden.\n");
        } else {
            printf("Der Roboter gibt ein langes, dumpfes piepen von sich.\n");
        }
    } else if (zustand == 3) {
        if (befehl == 1) {
            printf("Der Roboter schließt die Augen.\n");
        } else if (befehl == 2) {
            printf("Der Roboter fällt bei der halben Drehung um.\n");
        } else {
            printf("Der Roboter gibt ein durchgängigen Piepton von sich und hört nichtmehr auf.\n");
        }
    } else if (zustand == 4) {
        if (befehl == 1) {
            printf("Der Roboter klimpert nervös mit den Augen.\n");
        } else if (befehl == 2) {
            printf("Der Roboter macht eine halbe Umdrehung nach links und dann hastig eine nach rechts.\n");
        } else {
            printf("Der Roboter piept ganz schnell und pinkelt auf den Boden.\n");
        }
    }

    return 0;
}