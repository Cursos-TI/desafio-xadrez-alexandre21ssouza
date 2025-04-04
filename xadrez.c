#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    /* Sugestão: Declare variáveis constantes para representar o número de casas que 
    cada peça pode se mover.*/
    int bispo_cor_preta = 5;
    int torre_cor_preta = 1;
    int rainha_cor_preta = 1;

    // Implementação de Movimentação do Bispo
    /* Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo
     em diagonal.*/

     printf("BEM VINDO AO XADREZ\n\n\n");
     
     printf("Movimento do Bispo cor Preta\n\n");
     for (int i = 0; i < bispo_cor_preta; i++){
        printf("Bispo se movendo para: \n");
        printf("Cima\n");
        printf("Direita\n");
        /* code */
     }
     
     printf("\n\n\n");

    // Implementação de Movimentação da Torre
    /* Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre
     para a direita.*/
     printf("Movimento da Torre cor Preta\n\n");

     while (torre_cor_preta <= 5){
      
      printf("Torre se movendo para: \n");
      printf("Direita\n");
      torre_cor_preta ++;
   }
     
          
     printf("\n\n\n");

    // Implementação de Movimentação da Rainha
    /* Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha
     para a esquerda.*/
     printf("Movimento da Rainha cor Preta\n\n");

     do{
      printf("Rainha se movendo para: \n");
      printf("Esquerda\n");
      rainha_cor_preta ++;
     } while (rainha_cor_preta <= 8);

     printf("\n\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
