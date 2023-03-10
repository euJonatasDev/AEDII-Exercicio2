#include "GestaoFornecedores.h"

GestaoFornecedores * criaGestaoFornecedores(int numMaxFornec) {
  return malloc(numMaxFornec * sizeof(GestaoFornecedores));
}

GestaoFornecedores * iniciaGestaoFornecedores(unsigned int numFornecedores, unsigned int numMaxFornec) {
  GestaoFornecedores * gestaoFornecedores = criaGestaoFornecedores(numMaxFornec);
  gestaoFornecedores->fornecedor = malloc(sizeof(gestaoFornecedores->fornecedor));
  gestaoFornecedores->numFornecedores = numFornecedores;
  gestaoFornecedores->numMaxFornec = numMaxFornec;

  return gestaoFornecedores;
}

unsigned int consultaNumFornec(GestaoFornecedores * gestaoFornecedores) {
  return gestaoFornecedores->numFornecedores;
}