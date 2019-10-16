#include <stdio.h>
int main()
{
	int CONT, NUM;
	printf("Digite o ultimo numero: \n");
	scanf("%d", & NUM);
	CONT = 1;
	while (CONT <= NUM)
	{
		printf("%d ", CONT);
		CONT ++;
	}
}
