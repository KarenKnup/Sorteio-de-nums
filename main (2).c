#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Soma dos números sorteados

void SorteiaNum (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=0, soma=0;

printf("\nOs números sorteados são:");
while (contador<qtde) {
  numsort=rand()%101;
 if (numsort>0 && numsort<=15) {
       printf("\n%d - pertence ao intervalo [1..15]",numsort);
   } 
 else {
      printf("\n%d",numsort);
 }
  contador++;
  soma=soma+numsort;
}

  printf("\n\nA soma dos números sorteados é %d",soma);
}

int main(void) {
//Variaveis
int qtde_nums;
  
  //Usuario
printf("Quantos números deseja sortear, de 0 a 100?    ");
scanf("%d",&qtde_nums);
  
  //Calculos e Resultados
SorteiaNum(qtde_nums);
  
    return 0;
}