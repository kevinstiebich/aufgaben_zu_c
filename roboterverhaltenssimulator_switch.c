#include <stdio.h>

int main() {
    int zustand = 4, befehl;
    //Zustaende: 1 = happy, 2 = sad, 3 = tired, 4 = confused

    printf("Gebe einen Befehl ein (1 = blink, 2 = spin, 3 = beep): ");
    scanf("%d", &befehl);

    switch (zustand) {
        case 1:  
            switch (befehl) {
                case 1:
                    printf("Der Roboter zwinkert dir zu!\n");
                    break;
                case 2:
                    printf("Der Roboter tanzt wie eine Ballerina!\n");
                    break;
                case 3:
                    printf("Der Roboter piept die Melodie von Funky Town für dich!\n");
                    break;
                default:
                    printf("Ungültige Eingabe.\n");
                    return 1;
            }
        break;
        case 2:
            switch (befehl) {
                case 1:
                    printf("Der Roboter zwinkert kurz, bevor er seufzt.\n");
                    break;
                case 2:
                    printf("Der Roboter dreht sich mühsam und setzt sich auf anschließend auf den Boden.\n");
                    break;
                case 3:
                    printf("Der Roboter gibt ein langes, dumpfes piepen von sich.\n");
                    break;
                default:
                    printf("Ungültige Eingabe.\n");
                    return 1;
            }
        break;
        case 3:
            switch (befehl) {
                case 1:
                    printf("Der Roboter schließt die Augen.\n");
                    break;
                case 2:
                    printf("Der Roboter fällt bei der halben Drehung um.\n");
                    break;
                case 3:
                    printf("Der Roboter gibt ein durchgängigen Piepton von sich und hört nichtmehr auf.\n");
                    break;
                default:
                    printf("Ungültige Eingabe.\n");
                    return 1;
            }
        break;
        case 4:
            switch (befehl) {
                case 1:
                    printf("Der Roboter klimpert nervös mit den Augen.\n");
                    break;
                case 2:
                    printf("Der Roboter macht eine halbe Umdrehung nach links und dann hastig eine nach rechts.\n");
                    break;
                case 3:
                    printf("Der Roboter piept ganz schnell und pinkelt auf den Boden.\n");
                    break;
                default:
                    printf("Ungültige Eingabe.\n");
                    return 1;
            }
        break;
        default:
            printf("Ungültiger Zustand.\n");
            return 1;
    }
    return 0;
}