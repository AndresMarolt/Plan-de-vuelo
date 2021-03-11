#include <stdio.h>
#include <math.h>

float distancia_coord(int, int, int, int);
int cuadrado_coord(int, int);

int main()
{
    int x1, y1, x2, y2, flag=0;
    float distancia;
    printf("Indique las coordenadas del plan de vuelo (x, y):\n");
    scanf("%d, %d", &x1, &y1);
    while(x1!=-1 && y1!=-1){
        if (flag==0){
            x2=x1;
            y2=y1;
            flag++;}
        distancia += distancia_coord(x1, y1, x2, y2);
        x2=x1;
        y2=y1;
        scanf("%d, %d", &x1, &y1);}
    printf("\nLa distancia del plan de vuelo indicado es de %.2f", distancia);
    return 0;
}

float distancia_coord(int x1, int y1, int x2, int y2)
{
    float dist=0;
    dist += sqrt(cuadrado_coord(x1, x2) + cuadrado_coord(y1, y2));
    return dist;
}

int cuadrado_coord(int a,int b)
{
    int cuadrado;
    cuadrado = (a-b) * (a-b);
    return cuadrado;
}
