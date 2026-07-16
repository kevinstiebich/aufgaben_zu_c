#include <stdio.h>

int main() {
    int a, b, a_or_b;

    //A OR B
    printf("A | B | A OR B\n");
    printf("-----------\n");

    a = 0, b = 0;
    if (a == 1 || b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 0, b = 1;
    if (a == 1 || b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 1, b = 0;
    if (a == 1 || b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 1, b = 1;
    if (a == 1 || b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    printf(" \n");
    //A AND B
    printf("A | B | A AND B\n");
    printf("-----------\n");

    a = 0, b = 0;
    if (a == 1 && b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 0, b = 1;
    if (a == 1 && b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 1, b = 0;
    if (a == 1 && b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 1, b = 1;
    if (a == 1 && b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    printf(" \n");
    //A XOR B
    printf("A | B | A XOR B\n");
    printf("-----------\n");

    a = 0, b = 0;
    if (a == 1 ^ b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 0, b = 1;
    if (a == 1 ^ b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 1, b = 0;
    if (a == 1 ^ b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    a = 1, b = 1;
    if (a == 1 ^ b == 1) {
        a_or_b = 1;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    } else {
        a_or_b = 0;
        printf("%d | %d |   %d\n", a, b, a_or_b);
    }

    return 0;
}