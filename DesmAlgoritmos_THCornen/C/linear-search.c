/*
 * Desmistificando Algoritmos 1 ed. - Thomas Cormen
 * Cap 2.
 * Exemplo: "Procedimento LINEAR-SEARCH(A, n, x) do livro
 * Realiza uma busca linear pela primeira ocorrência de um elemento
 * em uma lista.
 */

 #include <stdio.h>

/*
 *	Realiza uma busca linear por um inteiro x num array
 *	lista: array de inteiros onde haverá a busca
 * tamanho: comprimento do array
 * x: inteiro a ser buscado
 * Retorna a posição da última ocorrência de x no array ou
 *	-1 se não encontrar x
 */
int linearSearch(int lista[], int tamanho, int x);

int main() 
{
 	//Lista contendo os 10 primeiros números
	int primos[10] = {'0', '1', '2', '3', '4', '5',
		'6', '7', '8', '9'};
	int numPrimos = 10;
	int num; //Número a ser buscado

	num = getchar();

	if (num < '0' || num > '9')
		printf("O valor digitado não é número\n");
	else {
		printf("posição: %d\n", linearSearch(primos, 10, num));
	}
}//fim de main

int linearSearch(int lista[], int tamanho, int x)
{
	int i, saida;
	saida = -1;
	for (i = 0; i < tamanho; ++i) {
		if (lista[i] == x)
			saida = i;
	}
	return saida;
}//fim de linear-search
