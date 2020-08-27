#include<stdio.h>
#define N 2
#define M 2
void CARGA(int [][M], int TAM);
void IMPRESION(int [][M], int TAM);
int main()
{
	int MATRIZ[N][M];
	int I,J;
	/*INGRESO DE VALORES*/
	CARGA(MATRIZ,N);
	/*IMPRESIÓN DE VALORES CARGADOS*/
	printf("Matriz ingresada\n");
	IMPRESION(MATRIZ,N);
	return 0;
}
void CARGA(int MAT[][M], int TAM) //Se transfiere el valor de "filas", ya que al transferir la
{                                 //matriz, se transfieren los valores de las dimensiones pero
	int I,J;                      //no el valor de las "filas".
	for(I=0;I<TAM;I++){
		for(J=0;J<TAM;J++){
		printf("Ingrese el elemento %d-%d: ",I,J); scanf("%d",&MAT[I][J]);
		}
	}
}
void IMPRESION(int MAT[][M], int TAM)
{
	int I,J;
	for(I=0;I<N;I++){
		printf("\n\n");
		for(J=0;J<TAM;J++){	
			printf("%d\t",MAT[I][J]);
		}
	}
}
