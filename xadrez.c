#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

    // Simulação do movimento do Cavalo (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    int movimento_vertical = 2;
    int movimento_horizontal = 1;

    // Primeiro loop: movimento vertical (duas casas para baixo)
    for (int baixo = 0; baixo < movimento_vertical; baixo++) {
        printf("Baixo\n");
        // Segundo loop (aninhado): movimento horizontal (uma casa para a esquerda)
        // Este loop executa apenas na última etapa do movimento vertical
        if (baixo == movimento_vertical - 1) {
            int esquerda = 0;
            while (esquerda < movimento_horizontal) {
                printf("Esquerda\n");
                esquerda++;
            }
        }
    }
    printf("\n");

    return 0;
}
