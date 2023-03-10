#ifndef GESTAOFORNECEDORES_H
#define GESTAOFORNECEDORES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fornecedor.h"

typedef struct gestaoFornecedores {
    Fornecedor * fornecedor;
    unsigned int numFornecedores;
    unsigned int numMaxFornec;
} GestaoFornecedores;

GestaoFornecedores * criaGestaoFornecedores(int numMaxFornec);
GestaoFornecedores * iniciaGestaoFornecedores(unsigned int numFornecedores, unsigned int numMaxFornec);
unsigned int consultaNumFornec(GestaoFornecedores * gestaoFornecedores);

#endif