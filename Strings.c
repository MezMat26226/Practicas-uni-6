#include<stdio.h>
int main()
{
	char vector[13]; //Los espacios tambien cuentan como "letras"
	printf("Introduce una frase: ");
	fgets(vector,13,stdin);             //scanf es limitado, gets no comprueba el entorno
	printf("%s\n\n",vector);            //fgets es el indicado, porque no sobreescribira datos
	return 0;                           //en donde no le corresponde
}
