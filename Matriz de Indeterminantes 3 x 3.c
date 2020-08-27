#include<stdio.h>
int DET(int [][3]);
void CARGAR(int [][4]);
void MOSTRAR(int [][4]);
int main()
{
	int MATRIZ[3][4], DETER[3][3];
	float D[3];
	int DELTA,I,J,Z;
	CARGAR(MATRIZ);
	MOSTRAR(MATRIZ);
	/*Calcula el determinante DELTA*/
	for(I=0;I<3;I++){
		for(J=0;J<3;J++){
			DETER[I][J] = MATRIZ[I][J];
		}
	}
	DELTA = DET(DETER);
	/*Obtiene las 3 soluciones*/
	for(Z=0;Z<3;Z++){
		for(I=0;I<3;I++){
			for(J=0;J<3;J++){
				DETER[I][J] = MATRIZ[I][J];
			}
		}
		for(I=0;I<3;I++){
			DETER[I][Z] = MATRIZ[I][3];
		}
		D[Z] = (float) DET(DETER) / DELTA;
	}
	printf("\n\n\n\n\tSOLUCION\n\n");
	printf("\tX = %8.2f\n\tY = %8.2f\n\tZ = %8.2f",D[0],D[1],D[2]);
}
/*Lee el sistema de ecuaciones*/
void CARGAR(int MAT[][4])
{
	int I,J;
	for(I=0;I<3;I++){
		for(J=0;J<3;J++){
			printf("%d  %d  ",I+1,J+1); scanf("%d",&MAT[I][J]);
		}
		printf("Termino independiente %d ",I+1); scanf("%d",&MAT[I][3]);
	}
}
/*Presenta en pantalla el sistema de ecuaciones*/
void MOSTRAR(int MAT[][4])
{
	int I,J;
	printf("\n");
	for(I=0;I<3;I++){
		printf("\n\n\t");
		printf("%6d X +%6d Y +%6d Z = %6d",MAT[I][0],MAT[I][1],MAT[I][3]);
	}
}
/*Resuelve el determinante de 3 x 3 */
int DET(int M[][3])
{
	int RES,R0,R1,R2;
	R0 = M[0][0] * M[1][1] * M[2][2] - M[1][2] * M[2][1];
	R1 = M[1][0] * M[0][1] * M[2][2] - M[0][2] * M[2][1];
	R0 = M[2][0] * M[0][1] * M[1][2] - M[0][2] * M[1][1];
	RES = R0 - R1 + R2;
	return RES;
}
