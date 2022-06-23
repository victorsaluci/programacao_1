#include <stdio.h>
int main ()
{
int div;
printf("os divisores de 3 e por 2 sao:\n");
div=0;
while (div<=40)
{
div+=2;
if (div % 3 ==0)
 printf ("os divisores de 3 sao:%d\n", div);
 }
}
