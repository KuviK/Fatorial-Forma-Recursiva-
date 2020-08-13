#include <stdio.h>
#include <stdlib.h>

/* Função: aplicação que solicita um numero ao utilizador e apresenta o fatorial desse numero, utilizando uma sub-rotina de forma recursiva;
   Autor:  Luís Filipe */

// declaração de subrotinas
int fatorial(int numero);

int main(int argc, char *argv[]) {
		
	//Variaveis	
	int numero;
	
	//Solicitar o numero a ser fatorizado
	printf("Introduza o numero: ");
	scanf("%d", &numero);
	
	//Apresentação do fatorial
	printf("O fatorial e: %d", fatorial(numero));
	
	//pausa
	getchar();
	
}



/*
	Esta função calcula o fatorial do numero
*/
int fatorial(int numero)
{
	//Declaração variaveis (locais)
	int fatorial;
	
	//Inicializar Variavel
	fatorial = 1; 
	
	//Calcular fatorial do numero
	if ( numero < 1)
	  	return 0;
	else
	{
		while (numero > 1)
			 {
	    		fatorial = fatorial * numero;   
	    		numero = numero - 1;                    
	  		}
	}
	
	//Retornar valor do fatorial
	return fatorial;
}
