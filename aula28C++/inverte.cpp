/*
	Name: inverte.cpp
	Author: Daniel Figueredo 
	Date: 08/06/26 11:31
	Description: 
*/

#include <stdio.h>
void inverter(int );
int main(){
	int n =0;
	printf("Digite o numero: ");
	scanf("%d",&n);
	inverter(n);
	
}

void inverter(int n)
{
	if(n < 0){
		return;
	}
	
	printf("%d",n);
	inverter(n-1);
}
