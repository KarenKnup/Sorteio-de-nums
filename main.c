#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Sorteio de número de 0 a 100

void SorteiaNum (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=0;

printf("\nOs números sorteados são:");
while (contador<qtde) {
  numsort=rand()%101; //entre 0 e 100
  printf("\n%d",numsort);
  contador++;
  }
}

void SorteiaNum2 (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=0;

printf("\n\nOs números sorteados são:");
while (contador<qtde) {
  numsort=1+(rand()%10); //entre 1 e 10
  printf("\n%d",numsort);
  contador++;
  }
}

void SorteiaNum3 (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=0;

printf("\n\nOs números sorteados são:");
while (contador<qtde) {
  numsort=rand()%101; //entre 0 e 100 
  numsort=numsort/100; //entre 0.00 e 1.00
  printf("\n%d",numsort);
  contador++;
  }
}

int main(void) {
//Variaveis
int qtde_nums;
  
  //Usuario
printf("Quantos números deseja sortear?    ");
scanf("%d",&qtde_nums);
  
  //Calculos e Resultados
SorteiaNum(qtde_nums); //de 0 a 100
SorteiaNum2(qtde_nums); //de 1 a 10
SorteiaNum3(qtde_nums); //de 0.00 a 1.00
    return 0;
}