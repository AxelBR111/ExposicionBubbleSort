#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int i,j,aux,numero;
	int tam=0,p=0;
	int num;
	FILE *entrada=fopen("numeros.txt","r");
	while(!feof(entrada)){
		fscanf(entrada,"%d",&num);
		if(num!=' '){
			tam++;
		}
	}
	int numeros[tam];
	rewind(entrada);
	
	while(!feof(entrada)){
		fscanf(entrada,"%d",&numero);
		numeros[p]=numero;
		p++;
	}
	for(i=0;i<p;i++){
		for(j=0;j<p;j++){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	
	printf("ORDENADOS\n");
	for(i=0;i<p;i++){
		printf("%d",numeros[i]);
		printf(" ");
	}
	return 0;
}
