#include <stdio.h>

int main() {
    int jahr;

    printf("Gebe ein Jahr ein: ");
    scanf("%d", &jahr);

    if (jahr % 4 == 0 && jahr % 100 != 0) {
        printf("%d ist ein Schaltjahr!\n", jahr);
        return 0;
    } else if (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0) {
        printf("%d ist ein Schaltjahr!\n", jahr);
        return 0;
    } else {
        printf("%d ist kein Schaltjahr.\n", jahr);
        return 1;
    }
}