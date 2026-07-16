#include <stdio.h>

int main() {
    int kontostand = 1000, auswahl = 0, einzahlung, abheben, counter = 0;

    while (auswahl != 4) {
        printf("1 = Kontostand anzeigen\n");
        printf("2 = Geld einzahlen\n");
        printf("3 = Geld abheben\n");
        printf("4 = Programm beenden\n");
        printf("Auswahl: ");
        scanf("%d", &auswahl);

        switch (auswahl) {
            case 1:
                printf("Dein Kontostand beträgt: %d\n", kontostand);
                break;
            case 2:
                printf("Einzuzahlender Betrag: ");
                scanf("%d", &einzahlung);

                while (einzahlung < 0) {
                    printf("Der Einzahlungsbetrag muss mindestens 1€ betragen. Bitte neuen Betrag eingeben: ");
                    scanf("%d", &einzahlung);
                    counter++;
                        if (counter >= 2) {
                            printf("Zuviele Fehlversuche, versuchen Sie es später erneut.\n");
                            return 1;
                        }
                }

                kontostand = kontostand + einzahlung;
                printf("Einzahlung Erfolgreich.\n");
                printf("Ihr neuer Kontostand beträgt: %d\n", kontostand);
                break;
            case 3:
                printf("Wieviel Geld möchtest du abheben? Bitte Betrag eingeben: ");
                scanf("%d", &abheben);

                while (abheben <= 0 || abheben > kontostand) {
                    if (abheben <= 0) {
                        printf("Der Betrag muss mindestens 1€ betragen. Bitte neuen Betrag eingeben: ");
                        scanf("%d", &abheben);
                        counter++;
                        if (counter >= 2) {
                            printf("Zuviele Fehlversuche, versuchen Sie es später erneut.\n");
                            return 1;
                        }
                    } else {
                        printf("Der Betrag übersteigt deinen Kontostand. Bitte gebe einen neuen Betrag ein: ");
                        scanf("%d", &abheben);
                        counter++;
                        if (counter >= 2) {
                            printf("Zuviele Fehlversuche, versuchen Sie es später erneut.\n");
                            return 1;
                        }
                    }
                }

                kontostand = kontostand - abheben;
                printf("Auszahlung erfolgreich. Neuer Kontostand: %d\n", kontostand);
                break;
            case 4:
                printf("Auf wiedersehen!\n");
                return 0;
        }
    }
}