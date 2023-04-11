/*Questão 01
int i=99 , j;       Foi criada 2 variáveis "comuns"
int *p;             Foi criado uma variável com ponteiro
p = &i;             O ponteiro de p está recebendo o endereço de memória de i
j = *p + 100;       O ponteiro p agora está diretamente ligado ao endereço de i, assim então possuindo valor 99


//Questão 02
int a=5, b =12;     Foi criada 2 variáveis "comuns"
int *p;             Foi criado uma variável com ponteiro
int *q;             Foi criado uma variável com ponteiro
p = &a;             O ponteiro de p está recebendo o endereço de memória de a
q = &b;             O ponteiro de p está recebendo o endereço de memória de b
int c = *p + *q;    O ponteiro p agora está diretamente ligado ao endereço de a e q ao endereço de b, assim então possuindo valores p == 5 e q == 12


//Questão 03
int i=7, j=3;       Foi criada 2 variáveis "comuns"
int *p;             Foi criado uma variável com ponteiro
int **r;            Foi criado uma variável com ponteiro ligado a outro ponteiro
p = &i;             O ponteiro p recebe o endereço de memória de i
r = &p;             O ponteiro r recebe o endereço de memória do ponteiro de p (caso apenas tenha o endereço de memoria de p,
                    a ação não é executada pois r precisa de 2 informações para direcionar o valor)
int c = **r + j;    O inteiro c recebe **r que aponta para o endereço de i, assim possuindo valor 7 somando com j que o mesmo possui valor 3
*/