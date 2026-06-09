/*
	Name: 
	Author: Daniel Figueredo
	Date: 25/05/26 10:14
	Description: 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *arquivo = fopen("informacoes.txt","w");
	if(arquivo == NULL){
		puts("Erro ao Abrir o Arquivo para escrita!");
		exit(0);
	}
	char pessoas[3][100];
	float alturas[3];
	float pesos[3];
	int i =0;
	float imcs[3];
	for(i =0; i < 3; i++)
	{
		printf("\nDigite seu nome: ");
		scanf("%s", pessoas[i]);
		
		printf("\nDigite sua altura: ");
		scanf("%f", &alturas[i]);
		
		printf("\nDigite seu peso: ");
		scanf("%f",&pesos[i]);
		
		imcs[i] = pesos[i]/(alturas[i]*alturas[i]);
	}
	
	fprintf(arquivo,"Pessoas Analisadas: ");
	for(i =0; i < 3; i ++){
		fprintf(arquivo,"\nNome: %s", pessoas[i]);
		fprintf(arquivo,"\nAltura: %.2f", alturas[i]);
		fprintf(arquivo,"\nPeso: %.2f", pesos[i]);
		fprintf(arquivo,"\nIMC: %.2f", imcs[i]);
		if(imcs[i] < 18.5){
			fprintf(arquivo,"\nClassificacao: Abaixo do peso\n");
		}else if(imcs[i] <= 24.9){
			fprintf(arquivo,"\nClassificacao: Normal\n");
		}else if(imcs[i] <= 29.9){
			fprintf(arquivo,"\nClassificacao: Sobrepeso\n");
		}else if(imcs[i] <= 39.9){
			fprintf(arquivo,"Classificacao: Obesidade\n");
		}else{
			fprintf(arquivo,"Classificacao: Obesidade grave\n");
		}	
	}
	puts("Arquivo Atualizado com sucesso !!");
	fclose(arquivo);
}