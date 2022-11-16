#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Pertence ao intervalo (1...15)
//Soma dos números sorteados
//Valor médio dos números sorteados - Vm=soma/qtde_nums
//Qual o Valor médio dos números sorteados fora do intervalo? 
  
void SorteiaNum (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=1, soma=0, conta_fora=0, soma_fora=0;

printf("\nOs números sorteados são:");
while (contador<=qtde) {
  numsort=rand()%101;
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
}

int main(void) {
//Variaveis
int qtde_nums;
  
  //Usuario
printf("Quantos números deseja sortear, de 0 a 100?    ");
scanf("%d",&qtde_nums);
  
  //Calculos e Resultadoswh
SorteiaNum(qtde_nums);
  
    return 0;
}