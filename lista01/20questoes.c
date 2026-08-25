#include <stdio.h>

int main() {
    // Linha 1: Canto Superior Esquerdo, 2 Linhas Horizontais, Canto Superior Direito
    printf("\xC9\xCD\xCD\xBB\n");

    // Linha 2: Linha Vertical, 2 Espaços, Linha Vertical
    printf("\xBA  \xBA\n");

    // Linha 3: Linha Vertical, 2 Espaços, Linha Vertical
    printf("\xBA  \xBA\n");

    // Linha 4: Canto Inferior Esquerdo, 2 Linhas Horizontais, Canto Inferior Direito
    printf("\xC8\xCD\xCD\xBC\n");

    return 0;
}