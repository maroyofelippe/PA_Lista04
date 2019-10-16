#include <stdio.h>
int main()
{
	int TAB, CONT, RES;
	printf("Digite a Tabuada desejada: \n");
	scanf("%d", & TAB);
	CONT = 1;
	printf("Tabuada: %d \n", TAB);
	while (CONT <= 10)
	{
		RES = TAB * CONT;
		printf("%d x %d = %d \n", TAB, CONT, RES);
		CONT ++;
	}
}
