/*
	Name: LIFO.cpp
	Author: Daniel Figueredo
	Date: 25/08/26 11:24
	Description: 
*/

#include <stdio.h>
#include <windows.h>
//prototipation

void push(int );
int pop();
int isFull();
int isEmpty();
void showLIFO();
void menu();

int topo = -1;
int tam = 5;
int stack[5];

int main(){
	
	while(1){
		menu();
	}
	
	
}//end 

void menu(){
	
	int opt = -1;
	while(1){
		puts("1 - Push\n2 - Pop\n3 - Show LIFO\n4 - Exit");
		printf("Choose any option: "); scanf("%d",&opt);
		if(opt > 4 || opt < 1 ){
			puts("Invalid Option");
			continue;
		}
		switch(opt)
		{
			case 1: int elem; printf("Wich number do you want add? "); scanf("%d", &elem); push(elem); 
			break;
			
			case 2: pop(); break;
			
			case 3: showLIFO(); break;
			
			case 4: exit('0');
			
		}//fim do switch
	}//fim do while	
}

void push(int elem){
	if(isFull() == 1){
		puts("\nStack overflow\n");
		
	}else{
		topo++;
		stack[topo] = elem;
		printf("\nThe number %d was added to the stack\n", elem);
	}
}

int pop(){
	if(isEmpty() == 1){
		puts("\nThe stack is empty\n");
	}else{
		int element;
		element = stack[topo];	
		topo--;
		printf("\nThe number %d was removed to the stack\n",element);
		return element;
	}
}

int isFull(){
	if(topo == tam - 1){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(){
	
	if(topo == -1){
		return 1;
	}else{
		return 0;
	}
}

void showLIFO(){
	
	if(isEmpty() == 1){
		puts("\nThe stack is empty!!");
	}
	int i;
	for(i = topo; i >= 0; i--){
		printf("\n[%d]\n", stack[i]);
	}
	
}