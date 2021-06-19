# 42-Basecamp-2021
All codes produced in 42 Basecamp 2021

# Resuão das instruções
CTRL + ALT + H Para adicionar cabeçalho  
F2 no vim
## hora da vila
- diário
- 45min
## Check-in de vila
- todas as segundas
- 70min

## Avaliações
- O estudante pode argumentar e refazer o código, desde que seja em um tempo razoavel
- Se não puder explicas o código é -42
- Se exercício mais facil não estiver correto, não avaliar exercícios mais dificeis

# Norma - Resumo
Todos os aruivos devel compilar e passar na norma, caso contrario esta errado.
## II.1	Variaveis
- Sufixos
	- struct s_NOME
	- typedef t_NOME
	- union u_NOME
	- enum e_NOME
	- global g_NOME
- Todas as letras minusculas
- Unix Case
	- Apenas letras de 'a' a 'z', underline '_' e numeros
	- Esta regra vale para variaveis, funçoes e nomes de arquivos e pastas
- Proibido usar caracteres fora da tabela ASCII
- Snake Case
	- Letras minusculas
	- Cada palavra separada por underline
- Todas as palavras devem estar em ingles
- Os nomes devem ser nmemonicos e representar sua funçao no codigo
## II.2	Formataçao
- Indentaçao com Tabs com tamanho equivalente a 4 espaços;
- Toda funçao deve ter no maximo 25 linhas sem contar as chaves'{}';
- Cada linha não deve ser maior que 80 colunas, comentários inclusos, e tabs contam não como um caracter, mas como o espaço que ocupam;
- Cada função deve ter uma linha vazia após o fechamento das '{}';
- Uma instrução por linha;
- Linha vazia deve estar vazia: sem tabulações ou espaços;
- Nenhuma linha deve terminar com tabulações ou espaços;
- É proibido ter 2 espaços consecutivos;
- Adicionar nova linha após cada fechamento de chaves '{}';
- A não ser que seja no final da linha, cada virgula e ponto e virgula deve ser seguida;
- Cada operador e operando deve ser separado por um espaço;
- Cada palavra chave do C deve ser seguida de um espaço, exceto tipos de dados;
- Cada variavel deve ser identada na mesma coluna para o seu escopo;
- Ao declarar um ponteiro o asterisco deve estar grudado ao nome da variavel;
- Um declaração de variavel por linha;
- Declaração e inicialização não podem ser feitas na mesma linha, exceto variaveis globais(quando forem permitidas), variaveis estáticas e constantes;

```c
int		g_global;
typedef	struct	s_struct;
{
	char	*my_string;
	int	i;
}		t_struct;
struct		s_other_struct;

int	main (void)
{
	int	i;
	char	c;
	return (i);
}
```
## Functions
```c
int	my_func (int arg1, char arg2, char *arg3)
{
	return (my_val);
}
int	func2 (void)
{
	return ;
}
```
