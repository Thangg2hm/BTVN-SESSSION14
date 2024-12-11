#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello, World!";
    int doDai = strlen(chuoi);

    printf("Chuoi dao nguoc la: ");
    for (int i = doDai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");

    return 0;
}

