#include <stdio.h>
int main()
{
	int NUM1, NUM2, CONT;
	printf("Digite o primeiro numero: \n");
	scanf("%d", & NUM1);
	printf("Digite o segundo numero: \n");
	scanf("%d", & NUM2);
	if (NUM1 > NUM2)
	CONT = NUM1;
	{
		while (CONT >= NUM2)
		{
			printf("%d ", CONT);
			CONT --;
		}
	}
	else
	{
		while (CONT <= NUM2)
		{
			printf("%d ", CONT);
			CONT ++;
		}
	}
}
