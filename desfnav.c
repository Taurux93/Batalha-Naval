#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[10][10];
    int navioHorizontal[1][3] = {0, 1, 2}; // exemplo de posições
    int navioVertical[3][1] = {0, 1, 2};   // exemplo de posições

    // 1. Inicializa o tabuleiro com zeros
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Definir posições iniciais dos navios
    // Para evitar sobreposição, vamos escolher posições diferentes
    int linhaHorizontal = 3; // linha onde o navio horizontal será posicionado
    int colunaHorizontal = 4; // coluna inicial do navio horizontal

    int linhaVertical = 5; // linha inicial do navio vertical
    int colunaVertical = 7; // coluna onde o navio vertical será posicionado

    // 3. Posicionar o navio horizontal
    // Tambem define o tamanho do navio
    for(int i = 0; i < 4; i++) {
        int col = colunaHorizontal + i;
        if(col < 10) { // garantir que não sai do limite
            tabuleiro[linhaHorizontal][col] = 3;
        }
    }

    // 4. Posicionar o navio vertical
    // tambem define o tamanho do navio
    for(int i = 0; i < 3; i++) {
        int lin = linhaVertical + i;
        if(lin < 10) { // garantir que não sai do limite
            tabuleiro[lin][colunaVertical] = 3;
        }
    }

    // 5. Exibir o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
