#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Letras representam as colunas (A–J)
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Números representam as linhas (1–10)
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Matriz 10x10 representa o tabuleiro
    int tabuleiro[10][10] = {0};

    // Tamanho fixo dos navios
    int tamanhoNavio = 3;

    // Coordenadas iniciais dos navios
    int linhaNavio1 = 2, colunaNavio1 = 3; // Navio 1 - horizontal
    int linhaNavio2 = 5, colunaNavio2 = 7; // Navio 2 - vertical

    int linhaNavio3 = 5, colunaNavio3 = 1; // Navio 3 - diagonal principal
    int linhaNavio4 = 1, colunaNavio4 = 8; // Navio 4 - diagonal secundária

    // Validação e posicionamento do navio 1 (horizontal)
    if (colunaNavio1 + tamanhoNavio <= 10)
    {
        for (int i = 0; i < tamanhoNavio; i++)
        {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = 3;
        }
    }

    // Validação e posicionamento do navio 2 (vertical)
    if (linhaNavio2 + tamanhoNavio <= 10)
    {
        for (int i = 0; i < tamanhoNavio; i++)
        {
            if (tabuleiro[linhaNavio2 + i][colunaNavio2] == 0)
            {
                tabuleiro[linhaNavio2 + i][colunaNavio2] = 3;
            }
        }
    }

    // Validação e posicionamento do navio 3 (diagonal principal)
    if (linhaNavio3 + tamanhoNavio <= 10 && colunaNavio3 + tamanhoNavio <= 10)
    {
        for (int i = 0; i < tamanhoNavio; i++)
        {
            if (tabuleiro[linhaNavio3 + i][colunaNavio3 + i] == 0)
            {
                tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = 3;
            }
        }
    }

    // Validação e posicionamento do navio 4 (diagonal secundária)
    if (linhaNavio4 + tamanhoNavio <= 10 && colunaNavio4 - (tamanhoNavio - 1) >= 0)
    {
        for (int i = 0; i < tamanhoNavio; i++)
        {
            if (tabuleiro[linhaNavio4 + i][colunaNavio4 - i] == 0)
            {
                tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = 3;
            }
        }
    }

    // Exibição do Tabuleiro
    printf(" === TABULEIRO DE BATALHA NAVAL === \n\n");

    // Exibição das colunas
    printf("    ");
    for (int c = 0; c < 10; c++)
    {
        printf("%c  ", colunas[c]);
    }
    printf("\n");

    // Exibição das linhas
    for (int i = 0; i < 10; i++)
    {
        printf("%2d  ", linhas[i]); // número da linha (1–10)
        for (int j = 0; j < 10; j++)
        {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Nível Mestre - Habilidades Especiais com Matrizes
// Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
// Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
// Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

// Exemplos de exibição das habilidades:
// Exemplo para habilidade em cone:
// 0 0 1 0 0
// 0 1 1 1 0
// 1 1 1 1 1

// Exemplo para habilidade em octaedro:
// 0 0 1 0 0
// 0 1 1 1 0
// 0 0 1 0 0

// Exemplo para habilidade em cruz:
// 0 0 1 0 0
// 1 1 1 1 1
// 0 0 1 0 0
