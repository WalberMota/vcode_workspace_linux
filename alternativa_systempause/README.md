### Alternatica no ambiente Linux ao  system("pause") do windows.
#### Método:

                getchar();
                scanf("c\n");

O programa aguarda uma entrado do usuário <b> liinha 12</b>, no caso de ser introduzido um valor negativo, emite uma mensagem de valor inválido e aguarda o usúario teclar {ENTER} para uma nova entrada.

Explicando a <b>linha 18</b>:  scanf("%*[^\n]%*c"):

<b>%*[^\n]</b> verifica tudo até encontrar o  <b>\n</b>, mas não verifica o <b>\n</n>. O asterisco __( \*)__ diz para descartar tudo o que foi verificado.

**`%*c`** verifica um único caractere, que será o que __`\n`__ sobrou `%*[^\n]`` neste caso. O asterisco instrui scanf a descartar o caractere digitalizado.

 <b>%[</b> e <b>%c </b>>são especificadores de formato.

Vide: 
 <https://cplusplus.com/reference/cstdio/scanf/>
