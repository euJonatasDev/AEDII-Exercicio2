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
void iniciarGestaoFornecedores(GestaoFornecedores *gestaoFornecedores, int numFornecedores);
int consultarNumFornec(GestaoFornecedores *gestaoFornecedores);
void ordenarFornecedores(GestaoFornecedores *gestaoFornecedores);
void inserirFornecedor(GestaoFornecedores *gestaoFornecedores);
Fornecedor *retornarFornecedor();
void removerFornecedor();
int buscarFornecedorCnpj();
int buscarFornecedorRazao();

#endif