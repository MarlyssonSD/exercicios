#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese");
    FILE *file;
    FILE *file1;
    file=fopen("nomearquivo.txt","r");
    file1=fopen("nomearquivo1.txt","w");
    if(file==NULL){
        printf("A abertura do arquivo de entrada falhou.\n");
        exit(1);
    }
    if(file1==NULL){
        printf("A abertura do arquivo de entrada falhou.\n");
        exit(1);
    }
    char next;
    int n=1;
    fscanf(file,"%c",next);
    fprintf(file1,"%d \n",n);
    while(!feof(file)){
        fprintf(file1,"%c",next);
        if(next=='\n'){
            n++;
            fprintf(file1,"%d \n",n);
        }
        fscanf(file,"%c",next);
    }
    fclose(file);
    fclose(file1);
    return 0;
}
