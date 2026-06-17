/*

       *     - linha 1: 3 espaços / 1 asterisco
      ***    - linha 2: 2 espaços / 3 asterisco
     *****   - linha 3: 1 espaço  / 5 asterisco 
    *******  - linha 4: 0 espaço  / 7 asterisco
     *****   - linha 5: 1 espaço  / 5 asterisco
      ***    - linha 6: 2 espaços / 3 asterisco
       *     - linha 7: 3 espaços / 1 asterisco
    
    Para os asteriscos serao os numeros impares de 1 ate (diagonal)

    linha central: ((diagonal) + 1) / 2
    ASTERISCO = LINHA + 0
                LINHA + 1
                LINHA + 2
                LINHA + 3
                LINHA + 0
                LINHA - 3
                LINHA - 6

    A quantidade total de linhas será a diagonal maior do losango, e é determinada 
    por um for que depende da variavel inteira: (diagonal) fornecida pelo usuario    

*/
#include <stdio.h>

int main(void)
{
    int diagonal, contador1 = 1, contador2 = 1;

    printf("Escolha um inteiro que representa sua diagonal: ");
    scanf("%i", &diagonal);

    while (diagonal % 2 == 0 || diagonal < 3)
    {
        printf("A diagonal deve ser um numero impar e maior ou igual a 3: ");
        scanf("%i", &diagonal);
    }
    // linha central separa a parte de cima e de baixo do diamante
    int linha_central = ((diagonal + 1) / 2);

    for (int linha = 1; linha <= diagonal; linha++)
    {
        // parte de cima do diamante
        if (linha <= linha_central)
        {
            for (int j = linha_central; j > linha; j--)
            {
                printf(" ");
            }

            for (int i = 1; i <= contador1; i++) 
            {
                printf("*");
            }
            contador1+=2;
            
        } else // parte de baixo do diamante
        {
            for (int k = linha_central; k < linha; k++)
            {
                printf(" ");
            }

            for (int l = 1; l <= (diagonal - (2*contador2)); l++)
            {
                printf("*");
            }
            contador2++;
        }
        printf("\n");
    }
}