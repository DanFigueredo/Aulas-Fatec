/*
	Name: ListaLigada.cpp
	Author: Daniel Figueredo
	Date: 01/09/26 11:18
	Description: Programa para implementar um Lista Ligada contendo vários nós ( NODE )
*/

//Bibliotecas	
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

//Definição da estrutura de um nó
typedef struct No{
	char nome[20];
	int idade;
	No *prox;
};

// Variavél Global
int tamanho; // Armazenta o tamanho da lista

 //Seção de Prototipação
int vazia ( No *);
No *alocaMemoria();
void inserirNoFim(No *);
No *retirarNoFim(No *);
void inserirNoInicio(No *);
No *retirarNoInicio(No *);
void exibirLista(No *);
void inciarLista(No *);
int menu();
void tratarOpcao(No *, int);

//Função Principal
main(){
	No *Lista = (No *) malloc(sizeof(No));
	int opc = 0;
	if(!Lista){
		puts("Sem memoria para criar a lista");
		exit(1);
	}else{
		
		do{
			opc = menu();
			tratarOpcao(Lista, opc);
			system("pause");
			system("cls");
		}while(opc);
	}

	
} // fim do programa

//Função para Exibir um menu de opções ao usuário | int menu();
int menu()
{
	int opc= 0;
	puts("\nEscolha sua Opcao:");
	puts("=========================================");
	printf("1 - Zerar a Lista\n"); 
	printf("2 - Exibir a Lista\n");
	printf("3 - Inserir elemento no INICIO da Lista\n"); 
	printf("4 - Inserir elemento no FIM da Lista\n");
	printf("5 - Excluir elemento do INICIO da Lista\n"); 
	printf("6 - Excluir elemento do FIM da Lista\n");
	printf("7 - Sair ...\n");
	puts("=========================================\n");
	printf("Opcao: ");scanf("%d", &opc);
	return opc;
}

//Função para Tratar as opções do Menu | void tratarOpcao(No *, int);
void tratarOpcao(No *Lista, int opc)
{
	No *temp; // Nó temporário
	switch(opc)
	{
		case 1: inciarLista(Lista);
				break;
		case 2: exibirLista(Lista);
				break;
		case 3: inserirNoInicio(Lista);
				break;
		case 4: inserirNoFim(Lista);
				break;
		case 5: retirarNoInicio(Lista);
				break;
		case 6: retirarNoFim(Lista);
				break;
		case 7: exit(0);
		
		default:
				puts("Opcao Invalida - Verifique!!!");
				break;
		
	}// fim do switch
}

//Função para inciar a lista | void inciarLista(No *);
void inciarLista(No *Lista)
{
	Lista->prox = NULL;
	tamanho = 0;
}

//Função que testa se a lista está vazia | vazia ( No *)
int vazia ( No *Lista)
{
	if(Lista->prox == NULL && tamanho == 0)
		return 1; // A lista está vazia
	else
		return 0; // Não está vazia
}

//Função para alocar alocar a quantidade de memória para armazenar um nó | alocaMemoria()

No *alocaMemoria()
{
	No *novo = (No *) malloc(sizeof(No));
	if(!novo) // Caso não seja possivel alocar em memoria ( sem armazenamento )
	{
		puts("Sem Memoria disponivel para criar um novo No !!!");
		exit(1);
	}
	else 
	{
		printf("Nome: "); scanf("%s", &novo->nome);
		printf("Idade: "); scanf("%d",&novo->idade);
		return novo;
	}
}

//Função para inserir um elemento no final da lista
void inserirNoFim(No *Lista)
{
	No *novo = alocaMemoria();
	novo->prox = NULL;
	
	if(vazia(Lista))
	{
		Lista->prox = novo; //Cria um novo nó		
	}else
	{
		No *tmp = Lista->prox;
		while(tmp->prox != NULL)
		{ 
			tmp = tmp->prox;
		}//fim do while
		
		tmp->prox = novo;
	}
	tamanho++;
	puts("Elemento inserido com sucesso!");
}//fim da função

//Função para retirar um elemeno do fim da lista
No *retirarNoFim(No *Lista){
	if(Lista->prox == NULL)
	{
		puts("\nLista ja esta vazia");
		return NULL;	
	}else
	{
		No *ultimo = Lista->prox, *penultimo = Lista;
		while(ultimo->prox != NULL)
		{
			penultimo = ultimo->prox;
		}//fim do while
		penultimo->prox = NULL;
		tamanho--;
		return ultimo;
	}
}//Fim da função

//Função para inserie nó no inicio da lista
void inserirNoInicio(No *Lista){
	No *novo = alocaMemoria();
	No *head = Lista->prox;
	
	Lista->prox = novo;
	novo->prox = head;
	puts("\nElemento inserido no inicio da lista com sucesso!");
	tamanho++;
	
}//Fim da função

//Função para retirar um nó do inicio da fila
No *retirarNoInicio(No *Lista){
	if(Lista->prox == NULL){
		puts("A lista esta vazia!");
		return NULL;
	}else{
		No *tmp = Lista->prox;
		Lista->prox = tmp->prox;
		tamanho--;
		return tmp;
	}
}//fim da função

//função para exibir todo o conteudo da lista

void exibirLista(No *Lista){
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//Cor original
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	
	//Salvar os atributos e cores
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes; //Salva a cor original
	if(vazia(Lista)){
		puts("\nLista vazia");
		return;
	}else{
		No *temp = Lista->prox;
		printf("\nLista : \n");
			while(temp != NULL){
				printf("%s | ",temp->nome);
				printf("%d", temp->idade);
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);//Define a cor do texto
				printf(" ==>\n");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				
				
				temp = temp->prox;
			}//fim do while
		printf("NULL\n\n");
	}
		
}//fim da função