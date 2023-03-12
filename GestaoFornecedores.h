#ifndef GESTAOFORNECEDORES_H
#define GESTAOFORNECEDORES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fornecedor.h"

typedef struct gestaoFornecedores {
    Fornecedor *fornecedor;
    unsigned int numFornecedores;
    unsigned int numMaxFornec;
} GestaoFornecedores;

GestaoFornecedores *criaGestaoFornecedores(int numMaxFornec);
GestaoFornecedores *iniciaGestaoFornecedores(GestaoFornecedores *gestaoFornecedores, unsigned int numFornec);
unsigned int consultaNumFornec(GestaoFornecedores *gestaoFornecedores);
void ordenarFornecedores();
void inserirFornecedor();
Fornecedor *retornarFornecedor();
int removerFornecedor();
int buscarFornecedorCnpj();
int buscarFornecedorRazao();

#endif