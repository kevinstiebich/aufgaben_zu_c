#include <stdio.h>

int main() {
    int a, b, ergebnis;

    //A OR B
    printf("A | B | A OR B\n");
    printf("-----------\n");

    a = 0, b = 0;
    if (a == 1 || b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 0, b = 1;
    if (a == 1 || b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 1, b = 0;
    if (a == 1 || b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 1, b = 1;
    if (a == 1 || b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    printf(" \n");
    //A AND B
    printf("A | B | A AND B\n");
    printf("-----------\n");

    a = 0, b = 0;
    if (a == 1 && b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 0, b = 1;
    if (a == 1 && b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 1, b = 0;
    if (a == 1 && b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 1, b = 1;
    if (a == 1 && b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    printf(" \n");
    //A XOR B
    printf("A | B | A XOR B\n");
    printf("-----------\n");

    a = 0, b = 0;
    if (a == 1 ^ b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 0, b = 1;
    if (a == 1 ^ b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 1, b = 0;
    if (a == 1 ^ b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    a = 1, b = 1;
    if (a == 1 ^ b == 1) {
        ergebnis = 1;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    } else {
        ergebnis = 0;
        printf("%d | %d |   %d\n", a, b, ergebnis);
    }

    return 0;
}