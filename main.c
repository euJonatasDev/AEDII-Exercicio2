#include <stdio.h>
#include "Fornecedor.h"
#include "GestaoFornecedores.h"
#include "ArquivoFornecedores.h"
#include "InterfaceFornecedores.h"

int main(void) {
  //Fornecedor *fornecedor = criarFornecedorVazio();

  //preencherDadosFornecedor(fornecedor);
  //exibirDadosFornecedor(fornecedor);

  GestaoFornecedores *gf = criarGestaoFornecedores(5);
  printf("%d\n", consultarNumFornec(gf));
  
  
  
  return 0;
}