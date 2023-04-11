#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char frase[50], letra;
    int repete=0, tamanho;
    
    gets(frase);
    scanf("%c", &letra);
    tamanho = strlen(frase);
    for(int i=0;i<tamanho;i++)
        if(frase[i]==letra)
        repete++;
        printf("%i", repete);
    
    
	return 0;
}