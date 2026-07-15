#include <stdio.h>

int main() {
    int geheim = 3, eingabe;
    printf("Gebe eine Zahl ein: ");
    scanf("%d", &eingabe);
    
    if (eingabe == geheim) {
        printf("Korrekt!");
        return 0;
    } else if (eingabe >= geheim) {
        printf("Deine Zahl ist zu groß!\n");
        return 1;
    } else {
        printf("Deine Zahl ist zu klein!\n");
        return 1;
    }
}