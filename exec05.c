#include <stdio.h>
int main()
{
	int NUMI, NUMF, CONT;
	printf("Digite o numero inicial: \n");
	scanf("%d", & NUMI);
	printf("Digite o numero final: \n");
	scanf("%d", & NUMF);
	CONT = NUMI;
	while (CONT <= NUMF)
	{
		printf("%d ", CONT);
		CONT ++;
	}
	
}
