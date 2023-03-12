#include <stdio.h>
#include "Fornecedor.h"
#include "GestaoFornecedores.h"

int main(void) {
  Fornecedor fornecedor;
  char cnpj[15] = "12837772";
  setCnpj(&fornecedor, cnpj);
  printf("%s\n", getCnpj(&fornecedor));
  
  return 0;
}