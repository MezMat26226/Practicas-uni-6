#include<stdio.h>
#include<string.h>
int main()
{
	char  ciudad[5][18];
	int i,j;
	printf("Ingrese nombres de ciudades\n\n");
	for(i=0;i<5;i++){
		printf("Ciudad nro %d: ",i+1);
		gets(ciudad[i]);
	}
	for(i=0;i<5;i++){
		printf("\n%s",ciudad[i]);
	}
	return 0;
}
