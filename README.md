# Questão 1
Construa um circuito com portas lógicas que permitam modificar as saídas quando processadas. O circuito deverá receber como entrada um registrador A e B e a resposta deverá ser armazenada em X. A Saída deverá inverter o resultado do processamento. Após a construção do circuito, codifique-o usando VHDL.


![circuit](https://user-images.githubusercontent.com/50843143/136636452-e031927b-ce8d-40ac-aa8b-ed0e0dab3b03.png)


~~~VHDL
// Questão 01 em vhdl

library iee;
use ieee.std_logic_1164.all;

entity portaNegada is
prot(a,b: in std_logic; 
     x: out std_logic);
end portaNegada;

architecture question of portaNegada is
begin
  x<= not((a and b) nor (a or b));
end question;
~~~

# Questão 2
Codifique o circuito desenvolvido na questão 1 em linguagem de programação Rust.
~~~Rust

~~~


# Questão 5
Codifique o circuito desenvolvido na questão 1 em linguagem de programação C.
~~~C
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
~~~
