#define TOTAL_TAREFAS 100

typedef struct{
    int prioridade;
    char descricao[300];
    char categoria[100];
}Tarefa;

typedef struct{
    Tarefa tarefas[TOTAL_TAREFAS];
    int qtd;
}ListaDeTarefas;

int criarTarefa(ListaDeTarefas *lt);
int deletarTarefa(ListaDeTarefas *lt);
int listarTarefas(ListaDeTarefas *lt);

int carregarTarefas(ListaDeTarefas *lt, char *nome);
int salvarTarefas(ListaDeTarefas *lt, char *nome);

void exibeMenu();