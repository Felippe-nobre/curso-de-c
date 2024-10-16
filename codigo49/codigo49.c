#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char jogo[3][3];
const char jogador = 'X';
const char computador = 'O';

void redefinirJogo();
void exibirJogo();
int espacoLivre();
void playerMovimentos();
void computadorMovimentos();
char verificarOVencedor();
void exibirGanhador(char);

int main() {
    char vencedor = ' ';
    char jogarNovamente;

    do {
        vencedor = ' ';
        jogarNovamente = ' ';
        redefinirJogo();

        while (vencedor == ' ' && espacoLivre() != 0) {
            exibirJogo();
            playerMovimentos();
            vencedor = verificarOVencedor();
            if (vencedor != ' ' || espacoLivre() == 0) {
                break;
            }
            computadorMovimentos();
            vencedor = verificarOVencedor();
            if (vencedor != ' ' || espacoLivre() == 0) {
                break;
            }
        }

        exibirJogo();
        exibirGanhador(vencedor);

        printf("\nVocê quer jogar de novo? (Y/N): ");
        scanf(" %c", &jogarNovamente); // Corrigi o scanf para capturar o caractere corretamente
        jogarNovamente = toupper(jogarNovamente);

    } while (jogarNovamente == 'Y');

    printf("Obrigado por jogar!\n");

    return 0;
}

void redefinirJogo() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            jogo[i][j] = ' ';
        }
    }
}

void exibirJogo() {
    printf(" %c | %c | %c \n", jogo[0][0], jogo[0][1], jogo[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", jogo[1][0], jogo[1][1], jogo[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", jogo[2][0], jogo[2][1], jogo[2][2]);
}

int espacoLivre() {
    int espaco = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (jogo[i][j] != ' ') {
                espaco--;
            }
        }
    }
    return espaco;
}

void playerMovimentos() {
    int x, y;
    do {
        printf("Digite uma linha de (1 a 3): ");
        scanf("%d", &x);
        x--;
        printf("Digite uma coluna de (1 a 3): ");
        scanf("%d", &y);
        y--;
        if (x < 0 || x > 2 || y < 0 || y > 2 || jogo[x][y] != ' ') {
            printf("Erro! Posição inválida ou ocupada. Tente novamente.\n");
        } else {
            jogo[x][y] = jogador;
            break;
        }
    } while (1);
}

void computadorMovimentos() {
    srand(time(0));
    int x, y;
    if (espacoLivre() > 0) {
        do {
            x = rand() % 3;
            y = rand() % 3;
        } while (jogo[x][y] != ' ');
        jogo[x][y] = computador;
    }
}

char verificarOVencedor() {
    // Verifica linhas e colunas
    for (int i = 0; i < 3; i++) {
        if (jogo[i][0] == jogo[i][1] && jogo[i][0] == jogo[i][2] && jogo[i][0] != ' ') {
            return jogo[i][0];
        }
        if (jogo[0][i] == jogo[1][i] && jogo[0][i] == jogo[2][i] && jogo[0][i] != ' ') {
            return jogo[0][i];
        }
    }
    // Verifica diagonais
    if (jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2] && jogo[0][0] != ' ') {
        return jogo[0][0];
    }
    if (jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0] && jogo[0][2] != ' ') {
        return jogo[0][2];
    }
    return ' ';
}

void exibirGanhador(char vencedor) {
    if (vencedor == jogador) {
        printf("Você ganhou!\n");
    } else if (vencedor == computador) {
        printf("Você perdeu!\n");
    } else {
        printf("Empate!\n");
    }
}
