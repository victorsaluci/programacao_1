# include <stdio.h>

int main ()
{
	char letras;
	scanf("%c", &letras);
	switch (letras)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		 printf("voce digitou uma vogal\n");
		 break;
		default:
		 printf("voce digitou uma consoante\n");
		 
	 }
}
