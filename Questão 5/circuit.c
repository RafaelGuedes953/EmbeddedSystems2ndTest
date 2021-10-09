/*
 * Criado por Rafael Guedes. 2021.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*	Codifique o circuito desenvolvido na 
	questão 1 em linguagem de programação C.*/

int main(){
	int entry;
	bool a, b, x; //a e b são entradas, x é a saída
	
	printf("Digite entrada para A: \n");
	scanf("%d",&entry);
	if(entry==1) a=true; else a=false;
	
	printf("Digite entrada para B: \n");
	scanf("%d",&entry);
	if(entry==1) b=true; else b=false;

	x = !(!((a&&b) || (a||b)));
	
	if(x==true) printf("\n\tTrue"); else printf("\nFalse");
	
	//print("%")
	
	return 0;
}

