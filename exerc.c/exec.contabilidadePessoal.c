#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
int div;
char nome[20];
float renda,sobra=0;
float divida[100];
float soma=0;
int cont,i=3,loops=3,quant,cont2=0;

printf("Ola Digite seu nome por favor  ");
  fgets(nome,20,stdin);
printf("\nTudo bem? %sQual a sua renda mensal? ",nome);
  scanf(" %f",&renda); 
    system("clear");
printf("\nBom qual o valor de suas dividas esse mês?\n");
  printf("\nConta de energia: ");
  scanf(" %f",&divida[0]);
  printf("\nConta de Agua: ");
  scanf(" %f",&divida[1]);
  printf("\nConta de Internet: ");
  scanf(" %f",&divida[2]);
    system("clear");
printf("\nVoce fez mais dividas? Digite 1 para sim e 0 para não ");
  scanf(" %d",&div);
  if (div == 1){
  printf("\nQuantas dividas foram feitas? ");
    scanf(" %d",&quant);
    while(cont2<quant){
     for(cont=0;cont<1;cont++){
    printf("Digite o valor do seu gasto adicional? ");
       scanf(" %f",&divida[i]);
       i++;
       loops++;
       } 
      cont2++;
      }
    system("clear");
   }
for(cont=0;cont<=loops;cont++){
soma = soma+divida[cont];
}
sobra=renda-soma;
  printf("\n");
  printf("--------------------RESULTADO--------------------");
  printf("\n");
  printf("\nO valor total de suas dividas nesse mes é de: %.2f\n",soma);
  printf("--------------------------------------------------");
  if(sobra<0){
     printf("\nVoce terminou o mes com o saldo negativo!! de: %.2f",sobra);
  }
  else{
     printf("\no valor que sobrou da sua renda é: %.2f",sobra);
  }
   }
   
