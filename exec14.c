#include <stdio.h>
int main()
{
    int cont, maior, num1;
    cont = 1;
    maior = 0;
    while (cont <= 10)
    {
        /* code */
        printf("Digite o numero (%d / 10):", cont);
        scanf("%d", & num1);
        if (num1 > maior)
        {
            /* code */
            maior = num1;
        }
        cont ++;        
    }
    printf("O maior numero digitado foi: %d\n", maior);
    
}