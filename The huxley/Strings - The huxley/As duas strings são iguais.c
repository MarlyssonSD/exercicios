#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char f1[50], f2[50];
    int comparacao;
    gets(f1);
    gets(f2);
    comparacao = strcmp(f1,f2);
    if(comparacao == 0)
    printf("IGUAIS");
    else
    printf("DIFERENTES");
    
    
	return 0;
}