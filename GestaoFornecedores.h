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

GestaoFornecedores *criarGestaoFornecedores(int numMaxFornec);
GestaoFornecedores *iniciarGestaoFornecedores(GestaoFornecedores *gestaoFornecedores, unsigned int numFornec);
unsigned int consultarNumFornec(GestaoFornecedores *gestaoFornecedores);
void ordenarFornecedores();
void inserirFornecedor(GestaoFornecedores *gestaoFornecedores);
Fornecedor *retornarFornecedor();
int removerFornecedor();
int buscarFornecedorCnpj();
int buscarFornecedorRazao();

#endif