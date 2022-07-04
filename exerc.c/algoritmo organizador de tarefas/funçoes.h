#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declarando constantes
#define   ATIVIDADES 1
#define   MOSTRA 2
#define   PESQUISAR 3
#define   ATUALIZAR 4
#define   EXCLUIR 5
#define   SAIR 6
 //tamanho do vetor para cadastro
#define TAMTAB 10

//variavel referente ao numeros de elementos usados na tabela
int qtdUsad=0; 

//declaração da variavel struct
struct cadastro{
int cod;
char tarefa[50];
char hora[10];
}vet[TAMTAB];


//menu de opções 
int menu(){
  int op=0;
printf("\n-------BEM VINDO AO SEU ORGANISADOR DE TAREFAS!!------");
printf("\n 1 - Adicionar tarefa");
printf("\n 2 - Mostrar todas as atividades");
printf("\n 3 - Pesquisar tarefa");
printf("\n 4 - Atualizar tarefa ");
printf("\n 5 - Finalizar tarefa ");
printf("\n 6 - Sair\n");
scanf("%i",&op);
  system("clear");
  return op;
}
//esta função é responsavel pela realização do cadastro de tarefas    
int tarefa(){
    printf("\nDigite a tarefa e o horario");
  if(qtdUsad < TAMTAB){  
  printf("\n");
  printf("\nAtividade:  ");
  scanf(" %[^\n]",vet[qtdUsad].tarefa);
  printf("\nHora:  ");
  scanf("%s",vet[qtdUsad].hora);
    printf("\nAtividade adicionada com sucesso");
    vet[qtdUsad].cod=qtdUsad;
    qtdUsad++;
    return qtdUsad;
    }
   else{
    printf("\nLimite de tarefas excedido");
    return -1;
  }
}
//essa função ira mostra todos os cadastros realizados
int mostrar(){
  int i=0;
    for(i=0;i < qtdUsad;i++){ 
      printf("codigo: %d",vet[i].cod);
      printf("\nTarefa: %s",vet[i].tarefa);
      printf("\nHora: %s",vet[i].hora);
      printf("\n");
      printf("\n-----------------------------------------\n");
      }
  return qtdUsad;
}

//função responsavel por pesquisar tarefa pelo codigo(id)
int pesquisar(){
  int compar;
  int encontrados;
  int cod;

  printf("\nDigite o codigo da tarefa\n");
  scanf("%d",&cod);

  for(int i=0;i<qtdUsad;i++){
    compar=cod-vet[i].cod;
    if(vet[i].cod==cod){
      printf("tarefa: %s",vet[i].tarefa);
      printf("\nhora: %s",vet[i].hora);
      printf("\n");
      encontrados++;
      return 0;
      }
  }
  if(encontrados==0){
    printf("\nNenhum valor encontrado");
    return -1;
  }
  }
  //Com essa função e realizada a alteração das atividades 
int alterar(){
   int buscar;
  
    printf("Digite o codigo da tarefa\t");
    scanf("%d",&buscar);
    printf("tarefa: %s",vet[buscar].tarefa);
    printf("\nhora: %s",vet[buscar].hora);
     
     if(buscar>=0){
       printf("\ntarefa:  ");
       scanf(" %[^\n]",vet[buscar].tarefa);
       printf("\nhora:  ");
       scanf("%s",vet[buscar].hora);
       return 0;
     }
  return 0;
  }
//função responsavel por excluir atividades
int excluir(){
 
int cod;
  printf("\nDigite o codigo da tarefa\n");
  scanf("%d",&cod);
  if(cod<qtdUsad){ 
        for(int i =cod;i < qtdUsad-1;i++){
          vet[i].cod=vet[i+1].cod;
          strcpy(vet[i].tarefa,vet[i+1].tarefa);
          strcpy(vet[i].hora,vet[i+1].hora);
          for(int j = i; j < qtdUsad ;j++){
            vet[j]=vet[j+1];
            qtdUsad--;
            printf("\n Matricula [%d] excluida\n", 
              vet[qtdUsad].cod);   
            }
          }
    return --qtdUsad;
    }
}

