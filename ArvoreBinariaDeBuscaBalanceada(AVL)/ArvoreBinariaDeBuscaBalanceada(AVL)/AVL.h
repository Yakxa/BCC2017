#pragma once
#include <iostream>
#include "No.h"
class AVL
{
public:
	AVL();
	~AVL();


	//Metodos a serem implementados:
	void insere_elemento(ArvoreAVL, Elemento);

	int remove_elemento(ArvoreAVL, Elemento);

	bool existe_elemento(No AVL, Elemento);  // verifica se um elemento existe na �rvore

	std::string imprime_preordem(No AVL); // imprime os elementos da �rvore em preordem

	std::string (No AVL); // imprime os elementos da �rvore em inordem

	std::string (No AVL); // imprime os elementos da �rvore em posordem

	int altura(No AVL); // retorna a altura da �rvore.
};

