#include <stdio.h>
#include <stdlib.h>

#define max 5

void insercao(void);
void remocao(void);
void exibicao(void);
void posicionamento(void);
void vazia(void);
void cheia(void);
void localizacao(void);

int fila[max], contador=0, inicio = -1, fim = -1;

int main(){
    int indice;
    
    while(1){
        printf("MENU\n\n1)Inserção de valores na fila\n2)Remoção de valores da fila\n3)Exibição dos elementos\n4)Posições na fila\n5)Verificação se a fila está vazia\n6)Verificação se a fila está cheia\n7)Localização de um elemento\n8)Sair do menu\n\n");
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
                exibicao();
                break;
            case 4:
                posicionamento();
                break;
            case 5:
                vazia();
                break;
            case 6:
                cheia();
                break;
            case 7:
                localizacao();
                break;
            case 8:
                printf("Saindo do menu...\n\n");
                return 0;
                break;
            default:
                printf("Opção inválida, tente outra opção.\n\n");
        }
    }
}

void insercao(){
    printf("Inserir valores na fila:\n");
    while(contador < max){
        if(contador==0){
            scanf("%i", &fila[contador]);
            
            inicio++;
            fim++;
            contador++;
            
        }else{
            scanf("%i", &fila[contador]);
            
            fim++;
            contador++;
        }
    }
    printf("A fila está cheia. Não é possível inserir mais valores.\n\n");
}

void remocao(){
    if(contador == 0){
        printf("A fila está vazia e não há valores para serem removidos.");
    }else{
        printf("Elemento a ser removido: %i\n\n*Elemento removido com sucesso!*", fila[inicio]);
        inicio++; // Move o início um campo para a direita. O próximo item da fila torna-se o "primeiro".
        contador--;
    }
    printf("\n\n");
}

void exibicao(){
    if(contador != 0){
        for(int i=inicio; i<=fim; i++){
            printf("%i\n", fila[i]);
        }
    }else{
        printf("A lista está vazia e não há valores para serem exibidos.");
    }
    printf("\n\n");
}

void posicionamento(){
    if(contador==0){
        printf("*Erro. A fila está vazia.*\n\n");
    }else{
        for(int i=inicio; i<max; i++){
            printf("%i) %i\n", i - inicio +1, fila[i]);
        }
        printf("\n\n");
    }
}

void vazia(){
    if(contador==0){
        printf("A fila está, de fato, vazia.\n\n");
    }else{
        printf("A fila não está vazia.\n\n");
    }
}

void cheia(){
    if(contador==max){
        printf("A fila está, de fato, cheia.\n\n");
    }else{
        printf("A fila não está cheia.\n\n");
    }
}

void localizacao(){
    int pesquisa;
    int encontrado = 0;
    printf("Digite o elemento que deseja localizar: ");
    scanf("%i", &pesquisa);
    for(int i=inicio; i<max; i++){
        if(fila[i]==pesquisa){
            printf("%i está em %iº lugar na fila\n\n", fila[i], i+1);
            encontrado = 1;
        }
    }
    
    if(!encontrado){
        printf("*O elemento digitado não foi encontrado na fila.*");
    }
    
    printf("\n\n");
}
