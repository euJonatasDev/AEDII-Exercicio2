#include "GestaoFornecedores.h"

//Função para alocação dinâmica de uma variável do tipo GestaoFornecedores.
GestaoFornecedores *criarGestaoFornecedores(int numMaxFornec) {
  GestaoFornecedores *gestaoFornecedores = malloc(sizeof(GestaoFornecedores));
  gestaoFornecedores->fornecedor = malloc(numMaxFornec * sizeof(Fornecedor));
  gestaoFornecedores->numMaxFornec = numMaxFornec;
  
  return gestaoFornecedores;
}

//Função para inicializar os campos.
void iniciarGestaoFornecedores(GestaoFornecedores *gestaoFornecedores, int numFornecedores) {
  Fornecedor fornecedor;
  for(int i = 0; i < numFornecedores; i++) {
    gestaoFornecedores->fornecedor[i] = fornecedor; 
  }
  gestaoFornecedores->numFornecedores = numFornecedores;
  gestaoFornecedores->numMaxFornec = gestaoFornecedores->numMaxFornec;
}

//Função para consultar o número de fornecedores.
int consultarNumFornec(GestaoFornecedores *gestaoFornecedores) {
  return gestaoFornecedores->numFornecedores;
}

//Função para ordenar fornecedores pelo CNPJ com Shellsort.
void ordenarFornecedores(GestaoFornecedores *gestaoFornecedores) {
  
}

//Função para inserir um fornecedor.
void inserirFornecedor(GestaoFornecedores *gestaoFornecedores, Fornecedor *fornecedor) {
  
}