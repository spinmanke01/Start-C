#include <stdio.h>

int main(){
    /* 
    > Leitura de dados em arquivos
          .fscanf
          .fgets
    > Escrita de dados em arquivos
          .fprintf
          .fputs
Especificadores
%d: Imprime um inteiro no formato decimal
%i: Equivalente a %d
%f: Imprime um nmr de ponto flutuante no formato padrão
%e: Imprime um nmr de ponto flutuante no formato de notação científica
%c: Imprime um único carácter
%s: Imprime um String
    */
 int age;
 float height;
 float weight;
 char caracter;
 char name[20];

//printf("A idade do %s é: %i\n", name, age);
//printf("A altura é: %.2f\n", height);
//printf("a opção é: %c\n", option);

 // sintaxe scanf
 // scanf("formato 1", "formato 2", &variável1, variável 2....);

 printf("Digite a sua idade: ");
 scanf("%d", &age);
    printf("Digite a sua altura: ");
      scanf("%f", &height);
         printf("Digite seu peso: ");
           scanf("%f", &weight);
                printf("Digite seu nome: ");
                   scanf("%s", name);
                      printf("Digite um Caractér: ");
                         scanf(" %c", &caracter);

 printf("O seu nome é: %s\n", name);
 printf("A sua altura é: %f\n", height);
 printf("A sua idade é %d\n", age);
 printf("O seu peso é: %f\n", weight);
 printf("O seu carácter é: %c\n", caracter);

}
