#include<stdio.h>
void ingresar(int C[], char T[], float S[], int N);
void ordenar(int C[], char T[], float S[], int N);
void imprimir (int C[], char T[], float S[], int N);
void acceso(int C[], char T[], float S[], int N, int NUM);
int busqueda(int C[], int N, int NUM);
int main()
{
	int I,N,NUM;
	printf("Ingrese el total de cuentas a guardar: "); scanf("%d",&N);
	int CUENTA[N];
	char TIPO[N];
	float SALDO[N];
	ingresar(CUENTA,TIPO,SALDO,N);
	ordenar(CUENTA,TIPO,SALDO,N);
	imprimir(CUENTA,TIPO,SALDO,N);
	printf("Ingrese el numero de cuenta a consultar: "); scanf("%d",&NUM);
	acceso(CUENTA,TIPO,SALDO,N,NUM);
	return 0;
}
void ingresar(int C[], char T[], float S[], int N)
{
	int I;
	for(I=0;I<N;I++){
		printf("Ingrese el numero de cuenta %d: ",I+1); scanf("%d",&C[I]);
		do{
		fflush(stdin);
		printf("Ingrese el tipo de cuenta %d (A,B,C,D): ",I+1); scanf("%c",&T[I]);
		fflush(stdin);
		}while(T[I]!='A'&&'B'&&'C'&&'D');
		printf("Ingrese el saldo de la cuenta %d: ",I+1); scanf("%f",&S[I]);
	}
}
void ordenar(int C[], char T[], float S[], int N)
{
	int I,J,AUXINT;
	char AUXCHAR;
	float AUXFLOAT;
	for(I=0;I<N;I++){
		for(J=I;J<N;J++){
			if(T[I]>T[J||T[I]==T[J]&&C[I]>C[J]]){
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
void imprimir (int C[], char T[], float S[], int N)
{
	int I;
	for(I=0;I<N;I++){
		printf("\n%25d%14c%20.2f",C[I],T[I],S[I]);
	}
}
void acceso(int C[], char T[], float S[], int N, int NUM)
{
	int POS;
	POS = busqueda(C,N,NUM);
	if(POS>0){
		printf("%25d%14c%20.2f",C[POS],T[POS],S[POS]);
	}
	else{
		printf("\n\n\n");
		printf("Numero de cuenta inexistente");
	}
}
int busqueda(int C[], int N, int NUM)
{
	int I;
	for(I=0;I<N;I++){
		if(C[I]==NUM){
			return I;
		}
	}
	return -1;
}
