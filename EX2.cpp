#include <stdio.h>

int main() {
    char chuoi[] = "Hello, World!";
    int i = 0;

    // In ra t?ng k� t? trong chu?i, m?i k� t? c�ch nhau 1 d?u c�ch
    while (chuoi[i] != '\0') {
        printf("%c ", chuoi[i]);
        i++;
    }
    printf("\n");

    return 0;
}

