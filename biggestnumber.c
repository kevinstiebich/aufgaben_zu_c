#include <stdio.h>

int main() {
    int zahl1, zahl2, zahl3;

    printf("Gib deine erste Zahl ein: ");
    scanf("%d", &zahl1);
    printf("Gib deine zweite Zahl ein: ");
    scanf("%d", &zahl2);
    printf("Gib deine dritte Zahl ein: ");
    scanf("%d", &zahl3);

    if (zahl1 == zahl2 && zahl1 == zahl3) {
        printf("Alle Zahlen sind gleichgroß!\n");
        return 0;
    }

    if (zahl1 >= zahl2 && zahl1 >= zahl3) {
        printf("Die größte Zahl ist: %d\n", zahl1);
        return 0;
    } else if (zahl2 >= zahl1 && zahl2 >= zahl3) {
        printf("Die größte Zahl ist: %d\n", zahl2);
        return 0;
    } else {
        printf("Die größte Zahl ist: %d\n", zahl3);
        return 0;
    }
}