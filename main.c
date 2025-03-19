#include "projeto.h"
#include <stdio.h>

int main(){
ListaDeTarefas lt;
char arquivo[]="tarefas";
int opcao, codigo;
codigo=carregarTarefas(&lt, arquivo);
if(codigo!=0){
    printf("Lista de tarefas nao carregada");
    lt.qtd=0;
}

do{
    exibeMenu();
    scanf("%d", &opcao);

    if(opcao == 0){}
    else if(opcao == 1){}
    else if(opcao == 2){}
    else if(opcao == 3){}
    else {printf("Opcao invalida\n");}
}while(opcao!=0);

}