#include <stdio.h>
int main()
{
	int NUM1, SOMA;
	printf("Digite o primeiro Numero: \n");
	scanf("%d", & NUM1);
	SOMA = 0;
	while (NUM1 >= 0)
	{
		SOMA = SOMA + NUM1;
		printf("Digite outro Numero: \n");
		scanf("%d", & NUM1);
	}
	printf("Voce digitou %d (negativo), mas a soma dos demais e: %d", NUM1, SOMA);
}
