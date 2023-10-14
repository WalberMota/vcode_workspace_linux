### Alternatica no ambiente Linux ao  system("pause") do windows. ###

(nível intermediário)

Método:

                getchar();
                scanf("c\n");

O programa aguarda uma entrado do usuário <b> linha 12</b>, no caso de ser introduzido um valor negativo, emite uma mensagem de valor inválido e aguarda o usúario teclar {ENTER} para uma nova entrada.

Explicando a linha 18: `scanf("%*[^\n]%*c")`:

`%*[^\n]`verifica tudo até encontrar o  `\n`, mas não verifica o `\n`. O asterisco `*` diz para descartar tudo o que foi verificado.

`%*c` verifica um único caractere, que será o que `\n` sobrou `%*[^\n]` neste caso. O asterisco instrui `scanf` a descartar o caractere digitalizado.

 `%[` e `%c` são especificadores de formato.

Vide:   <https://cplusplus.com/reference/cstdio/scanf/>
