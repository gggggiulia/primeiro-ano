/* Desenvolver um programa que controle as notas bimestrais de 20 alunos de uma sala de aula e que efetue o cálculo da média de cada aluno, sendo que será considerado aprovado o aluno que obtiver média >= 7.0. O programa em questão deverá executar as seguintes rotinas: 
a-cadastrar os 20 alunos e suas notas 
b-classificar os alunos cadastrados 
c-corrigir alunos e/ou notas que tenham sido cadastradas com erros 
d-pesquisar alunos por nome 
e-listar alunos aprovados 
f-listar alunos reprovados */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	float P1;
	float P2;
	float media;
	char nome[50];
} cadastro;

void cadastrar(cadastro *cad);
void classificar(cadastro *cad);
void corrigir(cadastro *cad);
void pesquisar(cadastro *cad);
void listarAprovados(cadastro *cad);
void listarReprovados(cadastro *cad);

void cadastrar(cadastro *cad){
	for(int i=0; i<20; i++){
		printf("CADASTRAR ALUNOS E NOTAS\n\n");

		printf("Digite o nome do aluno: ");
		getchar();
		fgets(cad[i].nome, sizeof(cad[i].nome), stdin);
	
	  	printf("Digite a nota da P1: ");
		scanf("%f", &cad[i].P1);
	
		printf("Digite a nota da P2: ");
		scanf("%f", &cad[i].P2);

		cad[i].media=(cad[i].P1+cad[i].P2)/2;
    		printf("\nNome: %s\nMédia: %f\n\n", cad[i].nome, cad[i].media);
	}
}

void classificar(cadastro *cad){
	cadastro aux;
	printf("CLASSIFICAÇÃO DOS ALUNOS POR MÉDIA\n\n");

	//Bubble sort
	for(int i=0; i<19; i++){
    		for(int j=i+1; j<20; j++){
    			if(cad[i].media<cad[j].media){
	    			aux=cad[i];
	    			cad[i]=cad[j];
	    			cad[j]=aux;
	    		}
    		}
  	}
  	for(int i=0; i<20; i++){
		printf("%iº %s", i+1, cad[i].nome);
  	}
}

void corrigir(cadastro *cad){
	int corrigir_cadastro;
	printf("CORREÇÃO DE CADASTRO\n\n");
	printf("Digite o número do cadastro que deseja alterar: ");
	scanf("%i", &corrigir_cadastro);
	printf("\n\n\n");
	
	corrigir_cadastro--;

	printf("CADASTRO ATUAL\n\n");
	printf("Nome: %s\nP1: %f\nP2: %f\nMédia: %f\n\n\n\n", cad[corrigir_cadastro].nome, cad[corrigir_cadastro].P1, cad[corrigir_cadastro].P2, cad[corrigir_cadastro].media);

	printf("ATUALIZAR CADASTRO\n\n");
	printf("Digite o nome: ");
  	getchar();
	fgets(cad[corrigir_cadastro].nome, sizeof(cad[corrigir_cadastro].nome), stdin);
	printf("Digite a nota da P1: ");
	scanf("%f", &cad[corrigir_cadastro].P1);
	printf("Digite a nota da P2: ");
	scanf("%f", &cad[corrigir_cadastro].P2);

	cad[corrigir_cadastro].media=(cad[corrigir_cadastro].P1+cad[corrigir_cadastro].P2)/2;

	printf("CADASTRO ATUALIZADO COM SUCESSO!\n\n");
	printf("Nome: %s\nMédia: %f\n\n\n", cad[corrigir_cadastro].nome, cad[corrigir_cadastro].media);
}

void pesquisar(cadastro *cad){
	char nome[50];
	printf("PESQUISA DE ALUNO POR NOME\n\n\n");
	printf("Digite o nome: ");
	getchar();
	fgets(nome, sizeof(nome), stdin);
	for(int i=0; i<20; i++){
		if(strcmp(nome, cad[i].nome)==0){
			printf("Nome: %s\nMédia: %f\n", cad[i].nome, cad[i].media);
    		}
  	}
}
void listarAprovados(cadastro *cad){
	printf("LISTA DOS APROVADOS\n\n");
	for(int i=0; i<20; i++){
		if(cad[i].media>=7){
			printf("%s\n", cad[i].nome);
		}
	}
}
void listarReprovados(cadastro *cad){
	printf("LISTA DOS REPROVADOS\n\n");
	for(int i=0; i<20; i++){
		if(cad[i].media<7){
			printf("%s\n", cad[i].nome);
    		}
	}
}

int main(){
	int indice = 0;
	cadastro cad[20];
	
	do{
	    printf("\n\n");
	    printf("MENU PRINCIPAL\n\n");
	    printf("1. Cadastrar alunos e notas\n");
	    printf("2. Classificar os alunos cadastrados\n");
	    printf("3. Corrigir alunos e/ou notas que tenham sido cadastradas com erros\n");
	    printf("4. Pesquisar alunos por nome\n");
	    printf("5. Listar alunos aprovados\n");
	    printf("6. Listar alunos reprovados\n");
	    printf("7. Sair do menu\n\n\n");
	    printf("Digite o número da opção desejada: ");
	    scanf("%i", &indice);
	    printf("\n\n\n");
	
		switch(indice){
			case 1: 
	    			cadastrar(cad);
	    			break;
	    		case 2:
	    			classificar(cad);
	    			break; 
	    		case 3:
	    			corrigir(cad);
	    			break;
	    		case 4:
	    			pesquisar(cad);
	    			break;
	    		case 5:
	    			listarAprovados(cad);
	    			break;
	    		case 6:
	    			listarReprovados(cad);
	    			break;
	    		case 7:
	    			printf("Saindo do menu…");
	    			return 0;
	    		default:
	    			printf("Opção inválida\n");
		}
	}while(indice!=7);
}
