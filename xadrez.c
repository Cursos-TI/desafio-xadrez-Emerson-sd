#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
     int torre = 1;// variavel da torre .
    printf("movimentaçao da peça de xadrez torre:\n"); // informando qual peça ta se movimentando.
    while (torre<=5){// code de repetiçao

        printf("DIREITA!\n");//direçao da peça
        torre++;
    
    }



    printf("======================\n");
    printf("movimentaçao da peça de xadrez rainha:\n");// informando qual peça ta se movimentando.
                       

    for (int rainha = 1; rainha <=8;rainha++){// code de repetiçao

        printf("ESQUERDA!\n");//direçao da peça
       
    }
    printf("======================\n");
    printf("movimentaçao da peça de xadrez bispo:\n");// informando qual peça ta se movimentando.

    int bispo = 1;//variavel
        do{
            bispo++;
            printf("CIMA!\n");//direçao da peça
            printf("DIREITA!\n");
        }while (bispo<=5);// verifica se quantas casa a peça deve andar.

        

    // Nível Aventureiro - Movimentação do Cavalo
    printf("======================\n");
    printf("movimentaçao da peça de xadrez cavalo:\n");// informando qual peça ta se movimentando.
        int cavalo = 1;//variavel loop externo
        

        do//loop externo
        {       int cavalo2 = 1;//variavel loop interno
                do//loop interno
                    {   
                        cavalo2++;

                            printf("CIMA!\n");//direçao da peça
                        }   while (cavalo2<= 2);//quantas vezes vai ser printado
        
            cavalo++;
            printf("DIREITA!\n");//direçao da peça
        } while (cavalo<= 1);//quantas vezes vai ser printado

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
