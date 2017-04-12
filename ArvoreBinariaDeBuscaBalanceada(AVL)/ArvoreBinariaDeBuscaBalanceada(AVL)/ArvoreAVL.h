#pragma once
#include <iostream>
#include "No.h"

class ArvoreAVL
{
public:
	ArvoreAVL();
	~ArvoreAVL();


	//Metodos a serem implementados:
	void insere_elemento(ArvoreAVL, int Elemento);

	int remove_elemento(ArvoreAVL, int Elemento);

	bool existe_elemento(No AVL, int Elemento);  // verifica se um elemento existe na árvore

	std::string imprime_preordem(No AVL); // imprime os elementos da árvore em preordem

	std::string  imprime_inordem(No AVL); // imprime os elementos da árvore em inordem

	std::string imprime_posordem(No AVL); // imprime os elementos da árvore em posordem

	int altura(No AVL); // retorna a altura da árvore.
};
