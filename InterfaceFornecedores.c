#include "InterfaceFornecedores.h"

void preencherDadosFornecedor(Fornecedor *fornecedor) {
  printf("------------------------------------------------\n");
  printf("Preencha os dados do fornecedor:\n\n");
  printf("CNPJ: ");
  fgets(fornecedor->cnpj, 15, stdin);
  fornecedor->cnpj[strcspn(fornecedor->cnpj, "\n")] = '\0';
  printf("Razão social: ");
  fgets(fornecedor->razaoSocial, 30, stdin);
  fornecedor->razaoSocial[strcspn(fornecedor->razaoSocial, "\n")] = '\0';
  printf("Nome fantasia: ");
  fgets(fornecedor->nomeFantasia, 30, stdin);
  fornecedor->nomeFantasia[strcspn(fornecedor->nomeFantasia, "\n")] = '\0';
  printf("Endereço: ");
  fgets(fornecedor->endereco, 200, stdin);
  fornecedor->endereco[strcspn(fornecedor->endereco, "\n")] = '\0';
}

void exibirDadosFornecedor(Fornecedor *fornecedor) {
  printf("\n------------------------------------------------\n");
  printf("Dados do fornecedor:\n\n");
  printf("CNPJ: %s\n", getCnpj(fornecedor));
  printf("Razão social: %s\n", getRazaoSocial(fornecedor));
  printf("Nome fantasia: %s\n", getNomeFantasia(fornecedor));
  printf("Endereço: %s\n", getEndereco(fornecedor));
  
}