#include <stdio.h>
int main ()
{
char opcao;
do {
printf("escolha uma opcao:\n");
printf("a) 10\n");
printf("b) 20\n");
printf("c) 30\n");
scanf("%c",&opcao);
}while (opcao !='a' &&
       opcao !='b' &&
       opcao !='c');
printf("A opcao escolhida foi:%c \n", opcao);
}
