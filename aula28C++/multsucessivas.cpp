/*
	Name: multSucessivas.cpp
	Copyright: 
	Author: 
	Date: 08/06/26 10:33
	Description: Programa que faz a mult de 2 numeros inteiros atravez de somas sucessivas com
				um algoritimo recursivo (Multip_rec) (n1,n2)
				
*/
#include <stdio.h>
int multip_rec(int n1, int n2);
int main(){
	int n1 =0;
	int n2 =0;
	printf("Digite n1: "); scanf("%d",&n1);
	printf("Digite n2: "); scanf("%d",&n2);
	printf("%d",multip_rec(n1,n2));
}

int multip_rec(int n1, int n2){

	if(n2 == 0){
		return 0;
	}
	return n1 + multip_rec(n1, n2-1);
	
	
}