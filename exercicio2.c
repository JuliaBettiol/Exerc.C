//Escreva uma função que receba um tempo em total de segundos desde a meia-noite, retornando por referência o tempo em horas, minutos e segundos correspondentes.

#include <stdio.h>

void tempo(int tS,int* h,int* m, int* s);

int main() 
{
    int tempSegundos;
    int horas, min, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempSegundos);
    tempo(tempSegundos, &horas, &min, &segundos);

    printf("%d horas, %d minutos, %d segundos\n", horas, min, segundos);
}
void tempo(int tS, int* h, int* m, int* s) 
{
    *h = tS / 3600;
    *m = (tS % 3600) / 60;
    *s = tS %3600 % 60;
}







