#include <stdio.h>
int fatorial (int n){
   int i, prod=1;
     if(n==0)
       return 1;
     else if(n<0)
       return -1;
     for (i=n; i>0; i--)
     {
         prod=prod*i;
     }
       return prod;
   }
    
int main (){
    int num;
    scanf("%d", &num);
    printf("seu fatorial e:%d\n",fatorial(num));
  }
