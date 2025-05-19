#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Primeiro, monta-se um array bidimensional 10x10 através da declaração da matriz do tipo int
    // Inicializa-se este vetor com os valores 0 para representar a agua

    int tabuleiro[10][10] = {{0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}
    };

    // Declara-se os vetores unidimensionais dos 2 navios
    // Inicializando-se com o valor 3 cada posição dos navios

    int navio1[3]={3,3,3},navio2[3]={3,3,3};
    
    // Após a declaração, destina-se as posiçoes dos navios no tabuleiro via código através da estrutura de repetição for
    // A partir do momento que fixar a numeração da linha para o navio horizontal, utiliza-se o for para variar a posição da coluna atribuido os valores do navio no tabuleiro

    for (int i=3, j=0; i < 6, j<3; i++, j++) {
        tabuleiro[6][i]=navio1[j];
    }

    // No mesmo modo, fazemos com o navio vertical, só qeu fixar o valor da coluna e a estrutura de repetição vai substituindo o zero de agua para o 3 de navio no tabuleiro
    // O que antes na coordenadas onde estão os navios havia o 0 indicando agua, agora tem o "3" indicando um navio

    for (int i=2, j=0; i < 5, j<3; i++, j++) {
        tabuleiro[i][8]=navio2[j];
    }
       
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Agora, vamos declarar os navios 3 e 4 para ocuparem as posições da diagonal, o navio 3 de cima para baixo e o navio 4 de baixo para cima
    // Logo, utiliza-se novamente o for para o preenchimento dos navios nas posições no tabuleiro
    // Sendo que, para preencher de baixo para cima, o indice da linha diferentemente das colunas, ele descresce enquanto as colunas sofrem acrescimos na estrutura for
    // Ou seja, na posição destinada da linha 9 para o 7 enquanto a coluna vai da posição 7 para a 9.
    // Utiliza-se a estrutura for com 3 variáveis, 3 condições e 2 acréscimos e 1 descréscimo. Já que a variável "c" foi destinada para a variação das posições do vetor navio
    // As demais, "i" e "j" como anteriormente destinada para o vetor linha e coluna do tabuleiro

    int navio3[3]={3,3,3}, navio4[3]={3,3,3};

    for (int i=1, j=1, c=0; i < 4, j < 4, c < 3; i++, j++, c++) {
        tabuleiro[i][j]=navio3[c];
    }

    for (int i=9, j=7, c=0; i > 6, j < 10, c < 3; i--, j++, c++) {
        tabuleiro[i][j]=navio4[c];
    }
    
    // Após isto, utilize `printf` para exibir as coordenadas de cada parte dos navios através dos loops aninhados
    // Utiliza-se printf("\n") para pular a linha depois que o loop interno destinado para imprimir os valores da coluna finalizar
    // Já o loop externo é para percorrer as linhas do tabuleiro

    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            printf("%d ",tabuleiro[linha][coluna]);
        }
        printf("\n");
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

    return 0;
}
