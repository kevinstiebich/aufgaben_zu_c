#include <stdio.h>

int main() {
    int geheim = 23, eingabe = 0, counter = 0;

    while (geheim != eingabe && counter <= 10) {
        printf("Gebe eine Zahl zwischen 1 und 100 ein: ");
        scanf("%d", &eingabe);

        while (eingabe > 100 || eingabe < 1) {
            printf("Die Zahl muss zwischen 1 und 100 liegen, versuche es nochmal: ");
            scanf("%d", &eingabe);
        }

        counter++;

        if (geheim == eingabe) {
            printf("Richtig! Du hast %d Versuche gebraucht.\n", counter);
            return 0;
        } else if (eingabe > geheim) {
            printf("Zu hoch...\n");
        } else {
            printf("Zu niedrig...\n");
        }
    }

    printf("Du hast mehr als 10 Versuche gebraucht, versuche es später nochmal.\n");
    return 1;
}