#include<stdio.h>
#include<string.h>
void funcion(char c1[]);
int main()
{
	char c1[] = "Si seguis estudiando vas a aprobar el examen.";
	funcion(c1);
	printf("%s\n",c1);
	return 0;
}
void funcion(char c1[])
{
	int i,limite;
	limite = strlen(c1);
	for(i=0;i<limite;i++){
		if(c1[i]=='a'){
			c1[i] = ' ';
		}
	}
}
