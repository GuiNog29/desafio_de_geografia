#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char city[50];
	
	printf("\t     Desafio de Portugu�s     \n\n\n");
	printf("Digite o nome de uma das cidades a seguir:\n\n");
	
	printf("\t| Curitiba      |\n");
	printf("\t| Maringa       |\n");
	printf("\t| Florianopolis |\n");
	printf("\t| Chapeco       |\n");
	printf("\t| Posto Alegre  |\n");
	printf("\t| Londrina      |\n");
	printf("\t| Pinhais       |\n");
	printf("\t| Joinville     |\n");
	printf("\t| Blumenau      |\n");
	printf("\t| Gramado       |\n\n");
	
	printf("Digite o nome de uma das cidades acima -> ");
	gets (city);
	
	if (strcmp(city,"Curitiba") == 0){
		printf("\nPertence ao PR, ");
		printf("� capital");
		return 0;
	} else if (strcmp(city,"curitiba") == 0){
		printf("\nPertence ao PR, ");                   //La�o caso o usuario n�o digitar com letra maiuscula
		printf("� capital");
		return 0;
	} 
	
	if (strcmp(city,"Maringa") == 0 || strcmp(city,"Londrina") == 0 || strcmp(city,"Pinhais") == 0 ){
		printf("\nPertence ao PR, ");
		printf("N�o � capital");
		return 0;
	} else if  (strcmp(city,"maringa") == 0 || strcmp(city,"londrina") == 0 || strcmp(city,"pinhais") == 0 ){
		printf("\nPertence ao PR, ");        //La�o caso o usuario n�o digitar com letra maiuscula
		printf("N�o � capital");
		return 0;	
	}
	
	if (strcmp(city,"Florianopolis") == 0){
		printf("\nPertence ao SC, ");
		printf("� capital");
		return 0;
	} else if (strcmp(city,"florianopolis") == 0){
		printf("\nPertence ao SC, ");   //La�o caso o usuario n�o digitar com letra maiuscula
		printf("� capital");
		return 0;
	} 
	
	if (strcmp(city,"Chapeco") == 0 || strcmp(city,"Joinville") == 0 || strcmp(city,"Blumenau") == 0 ){
		printf("\nPertence ao SC, ");
		printf("N�o � capital");
		return 0;
	}  else if (strcmp(city,"chapeco") == 0 || strcmp(city,"joinville") == 0 || strcmp(city,"blumenau") == 0 ){	
		printf("\nPertence ao SC, ");       //La�o caso o usuario n�o digitar com letra maiuscula
		printf("N�o � capital");
		return 0;	
	}
	
		if (strcmp(city,"Porto Alegre") == 0){
		printf("\nPertence ao RS, ");
		printf("� capital");
		return 0;
	} else if (strcmp(city,"porto alegre") == 0){  //La�o caso o usuario n�o digitar com letra maiuscula
		printf("\nPertence ao RS, ");
		printf("� capital");
		return 0;
	} 
	
	if (strcmp(city,"Gramado") == 0){
		printf("\nPertence ao SC, ");
		printf("N�o � capital");
		return 0;
	}  else if (strcmp(city,"gramado") == 0){	//La�o caso o usuario n�o digitar com letra maiuscula
		printf("\nPertence ao SC, ");
		printf("N�o � capital");
		return 0;	
	}
		
	
	
	
}
