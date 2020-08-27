#include<stdio.h>
#include<string.h>
void ingresar(char pro[][9], float cos[]);
void imprimir(char pro[][9], float cos[]);
void ventas(char cod[][6], int cant[], float pre[]);
int main()
{
	char pro[10][9];
	float cos[10];
	ingresar(pro,cos);
	imprimir(pro,cos);
	int cant[10];
	char cod[10][6];
	float pre[10];
	ventas(cod,cant,pre);
}
void ingresar(char pro[][9], float cos[])
{
	int i;
	for(i=0;i<10;i++){
		printf("Ingrese el nombre del producto %d: ",i+1);
		gets(pro[i]);
	}
	for(i=0;i<10;i++){
		printf("\nIngrese el costo del producto %d: ",i+1);
		scanf("%d",&cos[i]);
	}
}
void imprimir(char pro[][9], float cos[])
{
	int i;
	for(i=0;i<10;i++){
		printf("\nNombre del producto %d: %s  \tCosto del producto %d: %f",i+1,pro[i],i+1,cos[i]);
	}
}
void ventas(char cod[][6], int cant[], float pre[])
{
	int i;
	for(i=0;i<10;i++){
		printf("Ingrese el codigo del producto %d: ",i+1);
		gets(cod[i]);
	}
	for(i=0;i<10;i++){
		printf("Ingrese la cantidad de veces que se vendio el producto %d: ",i+1);
		scanf("%d",&cant[i]);
	}
	for(i=0;i<10;i++){
		printf("Ingrese el precio del producto %d: ",i+1);
		scanf("%f",&pre[i]);
	}
	for(i=0;i<10;i++){
		printf("\nProducto %d) Codigo: %s. Vendidos: %d. Precio: %f",i+1,cod[i],cant[i],pre[i]);
	}
}
