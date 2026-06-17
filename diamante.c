/*

       *     - linha 1: 3 espaços / 1 asterisco
      ***    - linha 2: 2 espaços / 3 asterisco
     *****   - linha 3: 1 espaço  / 5 asterisco 
    *******  - linha 4: 0 espaço  / 7 asterisco
     *****   - linha 5: 1 espaço  / 5 asterisco
      ***    - linha 6: 2 espaços / 3 asterisco
       *     - linha 7: 3 espaços / 1 asterisco
    
    Para os asteriscos da parte de cima do diamante eu preciso de um for que execute o printf("*") 
    1 vez quando estiver na primeira linha, 3 vezes na segunda linha e assim por diante até o numero impar 
    que é determinado pela variavel: linha central = ((diagonal) + 1) / 2

    Para a parte abaixo da linha central a quantidade de asteriscos serão os numeros impares anteriores a linha_central
    de tras para frente.

    Para a quantidade de espaços em branco, o padrão depende da linha_central para o começo do for (quantidade de espaços que serão printados)
    e a condição depende da linha em que estamos
    
    A quantidade total de linhas será a diagonal maior do losango, e é determinada 
    por um for que depende da variavel inteira: (diagonal) fornecida pelo usuario    

    CONDIÇÃO PARA INPUT DO USUARIO: A diagonal deve ser um numero impar maior ou igual a 3 para que o padrao de diamante seja possivel
    estou considerando que apenas um asterisco não se caracterize como diamante.

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
