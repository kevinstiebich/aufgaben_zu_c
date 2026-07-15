#include <stdio.h>

int main() {
    int amount, balance = 1000;
    const int dailyLimit = 500;
    printf("Betrag zum Abheben: ");
    scanf("%d", &amount);

    if (amount <= balance && amount <= dailyLimit && amount > 0) {
        printf("Abhebung erlaubt!");
        return 0;
    } else {
        printf("Fehler!");
        return 1;
    }

}