#include <stdio.h>

int sum(int a[], int anzahl) {
    int summe = 0;
    for (int i = 0; i < anzahl; i++) {
        summe += a[i];
    }
    return summe;
}

int biggest(int a[], int anzahl) {
    int winner = a[0];
    for (int i = 1; i < anzahl; i++) {
        if (a[i] > winner) {
            winner = a[i];
        }
    }
    return winner;
}

int main() {
    int array[5];

    for (int a = 0; a < 5; a++) {
        printf("Zahl %d: ", a + 1);
        scanf("%d", &array[a]);
    }

    for (int a = 0; a < 5; a++) {
        printf("%d\n", array[a]);
    }

    printf("Die Summe aller Zahlen lautet: %d\n", sum(array, 5));
    printf("Die größte Zahl lautet: %d\n", biggest(array, 5));
}