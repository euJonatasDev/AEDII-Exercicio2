#include "GestaoFornecedores.h"

GestaoFornecedores *criaGestaoFornecedores(int numMaxFornec) {
  return malloc(numMaxFornec * sizeof(GestaoFornecedores));
}

GestaoFornecedores *iniciaGestaoFornecedores(GestaoFornecedores * gestaoFornecedores, unsigned int numFornec) {
  gestaoFornecedores->fornecedor = malloc(numFornec * sizeof(Fornecedor));

  return gestaoFornecedores;
}

unsigned int consultaNumFornec(GestaoFornecedores *gestaoFornecedores) {
  return gestaoFornecedores->numFornecedores;
}