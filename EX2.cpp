#include <stdio.h>

int main() {
    char chuoi[] = "Hello, World!";
    int i = 0;

    
    while (chuoi[i] != '\0') {
        printf("%c ", chuoi[i]);
        i++;
    }
    printf("\n");

    return 0;
}

