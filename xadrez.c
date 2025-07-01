#include <stdio.h>

// ------------------------------
// Função recursiva para a TORRE
// ------------------------------
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// ------------------------------
// Função recursiva para a RAINHA
// ------------------------------
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// ------------------------------
// Função recursiva para o BISPO
// ------------------------------
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
}

// ------------------------------
// BISPO com loops aninhados
// (vertical externo e horizontal interno)
// ------------------------------
void moverBispoComLoops(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) { // 1 passo horizontal por passo vertical
            printf("Cima Direita\n");
        }
    }
}

// ------------------------------
// Movimento do CAVALO com loops aninhados e controle de fluxo
// Agora: 2 casas para cima + 1 casa para direita
// ------------------------------
void moverCavaloComplexo(int movimentos) {
    int movRealizados = 0;
    for (int i = 0; i < movimentos * 2; i++) {
        if (i % 2 == 0) {
            printf("Cima\n");
        } else {
            // Aninhado: 1 movimento horizontal
            for (int j = 0; j < 1; j++) {
                if (movRealizados >= movimentos) {
                    break;
                }
                printf("Direita\n");
                movRealizados++;
            }
        }

        if (movRealizados >= movimentos) {
            break;
        }
    }
}

// ------------------------------
// Função principal
// ------------------------------
int main() {
    // --------------------------
    // Torre (recursividade)
    // --------------------------
    printf("Movimento da Torre:\n");
    moverTorre(5);  // 5 casas para a direita

    // --------------------------
    // Bispo (recursividade)
    // --------------------------
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5); // 5 movimentos diagonais

    // --------------------------
    // Rainha (recursividade)
    // --------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(8); // 8 casas para a esquerda

    // --------------------------
    // Cavalo (loops aninhados)
    // --------------------------
    printf("\nMovimento do Cavalo:\n");
    moverCavaloComplexo(3); // 3 movimentos em "L" para cima e direita

    // --------------------------
    // Bispo com Loops Aninhados
    // --------------------------
    printf("\nMovimento do Bispo (com Loops Aninhados):\n");
    moverBispoComLoops(5); // mesmo movimento diagonal

    return 0;
}
