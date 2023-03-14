#ifndef GESTAOFORNECEDORES_H
#define GESTAOFORNECEDORES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fornecedor.h"

typedef struct gestaoFornecedores {
    Fornecedor *fornecedor;
    int numFornecedores;
    int numMaxFornec;
} GestaoFornecedores;

GestaoFornecedores *criarGestaoFornecedores(int numMaxFornec);
void iniciarGestaoFornecedores(GestaoFornecedores *gestaoFornecedores, Fornecedor *fornecefor);
int consultarNumFornec(GestaoFornecedores *gestaoFornecedores);
int comparaCnpj(Fornecedor *a, Fornecedor *b);
void ordenarFornecedores(GestaoFornecedores *gestaoFornecedores);
void inserirFornecedor(GestaoFornecedores *gestaoFornecedores, Fornecedor *fornecedor);
Fornecedor *retornarFornecedor(Fornecedor *fornecedor, int numFornec, int indice);
void removerFornecedor(Fornecedor *fornecedor, int numFornec, int indice);
int buscarFornecedorCnpj();
int buscarFornecedorRazao();

#endif