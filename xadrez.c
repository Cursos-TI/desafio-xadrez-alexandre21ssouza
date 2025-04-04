#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

//Função recursiva do Bispo
void bispoLoop(int b){
   if (b > 0){
      printf("Bispo se movendo para: \n");
      printf("Cima\n");
      printf("Direita\n");

      //pega o valor da variável b e subtrai na chamada da recursividade por -1
      bispoLoop(b - 1);

   }
   
  }

  //Função recursiva da Torre
  void torreLoop(int t){
   if (t > 0){
      printf("Torre se movendo para: \n");
      printf("Direita\n");

      //pega o valor da variável b e subtrai na chamada da recursividade por -1
      torreLoop(t - 1);
   }
   
  }

 //Função recursiva da Torre
 void rainhaLoop(int r){
   if (r > 0){
      printf("Rainha se movendo para: \n");
      printf("Esquerda\n");

      //pega o valor da variável b e subtrai na chamada da recursividade por -1
      rainhaLoop(r - 1);

   }
   
 }

int main() {
    // Nível Novato - Movimentação das Peças
    /* Sugestão: Declare variáveis constantes para representar o número de casas que 
    cada peça pode se mover.*/
    int bispo_cor_preta = 5;
    int torre_cor_preta = 5;
    int rainha_cor_preta = 8;
    int cavalo_cor_preta = 1;

   // Implementação de Movimentação do Bispo
   /* Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo
     em diagonal.*/

   //Apresentação do jogo
     printf("BEM VINDO AO XADREZ\n\n\n");
     
   //Chamando a função recursiva para imprimir o movimento do Bispo
     printf("Movimento do Bispo cor Preta\n\n");
     bispoLoop(bispo_cor_preta);
     
     printf("\n\n\n");



   // Implementação de Movimentação da Torre
   /* Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre
     para a direita.*/

   //Chamando a função recursiva para imprimir o movimento da Torre
     printf("Movimento da Torre cor Preta\n\n");
     torreLoop(torre_cor_preta);

     
          
     printf("\n\n\n");

   // Implementação de Movimentação da Rainha
   /* Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha
     para a esquerda.*/

   //Chamando a função recursiva para imprimir o movimento da Rainha
     printf("Movimento da Rainha cor Preta\n\n");
     rainhaLoop(rainha_cor_preta);

     printf("\n\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    /*Uso do While para representar o movimento para a esquerda e um for para
     representar o movimento para baixo*/
     printf("Movimento do Cavalo cor preta:\n\n");

     while(cavalo_cor_preta <= 1){
         int movimento_baixo = 2;
      for (int i = 1; i <= movimento_baixo; i++){
         printf("Baixo\n");

      }
      printf("Esquerda\n");
      cavalo_cor_preta++;
     }
     
     printf("\n\n\n");

     

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
