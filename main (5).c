#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//Pertence ao intervalo (1...15)
//Soma dos números sorteados
//Valor médio dos números sorteados - Vm=soma/qtde_nums
//Qual o Valor médio dos números sorteados fora do intervalo? 
//3 rodadas
  
int SorteiaNum (int qtde) {
 
 int numsort, contador=1, soma=0, conta_fora=0, soma_fora=0;

   while (contador<=qtde) {
   numsort=rand()%101;
  printf("\nOs números sorteados são:");

 if (numsort>0 && numsort<=15) {
       printf("\n    %dº número --- %d - pertence ao intervalo [1..15]",contador,numsort);
   } 
 else {
      printf("\n    %dº número --- %d",contador,numsort);
   conta_fora++;
 }
  contador++;
  soma=soma+numsort;
  soma_fora=soma_fora+numsort;
}
printf("\n__________________________________________________________");
  printf("\n\n    A soma dos números sorteados é %d",soma);
  printf("\n__________________________________________________________");
  printf("\n\n    O valor médio dos números sorteados é %d",soma/qtde);
printf("\n__________________________________________________________");
  printf("\n\n    O valor médio dos números sorteados FORA do intervalo é %d",soma_fora/conta_fora);
printf("\n__________________________________________________________");  
printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

  return soma;
}

int main(void) {
//Variaveis
int qtde_nums,soma;
  
  //Usuario
srand(time(NULL));
  //Calculos e Resultados
int conta_rodada=0,soma_tot=0;
  
  while (conta_rodada<3){
    conta_rodada++;
    printf("\n%dª Rodada:\n",conta_rodada);
  printf("\nQuantos números deseja sortear, de 0 a 100?    ");
scanf("%d",&qtde_nums); 
   soma=SorteiaNum(qtde_nums);
   soma_tot+=soma;
  }
  
  printf("\n\n\n     A soma de todos os números após 3 rodadas é %d",soma_tot);
  
  return 0;
}