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
    else if(opcao == 1){
        codigo=criarTarefa(&lt);
        if(codigo==1){
        printf("Erro ao criar tarefa: sem espaco disponivel.\n");
        }
    else if(opcao == 2){
         codigo=deletarTarefa(&lt);
        if(codigo==1){
            printf("Erro ao deletar tarefa: nao existem tarefas para deletar.\n");
        }
        if(codigo==2){
            printf("Erro ao deletar tarefa: posicao invalida.\n");
        }
    }
    else if(opcao == 3){
        codigo=listarTarefas(&lt);
        if(codigo==1){
            printf("Erro ao listar tarefas: nao existem tarefas para serem listadas.\n");
        }
        else{
            printf("Opcao invalida.\n");
        }
    }
    else if(opcao == 4){
        printf("A");
        return 0;
        
    }
    else {printf("Opcao invalida\n");}
}
    
}while(opcao!=0);
return 0;
}