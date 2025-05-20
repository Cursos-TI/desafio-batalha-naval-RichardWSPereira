#include <stdio.h>

// Desafio Batalha Naval - MateCheck


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

    
    // Utiliza-se `printf` para exibir as coordenadas de cada parte dos navios através dos loops aninhados
    // Utiliza-se printf("\n") para pular a linha depois que o loop interno destinado para imprimir os valores da coluna finalizar
    // Já o loop externo é para percorrer as linhas do tabuleiro

    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            printf("%d  ",tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Criar matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Utiliza-se estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Exibimos o tabuleiro com as áreas afetadas, utilizando 5 para áreas afetadas.

    // Exemplos de exibição das habilidades:

    /* 
        Para preencher o tabuleiro com o efeito especial CONE utiliza-se loops aninhados com condicional no loop interno
        Sendo que, para o preenchimento quando a condicional for verdadeira utiliza-se dois loops for, uma para preencher a base ou para preencher o meio do cone 
        O topo do Cone foi atribuido diretamente o valor 5 no código dentro do if 
        Utilizou a lógica que a partir que atingisse a coordenada alvo, que seria o centro do efeito especial, a área afetada seria a partir dessa coordenada
        Portanto, tem um loop para atribuir o efeito na linha acima e abaixo da linha da coordenada alvo
        Como também, tem o loop para atribuir o efeito para a coluna mais a esquerda como mais a direita da coluna alvo.
        Com isto, o loop externo e interno iniciais fazem a varredura do tabuleiro preenchendo o efeito especial quando a condicional se tornar verdadeira
         
    */

    // Exemplo para habilidade em cone:
    // 0 0 5 0 0
    // 0 5 5 5 0
    // 5 5 5 5 5

    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            if (linha==2 && coluna==2) {
                tabuleiro[linha-1][coluna]= 5;
                for (int p = linha,q = coluna-1; q <= coluna+1; q++) {
                    tabuleiro[p][q] = 5;
                }
                for (int p = linha+1,q = coluna-2; q <= coluna+2; q++) {
                    tabuleiro[p][q] = 5;
                }
            }
        }
    }

    
    // Agora vamos exibir através do printf o efeito especial CONE
   
    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            printf("%d  ",tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // Exemplo para habilidade em cruz:
    // 0 0 5 0 0
    // 0 0 5 0 0
    // 5 5 5 5 5
    // 0 0 5 0 0
    // 0 0 5 0 0
 

    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            if (linha==7 && coluna==3) {
                for (int p = linha,q = coluna-2; q <= coluna+2; q++) {
                    tabuleiro[p][q] = 5;
                }
                for (int p = linha-2,q = coluna; p <= linha+2; p++) {
                    tabuleiro[p][q] = 5;
                }
            }    
        }
    }

    // Agora vamos exibir através do printf o efeito especial CRUZ

    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            printf("%d  ",tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // Exemplo para habilidade em octaedro:
    // 0 0 5 0 0
    // 0 5 5 5 0
    // 5 5 5 5 5
    // 0 5 5 5 0
    // 0 0 5 0 0

    /* 
        No Octaedro vemos que é a junção do cone virado para cima e para baixo, portanto, colocamos um for destinado para o preenchimento acima da coordenada alvo e abaixo
        Outra diferença do código do Cone é que agora tivemos que atribuir o valor 5 para a ponta inferior também
        Portanto, tem a estrutura de repetiçaõ para a base, o efeito acima e abaixo da coordenada alvo 
    */
   
    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            if (linha==2 && coluna==7) {
                tabuleiro[linha-2][coluna]= 5;
                for (int p = linha+1,q = coluna-1; q <= coluna+1; q++) {
                    tabuleiro[p][q] = 5;
                }
                for (int p = linha,q = coluna-2; q <= coluna+2; q++) {
                    tabuleiro[p][q] = 5;
                }
                for (int p = linha-1,q = coluna-1; q <= coluna+1; q++) {
                    tabuleiro[p][q] = 5;
                }
                tabuleiro[linha+2][coluna]= 5;
            }    
        }
    }

    // Agora vamos exibir através do printf o efeito especial OCTAEDRO

    for (int linha=0; linha < 10; linha++) {
        for (int coluna=0; coluna < 10; coluna++) {
            printf("%d  ",tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");


    return 0;
}