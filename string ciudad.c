#include<stdio.h>
int main()
{
	int i;
	char ciudad[5][18];
	printf("\tIngrese los nombres de 5 ciudades\n\n");
	for(i=0;i<5;i++){
	  fflush(stdin);
	  printf("Ciudad numero %d: ",i+1);
	  gets(ciudad[i]);
	}
	  
	/*Impresion*/
	for(i=0;i<5;i++){
		printf("\n%s",ciudad[i]);
	}
	printf("\n\n"); 
	printf("\tFin del programa\n\n");    	  
}
