# include <stdio.h>
int main ()
{
  int num, flag, i;
  printf ("escreva um numero:");
  scanf ("%d", & num);
  flag= 0;
  for (i=2 ; i<num-1 ; i++) {
      if (num % i == 0)
         flag = 1;
   }
   if (flag == 0) printf("%d é primo\n", num);
   else           printf("%d NÂO é primo\n",num);
}
