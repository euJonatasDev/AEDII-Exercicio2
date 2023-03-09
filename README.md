# AEDII - Exercício 2
Implementem um sistema para o gerenciamento de fornecedores, obedecendo a todas as instruções desse enunciado:

1. Formem grupos de até cinco pessoas. 

2. Cada grupo deverá criar um projeto C no onlinegdb ou replit e enviar o link.

3. Listem os membros do grupo em comentários no topo dos arquivos fonte.

4. Adicionem ao projeto um TAD chamado Fornecedor. Esse TAD contará com um tipo de mesmo nome, contendo os seguintes campos:
* CNPJ
* Razão Social
* Nome Fantasia
* Endereço
O TAD Fornecedor deverá incluir:
* Funções para alocação dinâmica de uma variável do tipo Fornecedor (Tanto vazia, quanto preenchendo todos os campos).
* Funções para manipular os campos do TAD (alterar ou obter valores).

5. Adicione ao seu projeto um TAD chamado GestaoFornecedores. Esse TAD é um dicionário, logo, incluirá operações de inicialização, inserção, pesquisa e remoção. GestaoFornecedores contará com um tipo de mesmo nome, contendo os campos:
* Fornecedores: array alocado dinamicamente para armazenamento de fornecedores. 
* Número de Fornecedores.
* Número Máximo de Fornecedores.
O TAD GestaoFornecedores deverá incluir:
* Função para inicializar os campos (apresenta somente dois parâmetros).
* Função para alocação dinâmica de uma variável do tipo GestaoFornecedores (o número máximo de fornecedores é o único parâmetro dessa função).
* Função para consultar o número de funcionários.
* Função para ordenar fornecedores pelo CNPJ (selecione um método eficiente de ordenação - Shell, Merge, Quick ou Heap Sort).
* Função para inserir um fornecedor.
* Função que retorne, a partir de um índice, um fornecedor (use o endereço dele na memória principal) ou NULL (índice inválido). 
* Função para remover um fornecedor a partir do índice.
* Função para buscar fornecedor pelo CNPJ, usando Pesquisa Binária (retorna o índice do fornecedor, ou -1, caso não encontrado).
* Função para buscar fornecedor pela razão social, usando Pesquisa Sequencial (retorna o índice do fornecedor, ou -1, caso não encontrado).
*** O Exemplo 2 da Aula 5 pode ser usado como inspiração.

6. Escrevam um par de arquivos, cabeçalho e código fonte, para a manipulação de arquivos (texto ou binário) do sistema de gestão de fornecedores (Sugestão de nome: ArquivoFornecedores). Funções a serem abrangidas pelo par de arquivos:
* Função para gravar fornecedores, com origem em uma variável do tipo GestaoFornecedores, em arquivo.
* Função para carregar fornecedores, extraídos de um arquivo, em uma variável do tipo GestaoFornecedores.

7. Em outro par de arquivos, cabeçalho e código fonte, criem funções para entrar ou exibir dados de fornecedores (Sugestão de nome: InterfaceFornecedores). Abordem as seguintes funções:
* Função para preencher os dados de um variável do tipo Fornecedor
* Função para exibir dados de uma variável do tipo Fornecedor
*** Todas essas funções são void e apresentam um único parâmetro.

8. Usando os TADs e Funções descritos anteriormente, escrevam um programa no qual o usuário possa escolher:
* Inserir fornecedores
* Pesquisar fornecedor por CNPJ ou Razão Social. Caso um fornecedor seja encontrado, o  usuário terá a opção de removê-lo ou retornar ao "menu" principal do programa.
* Sair (o usuário decide quando encerrar o programa).

*** Os TADs devem apresentar apenas os campos descritos no enunciado.
*** Não use interações com o usuário nos TADs, nem nas funções de manipulação de arquivos.
*** Vocês podem criar funções fora as descritas no enunciado. Entretanto, explique sua escolha de implementação através de comentários.
