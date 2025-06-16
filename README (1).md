
# Super Trunfo de Cidades

## Introdução

Este projeto é uma implementação em linguagem C do sistema inicial de cadastro de cartas para o jogo Super Trunfo com o tema "Cidades". O programa permite registrar cartas com informações detalhadas das cidades, como estado, código, nome, população, PIB, área e número de pontos turísticos.

Além disso, calcula propriedades derivadas importantes para o jogo, como densidade populacional e PIB per capita, enriquecendo as cartas com dados estratégicos para as disputas.

## Objetivos

- Criar um programa em C para cadastrar cartas do jogo Super Trunfo de Cidades.  
- Utilizar variáveis, operadores matemáticos, relacionais e modificadores de tipo para aprimorar funcionalidades.  
- Calcular e exibir propriedades derivadas: densidade populacional e PIB per capita.  
- Permitir entrada e saída de dados pelo usuário de forma clara e organizada.  

## Estrutura do Projeto

```
/super-trunfo-cidades
│
├── src/                 # Código fonte do projeto
│   └── main.c           # Arquivo principal com a implementação
│
├── docs/                # Documentação adicional (se houver)
│
├── README.md            # Este arquivo
│
└── .gitignore           # Arquivos a serem ignorados pelo Git
```

## Como Compilar e Executar

### Requisitos

- GCC (Compilador C) instalado no seu sistema.  
- Terminal ou prompt de comando.

### Passos

1. Abra o terminal na pasta onde está o arquivo `main.c` (ex: dentro da pasta `src/`).  
2. Compile o programa com o comando:

```bash
gcc main.c -o supertrunfo
```

3. Execute o programa:

```bash
./supertrunfo
```

> No Windows, o comando de execução será:

```bash
supertrunfo.exe
```

## Exemplo de Uso

O programa solicitará os dados de cada carta, por exemplo:

```
Digite o estado: São Paulo
Digite o código da cidade: 3550308
Digite o nome da cidade: São Paulo
Digite a população: 12300000
Digite o PIB (em bilhões): 700
Digite a área (em km²): 1521
Digite o número de pontos turísticos: 50
```

Após a entrada, o programa exibirá as informações da carta cadastrada, incluindo a densidade populacional e o PIB per capita calculados automaticamente.

## Requisitos Implementados

- Cadastro completo das cartas com todos os campos exigidos.  
- Cálculo da densidade populacional (população/área).  
- Cálculo do PIB per capita (PIB/população).  
- Uso de operadores matemáticos e relacionais para cálculos e possíveis comparações no jogo.  
- Entrada e saída de dados via teclado e terminal.  
- Estruturação do código utilizando `struct` para representar as cartas.

## Próximos Passos (Opcional)

- Implementar lógica de comparação entre cartas para definir o vencedor da rodada.  
- Adicionar interface gráfica simples ou menu interativo.  
- Salvar e carregar cartas de arquivos para persistência dos dados.

## Contato

Desenvolvido por Caio Mateus Dos Santos Dias.
