#include <stdio.h>
int main()
{
    int cont, voto, soma_1, soma_2, soma_3, nulo, voto_total;
    float perc_1, perc_2, perc_3, perc_nulo;
    cont = 1;
    soma_1 = 0;
    soma_2 = 0;
    soma_3 = 0;
    voto_total = 0;
    nulo = 0;
    while (cont != 0)   
    {
        /* code */
        printf("Huginho - 1\n");
        printf("Zezinho - 2\n");
        printf("Luizinho - 3\n");
        scanf("%d", & voto);
        if (voto < 0 || voto >3)
        {
            nulo ++;
            perc_nulo = (cont / nulo) * 100;           
        }
        else
        {
            if (voto == 1)
            {
                soma_1 ++;
                perc_1 = (cont / soma_1) * 100;
            }
            else
            {
                if (voto == 2)
                {
                    soma_2 ++;
                    perc_2 = (cont / soma_2) * 100;
                }
                else
                {
                    if (voto == 3)
                    {
                        soma_3 ++;
                        perc_3 = (cont / soma_3) * 100;
                    }
                    
                }
                
            }
            
            
        }
        voto_total ++;
        cont = voto;
        cls;
    }
    printf("Total de Votos - %d votos \n", voto_total);
    printf("Huguinho teve - %d votos (%.2f)\n", soma_1, perc_1);
    printf("Zezinho teve - %d votos (%.2f)\n", soma_2, perc_2);
    printf("Luizinho teve - %d votos (%.2f)\n", soma_3, perc_3);
    printf("VOTOS NULOS - %d votos (%.2f)\n", nulo, perc_nulo);
}