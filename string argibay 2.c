#include<stdio.h>
#include<string.h>
#define N 10
#define M 20
int main()
{
	char MAT[N][M];
	char P[30];
	int I, POS = -1;
	printf("\tIngrese 10 palabras\n");
	for(I=0;I<N;I++){
		printf("Pañabra numero %d: ",I+1);
		gets(MAT[I]);
	}
	printf("\n\tIngrese la palabra a buscar: ");
	gets(P);
	for(I=0;(I<N)&&(I==-1);I++){
		if(strcmp(MAT[I],P)){
			POS = I;
		}
	}
	if(POS==-1){
		printf("\n\tEsa palabra no fue ingresada o algo fallo");
	}
	else{
		printf("La palabra %s esta en la posicion %d\n\n",MAT[POS],POS);
	}
}
