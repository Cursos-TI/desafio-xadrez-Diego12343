#include <stdio.h>

int main() {
    // Movimento da Torre - Usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - Usando while
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha - Usando do-while
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    
    // Movimento do Cavalo - Usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (int m = 0; m < 2; m++) { // Duas casas para baixo
        printf("Baixo\n");
    }
    int n = 0;
    while (n < 1) { // Uma casa para a esquerda
        printf("Esquerda\n");
        n++;
    }
    
    return 0;
}

