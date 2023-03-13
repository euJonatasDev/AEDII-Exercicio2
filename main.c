#include <stdio.h>
#include "Fornecedor.h"
#include "GestaoFornecedores.h"
#include "ArquivoFornecedores.h"
#include "InterfaceFornecedores.h"

int main(void) {
  GestaoFornecedores *gf = criarGestaoFornecedores(5);
  iniciarGestaoFornecedores(gf, 5);
  printf("%d\n", consultarNumFornec(gf));
  return 0;
}