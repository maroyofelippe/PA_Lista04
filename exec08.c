#include <stdio.h>
int main()
{
	int TAB, LIM, CONT, RES;
	printf("Digite a Tabuada desejada: \n");
	scanf("%d", & TAB);
	printf("Digite o Limite do multiplicador: \n");
	scanf("%d", & LIM);
	CONT = 1;
	printf("Tabuada: %d \n", TAB);
	while (CONT <= LIM)
	{
		RES = TAB * CONT;
		printf("%d x %d = %d \n", TAB, CONT, RES);
		CONT ++;
	}
}
