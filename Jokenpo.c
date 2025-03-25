#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 int chooseplayer, choosecomp;
  srand(time(0));

printf("Jogo de Jokenpo\n");
printf("Escolha um opção: \n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
printf("Escolha: ");
scanf("%d", &chooseplayer);

choosecomp = rand() % 3 + 1;

 switch (chooseplayer)
 {
 case 1:
   printf("Jogador: -- Pedra\n");
    break;
 case 2:
    printf("Jogador: -- Papel\n");
case 3:
    printf("Jogador: -- Tesoura\n");
 break;
 }

 switch (choosecomp)
 {
 case 1:
   printf("Computador: -- Pedra\n");
    break;
 case 2:
    printf("Computador: -- Papel\n");
    break;
case 3:
    printf("Computador: -- Tesoura\n");
 break;
 }

 if (chooseplayer == choosecomp)
 {
    printf("### Empate ###\n");
 } else if ((chooseplayer == 1) && (choosecomp == 3) || 
           (chooseplayer == 2) && (choosecomp == 1) ||
           (chooseplayer == 3) && (choosecomp == 2)) 
 //printf("1. Pedra\n");
//printf("2. Papel\n");
//printf("3. Tesoura\n");
 
 {
    printf("### Parábens, Você Ganhou!! ###");

 } else {
    printf("### Você foi Mogado!! ###");
 }

   return 0;
}