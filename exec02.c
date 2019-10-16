#include <stdio.h>
int main()
{
	int REPEAT, CONT;
	printf("Digite o num de repeticoes: \n");
	scanf("%d", & REPEAT);
	CONT = 1;
	while (CONT <= REPEAT)
	{
		printf("Teste ");
		CONT = CONT + 1;
	}
}
