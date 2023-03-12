#include "GestaoFornecedores.h"

GestaoFornecedores *criarGestaoFornecedores(int numMaxFornec) {
  return malloc(numMaxFornec * sizeof(GestaoFornecedores));
}

GestaoFornecedores *iniciarGestaoFornecedores(GestaoFornecedores * gestaoFornecedores, unsigned int numFornec) {
  gestaoFornecedores->fornecedor = malloc(numFornec * sizeof(Fornecedor));

  return gestaoFornecedores;
}

unsigned int consultaNumFornec(GestaoFornecedores *gestaoFornecedores) {
  return gestaoFornecedores->numFornecedores;
}