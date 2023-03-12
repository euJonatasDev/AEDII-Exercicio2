#include "GestaoFornecedores.h"

//Função para alocação dinâmica de uma variável do tipo GestaoFornecedores.
GestaoFornecedores *criarGestaoFornecedores(int numMaxFornec) {
  return malloc(numMaxFornec * sizeof(GestaoFornecedores));
}

//Função para inicializar os campos.
void iniciarGestaoFornecedores(GestaoFornecedores *gestaoFornecedores, int numFornecedores) {
  Fornecedor *f = NULL;
  for(int i = 0; i < numFornecedores; i++) {
    gestaoFornecedores->fornecedor[i] = *f;
  }
  gestaoFornecedores->numFornecedores = 0;
  gestaoFornecedores->numMaxFornec = 0;
}

//Função para consultar o número de fornecedores.
int consultarNumFornec(GestaoFornecedores *gestaoFornecedores) {
  return gestaoFornecedores->numFornecedores;
}

//Função para ordenar fornecedores pelo CNPJ com Shellsort.
void ordenarFornecedores(GestaoFornecedores *gestaoFornecedores) {
  
}