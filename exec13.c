#include <stdio.h>
int main()
{
    int cont, soma, num1;
    cont=1;
    soma = 0;
    while (cont != 0)
    {
        printf("Digite o numero desejado (zero para sair):");
        scanf("%d", & num1);
        if (num1 >= 35 && num1 <= 55)
        {
            soma = soma + num1;
        }
        cont = num1;
    }
    printf("A soma dos numeros entre 35 e 55: %d\n", soma);
}