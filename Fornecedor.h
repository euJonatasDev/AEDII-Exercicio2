#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Fornecedor
{
    char cnpj[15];
    char razaoSocial[30];
    char nomeFantasia[30];
    char endereco[200];
} Fornecedor;

Fornecedor * criaFornecedorVazio();
Fornecedor * criaFornecedorPreenchido(char cnpj[15], char razaoSocial[30], char nomeFantasia[30], char endereco[200]);
char * getCnpj(Fornecedor * fornecedor);
void setCnpj(Fornecedor * fornecedor, char cnpjFornecedor[15]);
char * getRazaoSocial(Fornecedor * fornecedor);
void setRazaoSocial(Fornecedor * fornecedor, char razaoSocialFornecedor[30]);
char * getNomeFantasia(Fornecedor * fornecedor);
void setNomeFantasia(Fornecedor * fornecedor, char nomeFanstasiaFornecedor[30]);
char * getEndereco(Fornecedor * fornecedor);
void setEndereco(Fornecedor * fornecedor, char enderecoFornecedor[200]);

#endif