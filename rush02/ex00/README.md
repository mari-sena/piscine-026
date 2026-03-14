# Como rodar o projeto
## Para compilar o projeto:
`make`
## Remover o arquivo *rush-02.out*
`make fclean`
## Executar o programa
`./rush-02 42`
## Utilizar outro dicionário
`./rush-02 numeros.dict 42`
## Comando para testar o numero 42 com o dicionario portugues
`make pt 42`

# O que as funcoes fazem?
## ft_def_args
Preenche a variavel *nb* caso receba 1 parametro e caso recebemos 2 parametros o primeiro sera o nome do arquivo *.dict* e o segundo o numero que deve ser escrito.

- Seu programa pode receber até 2 argumentos:
    - Se houver apenas um argumento, ele é o número que você precisa converter.
    - Se houver dois argumentos, o primeiro argumento é o novo dicionário de referência e o segundo argumento é o número que você precisa converter.

## ft_strlen
Conta quantas caracteres tem dentro da string passada