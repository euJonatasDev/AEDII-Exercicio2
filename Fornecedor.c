#include "Fornecedor.h"

Fornecedor *criarFornecedorVazio() {
    return malloc(sizeof(Fornecedor));
}

Fornecedor *criarFornecedor(char cnpj[], char razaoSocial[], char nomeFantasia[], char endereco[]) {

    Fornecedor *fornecedor = criarFornecedorVazio();
    setCnpj(fornecedor, cnpj);
    setRazaoSocial(fornecedor, razaoSocial);
    setNomeFantasia(fornecedor, nomeFantasia);
    setEndereco(fornecedor, endereco);

    return fornecedor;
}

char *getCnpj(Fornecedor *fornecedor) {
    return fornecedor->cnpj;
}

void setCnpj(Fornecedor *fornecedor, char cnpjFornecedor[15]) {
    strcpy(fornecedor->cnpj, cnpjFornecedor);
}

char *getRazaoSocial(Fornecedor * fornecedor) {
    return fornecedor->razaoSocial;
}

void setRazaoSocial(Fornecedor *fornecedor, char razaoSocialFornecedor[30]) {
    strcpy(fornecedor->cnpj, razaoSocialFornecedor);
}

char *getNomeFantasia(Fornecedor * fornecedor) {
    return fornecedor->nomeFantasia;
}

void setNomeFantasia(Fornecedor *fornecedor, char nomeFanstasiaFornecedor[30]) {
    strcpy(fornecedor->nomeFantasia, nomeFanstasiaFornecedor);
}

char *getEndereco(Fornecedor *fornecedor) {
    return fornecedor->endereco;
}

void setEndereco(Fornecedor *fornecedor, char enderecoFornecedor[200]) {
    strcpy(fornecedor->cnpj, enderecoFornecedor);
}