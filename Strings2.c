#include<stdio.h>
#include<string.h>
int main()
{
	char STR1[5];
	char STR2[5];
	printf("Introduce la primera frase: ");
	fgets(STR1,5,stdin);
	printf("Introduce la segunda frase: ");
	fflush(stdin);
	fgets(STR2,5,stdin);
	if(strcmp(STR1,STR2)==0){
		printf("Los dos strings son iguales\n");
	}
	else{
		printf("Los dos strings NO son iguales\n");
	}
	return 0;
}
