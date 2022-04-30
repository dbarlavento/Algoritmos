/*
 * Desmistificando Algoritmos 1 ed. - Thomas Cormen
 * Cap 2.
 * Exemplo: "Procedimento LINEAR-SEARCH(A, n, x) do livro
 * Realiza uma busca linear pela primeira ocorrência de um elemento
 * em uma lista.
 */

 #include <stdio.h>

 int main() 
 {
 	//Lista contendo os 10 primeiros números primos
	int primos[10] = {1, 2, 3, 5, 7, 9, 11, 13, 17, 19};
	int numPrimos = 10;
	int num; //Número a ser buscado
	int i; //indíce de busca

	num = getchar();

	if (num < '0' || num > '9')
		printf("O valor digitado não é número\n");
	else {
		for (i = 0; i < 10; ++i) {
			if(primos[i] == num)
				printf("posição: %d\n", i);
		}
	}

 }//fim de main
