#include <stdio.h>

int main() {
    char chuoi[] = "Hello, World!";
    int i = 0;

    // In ra t?ng ký t? trong chu?i, m?i ký t? cách nhau 1 d?u cách
    while (chuoi[i] != '\0') {
        printf("%c ", chuoi[i]);
        i++;
    }
    printf("\n");

    return 0;
}

