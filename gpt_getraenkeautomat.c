#include <stdio.h>

int main() {
    char drink, moredrinks = 'y';
    int anzahl;
    float preisK = 2.50, preisT = 2.00, preisW = 1.50, endpreis = 0;

    while (moredrinks == 'y') {
        printf("Wähle ein Getränk (K/T/W): ");
        scanf("%s", &drink);
        printf("Anzahl: ");
        scanf("%d", &anzahl);
        
        if (drink == 'K') {
            endpreis = endpreis + preisK * anzahl;
        } else if (drink == 'T') {
            endpreis = endpreis + preisT * anzahl;
        } else if (drink == 'W') {
            endpreis = endpreis + preisW * anzahl;
        }
        printf("Darf es noch etwas sein? (y/n) ");
        scanf("%s", &moredrinks);
    }

    printf("Gesamtpreis: %.2f\n", endpreis);
    return 0;
}