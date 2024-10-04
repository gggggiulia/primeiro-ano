#include <stdio.h>
#include <stdlib.h>

#define max 5

void insercao(void);
void remocao(void);
void vazia(void);
void cheia(void);
void elemTopo(void);

int pilha[max], contador=0, topo = -1, base = -1;

int main(){
    int indice;
    
    while(1){
        printf("MENU\n\n1)Inserção de valores na pilha\n2)Remoção de valores da pilha\n3)Verificação se a fila está vazia\n4)Verificação se a fila está cheia\n5)Mostrar o elemento que está no topo da fila\n6)Sair do menu\n\n");
        printf("Digite a opção desejada: ");
        scanf("%i", &indice);
        printf("\n\n");
        
        switch(indice){
            case 1:
                insercao();
                break;
            case 2:
                remocao();
                break;
            case 3:
                vazia();
                break;
            case 4:
                cheia();
                break;
            case 5:
                elemTopo();
                printf("\n\n");
                break;
            case 6:
                printf("Saindo do menu...\n\n");
                return 0;
                break;
            default:
                printf("Opção inválida, tente outra opção.\n\n");
        }
    }
}

void insercao(){
    printf("Inserir valores na pilha:\n");
    while(contador < max){
        if(contador==0){
            scanf("%i", &pilha[contador]);
            
            topo++;
            base++;
            contador++;
            
        }else{
            scanf("%i", &pilha[contador]);
            
            topo++;
            contador++;
        }
    }
    printf("A pilha está cheia. Não é possível inserir mais valores.\n\n");
}

void remocao(){
    if(contador == 0){
        printf("A pilha está vazia e não há valores para serem removidos.");
    }else{
        printf("Elemento a ser removido: %i\n\n*Elemento removido com sucesso!*", pilha[topo]);
        topo--;
        contador--;
    }
    printf("\n\n");
}

void vazia(){
    if(contador==0){
        printf("A pilha está, de fato, vazia.\n\n");
    }else{
        printf("A pilha não está vazia.\n\n");
    }
}

void cheia(){
    if(contador==max){
        printf("A pilha está, de fato, cheia.\n\n");
    }else{
        printf("A pilha não está cheia.\n\n");
    }
}

void elemTopo(){
    if(contador>0){
        printf("O elemento no topo da pilha é %i", pilha[topo]);
    }else{
        printf("*Erro. A pilha está vazia.*");
    }
}
