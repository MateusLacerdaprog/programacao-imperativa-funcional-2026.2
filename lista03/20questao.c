#include <stdio.h>

int main() {
    int i;

    printf("=================================\n");
    printf(" Decimal  |  Hexadecimal  | Char \n");
    printf("=================================\n");

    for (i = 32; i <= 126; i++) {
        printf("   %3d    |     0x%-6X  |  %c  \n", i, i, (char)i);
    }

    printf("=================================\n");

    return 0;
}