#include <stdio.h>
int main ()
{
	int LIMI, LIMF, CONT;
	printf("Digite o Limite Inicial: \n");
	scanf("%d", & LIMI);
	printf("Digite o Limite Final: \n");
	scanf("%d", & LIMF);
	CONT = LIMI + 1;
	while(CONT < LIMF)
	{
		printf("%d ", CONT);
		CONT ++;
	}
}
