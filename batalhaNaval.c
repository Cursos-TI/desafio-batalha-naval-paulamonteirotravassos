#include <stdio.h>

    int main(){

        // Tabuleiro 10x10, inciando com 0 (água)
        int tabuleiro[10][10]= {0};

        // Navios Tamanho Fixo 3
        int navioVertical[3]={3,3,3};
        int navioHorizontal[3]={3,3,3};

        // Coordenadas iniciais (linhas e colunas)
        int linhaV=2, colunaV=4;   // navio vertical começa em (2,4)
        int linhaH=6, colunaH=1;  // navio horizontal começa em (6,1)

        // Posicionar Navio na Vertical no Tabuleiro
        for(int i=0; i<3; i++){
            tabuleiro[linhaV+i][colunaV]=navioVertical[i];
        }

        // Posicionar navio horizontal no tabuleiro
        for(int i=0; i<3; i++){
            tabuleiro[linhaH][colunaH+i]=navioHorizontal[i];
        }

        // exibir tabuleiro Completo
        printf("*** Tabuleiro 10x10: ***\n");
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                printf("%d",tabuleiro[i][j]);
            }
            printf("\n");
        }



        return 0;
    }
