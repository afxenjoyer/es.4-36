#include <stdio.h>

int main(void)
{
    float altezzaPallina = 0.0;
    int numeroSalti = 0;

    printf("Inserisci l'altezza massima della pallina\n");
    scanf("%f", &altezzaPallina);

    while (altezzaPallina > 1)
    {
        altezzaPallina = (altezzaPallina * 80)/100;
        numeroSalti++;
        printf("Salto numero %d, altezza pallina %f\n", numeroSalti, altezzaPallina);
    }

    return 0;
}
