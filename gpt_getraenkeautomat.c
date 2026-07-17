#include <stdio.h>

int main() {
    char drink, moredrinks = 'y';
    int anzahl;
    float preisK = 2.50, preisT = 2.00, preisW = 1.50, endpreis = 0;

    while (moredrinks == 'y') {
        printf("Wähle ein Getränk (K/T/W): ");
        scanf(" %c", &drink);
        while (drink != 'K' && drink != 'k' && drink != 'T' && drink != 't' && drink != 'W' && drink != 'w') {
            printf("Ungültige Eingabe. Bitte wähle K, T oder W: ");
            scanf(" %c", &drink);
        }
        
        printf("Anzahl: ");
        scanf("%d", &anzahl);
        while (anzahl <= 0) {
            printf("Du kannst hier keine Drinks verkaufen! Neue Eingabe: ");
            scanf("%d", &anzahl);
        }

        
        if (drink == 'K' || drink == 'k') {
            endpreis = endpreis + preisK * anzahl;
        } else if (drink == 'T' || drink == 't') {
            endpreis = endpreis + preisT * anzahl;
        } else if (drink == 'W' || drink == 'w') {
            endpreis = endpreis + preisW * anzahl;
        }
        printf("Darf es noch etwas sein? (y/n) ");
        scanf(" %c", &moredrinks);
    }

    printf("Gesamtpreis: %.2f\n", endpreis);
    return 0;
}