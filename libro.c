#include<stdio.h>
#include<string.h>
#define MAX 20
#define NUM 10
int main()
{
	char MAT[NUM][MAX];
	int I,POS = -1;
	printf("Ingrese 10 palabras\n\n");
	/*Ingreso*/
	for(I=0;I<NUM;I++){
		printf("Palabra nro %3d: ",I+1);
		gets(MAT[I]);
	}
	char PALABRA[20];
	printf("\nIngrese palabra a buscar: ");
	gets(PALABRA);
	/*Busqueda*/
	for(I=0;(I<NUM)&&(POS==-1);I++){
		if(strcmp(MAT[I],PALABRA)){
			POS = I;
		}
	}
	/*Impresion*/
	printf("Vector de busqueda\n\n");
	for(I=0;I<NUM;I++){
		printf("\n%10d\t%s",I,MAT[I]);
	}
	printf("\n\n");
	if(POS == -1){
		printf("No se encontro la palabra\n\n");
	}
	else{
		printf("%s esta en la poscion %d",PALABRA,POS);
	}
	printf("\n\nFin del programa");
}
