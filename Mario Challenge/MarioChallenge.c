#include <stdio.h>

int main()
{

    int tamanho;

    printf("Insira o tamanho: ");
    scanf("%d", &tamanho);

    if (tamanho > 0 && tamanho <= 8)
    {
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                if (i + j < tamanho - 1)
                {
                    printf(" ");
                }
                else
                {
                    for (int j = 0; j < (tamanho / 2); j++)
                    {
                        printf("#");
                    }
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Valor permitido entre 1 e 8");
    }
}
