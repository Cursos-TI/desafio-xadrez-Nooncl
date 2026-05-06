#include <stdio.h>


// Movimentação da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}


// Movimentação da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}


// Movimentação do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;

    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);
}


// Movimentação do cCavalo
void moverCavalo() {

    for (int vertical = 0, horizontal = 0; vertical < 2 || horizontal < 1; ) {

        if (vertical < 2) {
            printf("Cima\n");
            vertical++;
            continue;
        }

        if (horizontal < 1) {
            printf("Direita\n");
            horizontal++;
        }
    }
}


// Função principal
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
