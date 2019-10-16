#include <stdio.h>
int main()
{
    int cont, soma, num1;
    cont = 1;
    soma = 0;
    while (cont <= 10)
    {
        printf("Digite o numero (%d / 10): ", cont);
        scanf("%d", & num1);
        if (num1 > 0)
        {
            soma = soma + num1;
        }
        cont ++;
    }
    printf("A soma dos numeros positivos: %d\n", soma);

}