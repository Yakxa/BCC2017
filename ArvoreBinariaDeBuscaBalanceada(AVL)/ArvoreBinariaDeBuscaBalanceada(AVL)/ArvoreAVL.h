#pragma once
#include <iostream>
#include "No.h"

class ArvoreAVL
{
public:
	ArvoreAVL();
	~ArvoreAVL();


	//Metodos a serem implementados:
	void insere_elemento(ArvoreAVL, Elemento);

	int remove_elemento(ArvoreAVL, Elemento);

	bool existe_elemento(No AVL, Elemento);  // verifica se um elemento existe na árvore

	std::string imprime_preordem(No AVL); // imprime os elementos da árvore em preordem

	std::string(No AVL); // imprime os elementos da árvore em inordem

	std::string(No AVL); // imprime os elementos da árvore em posordem

	int altura(No AVL); // retorna a altura da árvore.
};
