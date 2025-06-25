#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    int idade;
}pessoa;

void cadastrar(pessoa *n){
    printf("\n\nCADASTRO DE PESSOAS\n");
    for(int i=0; i<5; i++){
        printf("\nNome: ");
        fgets(n[i].nome, sizeof(n[i].nome), stdin);
        printf("Idade: ");
        scanf("%i", &n[i].idade);
        getchar();
    }
}

void deletar(pessoa *n){
    int deletar_pessoa;
    printf("Digite o número correspondente à pessoa que deseja deletar (1-5): ");
    scanf("%i", &deletar_pessoa);
    getchar();
    
    deletar_pessoa--;
    
    //Para tirar o "buraco" do registro a ser removido é necessário movê-lo até o final
    for(int i=deletar_pessoa; i<4; i++){
        n[i]=n[i+1];
    }
    memset(&n[4], 0, sizeof(pessoa));
    printf("Sucesso! Cadastro deletado\n");
}

void exibiralfab(pessoa *n){
    pessoa aux;
    //bubble sort
    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            if(strcmp(n[i].nome, n[j].nome)>0){
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("\n\nNome: %s\nIdade: %i\n\n", n[i].nome, n[i].idade);
    }
}

int main() {
    pessoa n[5];
    int indice = 0;
    
    do{
        printf("\n\n\n");
        printf("1. Cadastrar pessoas\n");
        printf("2. Deletar cadastro\n");
        printf("3. Exibir cadastros em ordem alfabética\n");
        printf("4. Sair do menu\n");
        scanf("%i", &indice);
        getchar();
        
        switch(indice){
            case 1:
                cadastrar(n);
                break;
                
            case 2:
                deletar(n);
                break;
                
            case 3:
                exibiralfab(n);
                break;
                
            case 4:
                printf("Saindo do menu...\n");
                return 0;
                
            case 5:
                printf("Opção inválida\n\n");
        }
    }while(indice!=4);
}
