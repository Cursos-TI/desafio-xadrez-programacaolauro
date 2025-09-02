#include <stdio.h>

int main() {
    
    // Quantidade de casas para cada peça do jogo
    
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;

    int i;
    
    // Movimento da Torre (FOR)
    
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movTorre; i++) {
        printf("Direita\n");
    }

    
    // Movimento do Bispo (WHILE)
    
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= movBispo) {
        printf("Cima Direita\n");
        i++;
    }

    
    // Movimento da Rainha (DO-WHILE)
    
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movRainha);

    return 0;
}
