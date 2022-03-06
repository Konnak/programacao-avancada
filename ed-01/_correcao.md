# Correção

-  A implementação dos métodos da classe relógio devem ficar no arquivo relogio.cpp. O arquivo main.cpp deve conter apenas a função main(). 

- Corrigir a seguinte linha no arquivo `main.cpp`: 

```cpp
    relogio r3(05,50);
```

Literais começados com 0 estão em base octal. Só utilizamos base octal se estivermos trabalhando com valores nesta base, caso contrário, podemos ter erros inesperados. Por exemplo, 012 != 12.

- Começar nomes de classes com letra maiúscula para facilitar a leitura do código. Por exemplo:

```cpp
	// É mais fácil ler
	Relogio *relogio = new Relogio();
	// Do que que
	relogio *relogio = new relogio(); // nome da variável se confunde com o nome do tipo
```

- Atenção para padronização de código: 

    - Para comandos seguidos por `(`, como if, for, while, etc., devemos colocar um espaço entre o nome do comando e o `(`.
		- Mesmo que o comando possua apenas uma instrução, devemos utilizar os `{}` para facilitar a leitura do código.
		- O código dentro do bloco deve estar indentado.
		- Se estamos com C++, devemos usar `cout` e não `printf`.

```cpp
		// Como está
    if(hora <= 23){
    _hora = hora;
    } else printf("Hora inválida!");

		// Como deve ficar
    if (hora <= 23) {
        _hora = hora;
    } else {
        printf("Hora inválida!")
    } 
```

- Colocar o nome no README.md

