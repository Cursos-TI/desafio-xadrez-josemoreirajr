#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Função recursiva para simular o movimento do Bispo (com loops aninhados)
void moverBispoRecursivo(int casas) {
    printf("Movimento do Bispo (Recursivo com Loops):\n");
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < casas; horizontal++) {
            printf("Diagonal Cima Direita\n"); // Simplificando para diagonal
        }
    }
}

// Função recursiva para simular o movimento da Rainha
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    // Simulação do movimento da Torre (usando recursão)
    printf("Movimento da Torre (Recursivo):\n");
    moverTorreRecursivo(5);
    printf("\n");

    // Simulação do movimento do Bispo (usando recursão e loops aninhados)
    moverBispoRecursivo(5);
    printf("\n");

    // Simulação do movimento da Rainha (usando recursão)
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainhaRecursivo(8);
    printf("\n");

    // Simulação do movimento do Cavalo (usando loops complexos)
    printf("Movimento do Cavalo (Loops Complexos):\n");
    int movimento_vertical = 2;
    int movimento_horizontal = 1;
    int etapa = 0;

    for (int cima = 0; cima <= movimento_vertical; cima++) {
        for (int direita = 0; direita <= movimento_horizontal; direita++) {
            if (cima == 2 && direita == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                goto proximo_movimento; // Usando goto para sair dos loops aninhados
            } else if (cima < movimento_vertical) {
                printf("Cima\n");
            } else if (cima == movimento_vertical && direita < movimento_horizontal) {
                printf("Direita\n");
            }
        }
    }

proximo_movimento:
    printf("\n");

    return 0;
}
