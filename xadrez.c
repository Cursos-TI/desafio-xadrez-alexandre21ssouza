#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

//Função recursiva do Bispo + loops aninhados
void bispoLoop(int b){
  if (b > 0) {
  
   for (int i = 0; i < 1; i++){
    printf("Bispo se movendo para: \n");
    printf("Cima\n");

    for (int j = 0; j < 1; j++) {
    printf("Direita\n");
    }  

   }
   /*pega o valor da variável b e subtrai na chamada da recursividade por -1, quando b
   chegar a 0, sai do loop. */
     bispoLoop(b - 1);
  }
   
  }



  //Função recursiva da Torre
  void torreLoop(int t){
   if (t > 0){
      printf("Torre se movendo para: \n");
      printf("Direita\n");

    /*pega o valor da variável b e subtrai na chamada da recursividade por -1, quando b
   chegar a 0, sai do loop.
   */
      torreLoop(t - 1);
   }
   
  }



 //Função recursiva da Torre
 void rainhaLoop(int r){
   if (r > 0){
      printf("Rainha se movendo para: \n");
      printf("Esquerda\n");

   /*pega o valor da variável b e subtrai na chamada da recursividade por -1, quando b
   chegar a 0, sai do loop.
   */
      rainhaLoop(r - 1);

   }
   
 }

int main() {
 
//Declaração de variáveis
    int bispo_cor_preta = 5;
    int torre_cor_preta = 5;
    int rainha_cor_preta = 8;
    int cavalo_cor_preta = 2;


   
   //Boas-vindas do jogo 
     printf("BEM-VINDO AO XADREZ\n\n\n");
   
     
   // Implementação de Movimentação do Bispo
   //Chamando a função recursiva para imprimir o movimento do Bispo
     printf("Movimento do Bispo cor Preta\n\n");
     bispoLoop(bispo_cor_preta);
     
     printf("\n\n\n");



   // Implementação de Movimentação da Torre
   //Chamando a função recursiva para imprimir o movimento da Torre
     printf("Movimento da Torre cor Preta\n\n");
     torreLoop(torre_cor_preta);    
          
     printf("\n\n\n");




   // Implementação de Movimentação da Rainha
   //Chamando a função recursiva para imprimir o movimento da Rainha
     printf("Movimento da Rainha cor Preta\n\n");
     rainhaLoop(rainha_cor_preta);

     printf("\n\n\n");




    // Implementação de Movimentação do Cavalo
    /*Uso do loop com múltiplas variáveis, com continue e break para controlar o fluxo de
     execução, para representar o movimento da peça Cavalo. O movimento para cima duas 
     vezes e um para direita, utilizando loops aninhados. 
    direita*/
     printf("Movimento do Cavalo cor preta:\n\n");

    for (int i = 0, j = 3; i <= cavalo_cor_preta && j >= 0; i++, j--){
        if(i < 2){
          printf("Cima\n");
          continue;
        
        }
        if (j == 1){
          printf("direita\n");
           break;
           
        }

    }
    
     
     printf("\n\n\n");


    return 0;
}
