#!/usr/local/bin/python3

#better-linear-search.py
#Algoritmos do livro Desmitificando Algoritmos por Thomas H. Cornen
#Algoritmo apresentado na p.13: BETTER-LINEAR-SEARCH

import sys

#Realiza uma busca linear de x em uma lista
#Retorna a posição em que se encontra o elemento ou -1 para não encontrado
def betterLinearSearch(lista, x):
	i = 0
	while i < len(lista):
		if x == lista[i]:
			return i
		i += 1
	return -1
 
#Gera uma lista com os números primos dentro de um intervalo
def geradorDePrimos(inicio, fim):
	primos = []
	nc = 0 #número candidato a primo

	#Tratamento das entradas
	if inicio <= 2:
		primos.append(2)
	if inicio % 2 != 0:
		nc = inicio 
	else:
		nc = inicio + 1

	while nc <= fim:
		div = 3
		while (nc % div != 0) and (div <= nc):
			div += 2
		if div == nc:
			primos.append(nc)
		nc += 2
	return primos

#Início
param = int(sys.argv[1])
print(betterLinearSearch(geradorDePrimos(3, 1000), param))
