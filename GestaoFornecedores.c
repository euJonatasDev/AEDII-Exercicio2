#include "GestaoFornecedores.h"

//Função para alocação dinâmica de uma variável do tipo GestaoFornecedores.
GestaoFornecedores *criarGestaoFornecedores(int numMaxFornec) {
  GestaoFornecedores *gestaoFornecedores = malloc(sizeof(GestaoFornecedores));
  if(gestaoFornecedores == NULL) {
    return NULL;
  } else {
    gestaoFornecedores->fornecedor = malloc(numMaxFornec * sizeof(Fornecedor));
    gestaoFornecedores->numMaxFornec = numMaxFornec;
  }
  return gestaoFornecedores;
}

//Função para inicializar os campos.
void iniciarGestaoFornecedores(GestaoFornecedores *gestaoFornecedores, Fornecedor *fornecefor) {
  gestaoFornecedores->fornecedor = fornecefor;
  gestaoFornecedores->numFornecedores = 0;
  gestaoFornecedores->numMaxFornec = gestaoFornecedores->numMaxFornec;
}

//Função para consultar o número de fornecedores.
int consultarNumFornec(GestaoFornecedores *gestaoFornecedores) {
  return gestaoFornecedores->numFornecedores;
}

//Função para comparar 
int comparaCnpj(Fornecedor *a, Fornecedor *b);
//Função para ordenar fornecedores pelo CNPJ com Quick Sort.
void ordenarFornecedores(GestaoFornecedores *gestaoFornecedores) {
  
}

//Função para inserir um fornecedor.
void inserirFornecedor(GestaoFornecedores *gestaoFornecedores, Fornecedor *fornecedor) {
  
}

Fornecedor *retornarFornecedor(Fornecedor *fornecedor, int numFornec, int indice) {
  for(int i = 0; i < numFornec; i++) {
    if(indice == i) {
      return &fornecedor[i];
    }
    return NULL;
}

void removerFornecedor(Fornecedor *fornecedor, int numFornec, int indice) {
  for(int i = 0; i < numFornec; i++) {
    if(indice == i) {
      free(fornecedor[i]);
    }
  }
}