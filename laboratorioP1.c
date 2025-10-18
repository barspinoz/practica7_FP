#include <stdio.h>
#include <math.h>
int main(){
    int figura=0;
    float radio, area, lado, ladoDos;

    printf("Ingresar tipo de figura a calcular: \n");
    printf("\t clave \t figura \n\t 1 \t circulo \n\t 2 \t cuadrado \n\t 3 \t rectangulo \n\t 4 \t triangulo \n");
    scanf("%i", &figura);
    switch(figura){
        case 1: printf("Circulo \n Favor de ingresar el radio: \n");
        scanf("%f", &radio);
        area= 3.14*radio*radio;
        printf("area de circulo es: \n %f", area);
        break;

        case 2: printf("cuadrado \n Favor de ingresar valor de un lado: \n");
        scanf("%f", &lado);
        area= pow (lado,2);
        printf("Area de cuadrado: \n %f", area);
        break; 

        case 3: printf("rectangulo \n Favor de ingresar el primer lado: \n");
        scanf("%f", &lado);
        printf("ingrese valor del segundo lado: \n");
        scanf("%f", &ladoDos);
        area= lado*ladoDos;
        printf("area de cuadrado: \n %f", area);
        break;

        case 4: printf("triangulo \n Favor de ingresar base: \n");
        scanf("%f", &lado);
        printf("Favor de ingresar valor de la altura \n");
        scanf("%f", &ladoDos);
        area= (lado*ladoDos)/2;
        printf("Area del triangulito: \n %f", area);
        break;

        default: printf("Error al ingresar valor");
        break;
    }
    return 0;


}