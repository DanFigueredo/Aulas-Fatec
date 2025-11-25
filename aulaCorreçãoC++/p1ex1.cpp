/*
	Name: p1ex1.cpp
	Author: Daniel Figueredo
	Date: 25/11/25 09:43
	Description: Correção do primeiro exercicio da P1
*/
#include <stdio.h>
int main(){
	float altA, largA, altP, largP;
	float areaA, areaP = 0.0;
	altA = largA = altP = largP = 0.0;
	int qtdA = 0;
	//Pedi os dados do azulejo (medida em cm)
	printf("Digite a altura do azulejo: "); scanf("%f", &altA);
	printf("Digite a Largura do azulejo: "); scanf("%f",&largA);
	areaA = altA * largA;
	
	//pedir os dados da parede (medida em M)
	printf("Digite a altura da parede: "); scanf("%f", &altP);
	printf("Digite a largura da parede: "); scanf("%f", &largP);
	areaP = (altP*100) * (largP*100);
	
	//Informar quantos azulejos serão necessarios
	// = areaP*10000; //Converter metros pra centimetros
	qtdA = areaP / areaA;
	printf("Para revestir uma parede de %.1f x %.1f", altP, largP);
	printf("\nSerao necessarios %d azulejos", qtdA);
	
	
	
	
}//fim do programa