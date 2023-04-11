#include <stdio.h>
#include <windows.h> 1 2 3 4 5 6 7 8 9

int main()
{
    float m1[2][3];
    for (int linha = 0; linha < 2; linha++)
        for (int coluna = 0; coluna < 3; coluna++)
            scanf("%f", &m1[linha][coluna]);

    float m2[2][3];
    for (int linha = 0; linha < 2; linha++)
        for (int coluna = 0; coluna < 3; coluna++)
            scanf("%f", &m2[linha][coluna]);

    float m3[2][3];

    for (int linha = 0; linha < 2; linha++)
        for (int coluna = 0; coluna < 3; coluna++)
            m3[linha][coluna] = m1[linha][coluna] + m2[linha][coluna];
    printf("\n\n");

    // m2
    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
            printf("%.2f ", m1[linha][coluna]);
        printf("\n");
    }
    printf("\n\n");
    // m2
    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
            printf("%.2f ", m2[linha][coluna]);
        printf("\n");
    }
    printf("\n\n");

    // m3
    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
            printf("%.2f ", m3[linha][coluna]);
        printf("\n");
    }
    printf("\n\n");


    float transposta[3][2];

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 2; coluna++)
            transposta[linha][coluna] = m3[coluna][linha];
    }

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 2; coluna++)
            printf("%.2f ", transposta[linha][coluna]);
        printf("\n");
    }

    return 0;
}