#include<stdio.h>
#define N 5
void ingresar(int C[], char T[], float S[], int TAM);
void ordenar(int C[], char T[], float S[], int TAM);
void imprimir(int C[], char T[], float S[], int TAM);
void acceso(int C[], char T[], float S[], int TAM, int NUM);
int buscar(int C[], int TAM, int NUM);
int main(){
	int I,NUM=0;
	int CUENTA[N];
	char TIPO[N];
	float SALDO[N];
	ingresar(CUENTA,TIPO,SALDO,N);
	ordenar(CUENTA,TIPO,SALDO,N);
	imprimir(CUENTA,TIPO,SALDO,N);
	printf("\n\nNumero de cuenta a consultar: "); scanf("%d",&NUM);
	acceso(CUENTA,TIPO,SALDO,N,NUM);
	return 0;
}
void ingresar(int C[], char T[], float S[], int TAM)
{
	int I;
	for(I=0;I<TAM;I++){
		printf("Numero de cuenta: ",I); scanf("%d",&C[I]);
		fflush(stdin);
		printf("Tipo de cuenta: ",I); scanf("%c",&T[I]);
		fflush(stdin);
		printf("Saldo de la cuenta: ",I); scanf("%f",&S[I]);
	}
}
void imprimir(int C[], char T[], float S[], int TAM)
{
	int I;
	printf("\n\t\t Cuenta \t Tipo \t Saldo\n\n");
	for(I=0;I<TAM;I++){
		printf("\n%25d%14c%20.2f",C[I],T[I],S[I]);
	}
}
void acceso(int C[], char T[], float S[], int TAM, int NUM)
{
	int POS;
	POS = buscar(C,TAM,NUM);
	if(POS<0){
		printf("\n\nNumero de cuenta inexistente\n\n");
	}
	else{
		printf("\n\n\n");
		printf("%25d%14c%20.2f",C[POS],T[POS],S[POS]);
	}
}
int buscar(int C[], int TAM, int NUM)
{
	int I;
	for(I=0;I<TAM;I++){
		if(C[I]==NUM){
			return I;
		}
	}
	return -1;
}
void ordenar(int C[], char T[], float S[], int TAM)
{
	int I,J;
	int AUXINT;
	char AUXCHAR;
	float AUXFLOAT;
	for(I=0;I<TAM;I++){
		for(J=I;J<TAM;J++){
			if(C[I]>C[J]){
				AUXINT = C[I];
				C[I] = C[J];
				C[J] = AUXINT;
				AUXCHAR = T[I];
				T[I] = T[J];
				T[J] = AUXCHAR;
				AUXFLOAT = S[I];
				S[I] = S[J];
				S[J] = AUXFLOAT;
			}
		}
	}
}
