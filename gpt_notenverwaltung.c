#include <stdio.h>

void einlesen(int notenListe[], int anzahlSchueler) {
    for (int i = 0; i < anzahlSchueler; i++) {
        printf("Gebe die Note für Schüler %d ein: ", i + 1);
        scanf("%d", &notenListe[i]);
        while (notenListe[i] > 6 || notenListe[i] < 1) {
            printf("Ungültige Eingabe, die Note muss eine Zahl von 1 bis 6 sein.\n");
            printf("Gebe die Note für Schüler %d ein: ", i + 1);
            scanf("%d", &notenListe[i]);
        }
    }
}

float durchschnittsrechner(int a[], int b) {
    float retval = 0;

    for (int i = 0; i < b; i++) {
        retval += a[i];
    }

    retval /= b;
    return retval;
}

int findeBeste(int a[], int b) {
    int retval = a[0];

    for (int i = 1; i < b; i++) {
        if (retval > a[i]) {
            retval = a[i];
        }
    }

    return retval;
}

int findeSchlechteste(int a[], int b) {
    int retval = a[0];

    for (int i = 1; i < b; i++) {
        if (retval < a[i]) {
            retval = a[i];
        }
    }

    return retval;
}

int findeBestandene(int a[], int b) {
    int retval = 0;

    for (int i = 0; i < b; i++) {
        if (a[i] <= 4) {
            retval++;
        }
    }

    return retval;
}

int main() {
    char weitere = 'y';
    while (weitere == 'y' || weitere == 'Y'){
        int anzahl;

        printf("Schueleranzahl eingeben: ");
        scanf("%d", &anzahl);

        while (anzahl < 1) {
            printf("Die Anzahl der Schüler muss mindestens 1 betragen.\n");
            printf("Schueleranzahl eingeben: ");
            scanf("%d", &anzahl);
        }

        int liste[anzahl];

        einlesen(liste, anzahl);

        for (int i = 0; i < anzahl; i++) {
            printf("Schüler %d: %d\n", i + 1, liste[i]);
        }

        float durchschnitt = durchschnittsrechner(liste, anzahl);
        printf("Notendurchschnitt: %.2f\n", durchschnitt);

        int besteNote = findeBeste(liste, anzahl);
        printf("Die beste Note ist %d.\n", besteNote);

        int schlechtesteNote = findeSchlechteste(liste, anzahl);
        printf("Die schlechteste Note ist %d.\n", schlechtesteNote);

        int bestanden = findeBestandene(liste, anzahl);
        printf("Von %d Schülern haben %d bestanden und %d sind durchgefallen.\n", anzahl, bestanden, anzahl - bestanden);

        printf("Weitere Klassen eingeben? (y/n): ");
        scanf(" %c", &weitere);
    }
    return 0;
}