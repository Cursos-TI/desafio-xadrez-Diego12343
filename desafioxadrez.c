#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva combinada com loops aninhados para o Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima Direita\n");
        }
    }
    moverBispo(vertical - 1, horizontal - 1);
}

int main() {
    // Movimento da Torre - Usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo - Usando recursividade e loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    // Movimento da Rainha - Usando recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);
    
    // Movimento do Cavalo - Usando loops aninhados e controle de fluxo
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
    
    return 0;
}
