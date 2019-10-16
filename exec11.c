#include <stdio.h>
int main()
{
	int NUM1, CONT, CONT2;
	CONT = 1;
	CONT2 = 0;
	while (CONT <= 10)
	{
		printf("Digite o Numero %d:", CONT);
		scanf("%d", & NUM1);
		if ((NUM1 % 2) == 0)
		{
			CONT2 ++;
		}
		CONT ++;
	}
	printf("A quantidade dos numeros pares: %d \n", CONT2);
}
