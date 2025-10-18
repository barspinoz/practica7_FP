/*
   Integrantes de la Brigada
    Espinosa Salvador Roman.
Maldonado Martínez Erik Fernando.
        Porto Rayón Emanuel.
  Zaragoza Ruiz Santiago Luca.

Fecha de realización del programa 10/Octubre/2025

Calcular el sueldo de un emppleado:El usuario debera ingresar la
cantidad de horas trabajadas y el valor por cada hora.Considere en
los calculos el descuento de seguridad social del 9.35%,sobre el total 
de ingresos y una bonificación del 2% del sueldo inicial a percibir.

                           PSEUDOCODIGO
INICIAR
      //variables de entrada//
  horas:ENTERO
  valor:REAL
  sueldo inicial=REAL
  desc=REAL
  bon=REAL
  sueldoFinal=REAL
         //Proceso
   IMPRIMIR"Ingresa las horas trabajadas"
   LEER horas
   IMPRIMIR"Ingresa el valor de las horas trabajadas"
   LEER valor
   sueldoFinal= calcularsuma(horas,valor,desc,bon)  //se llama a la función
   IMPRIMIR"El sueldo inicial es de"sueldoInicial
   IMPRIMIR"El descuento de seguridad social es de 9.35%"desc
   IMPRIMIR"El bono del 2% es de "bon
   IMPRIMIR"El sueldo final es de "sueldoFinal
FIN

  //FUNCION calcular sueldo
FUNCION calcularsueldo(sueldoInicial,horas,valor,desc,bon)REGRESA REAL
      //Calcular sueldo inicial
   sueldoInicial=horas *valor
      //Calcular el descuento por seguridad social
   desc=(sueldoInicial/100)*9.35
      //Calcular el boni
   bon=(sueldoInicial/100)*2
      //Calcular el sueldo final del empleado
   sueldoFinal=sueldoInicial+bon-desc
   RETORNAR sueldoFinal
FINFUNCION

*/

#include<stdio.h>
#include<math.h>
  //Función para el sueldo
  //DECLARACIÓN DE LA FUNCIÓN
  float calcularSueldo(float *sueldoInicial,int horas,float valor,float *desc,float *bon );
  //IMPLEMENTACIÓN DE LA FUNCIÓN
  float calcularSueldo(float *sueldoInicial,int horas,float valor,float *desc,float *bon){
        //Proceso para cálcular el sueldo inicial
         *sueldoInicial=horas*valor;
        //Proceso para cálcular el descuento por seguridad social
        *desc=(*sueldoInicial/100)*9.35;  
        //Proceso para cálcular la bonificación
        *bon=(*sueldoInicial/100)*2;
        //Proceso para cálcular el sueldo final
        float sueldoFinal=*sueldoInicial+*bon-*desc;
        return sueldoFinal;
    }
int main(){
    //VARIABLES
    int horas=0;
    float valor=0;
    float sueldoInicial=0;
    float desc=0;
    float bon=0;
    float sueldoFinal=0;
    //Cálculo del sueldo, tomando en cuenta el descuento de seguridad social y la bonificación
    printf("Ingresa las horas trabajadas \n\t Horas: ");
    scanf("%i", &horas);
    printf("Ingresa el valor de las horas trabajadas \n\t $ ");
    scanf("%f", &valor);
    //Llamar la función para el cálculo del sueldo
    sueldoFinal = calcularSueldo(&sueldoInicial,horas, valor, &desc, &bon);
    printf("Su sueldo inicial es de :\n  $ %f",sueldoInicial);
    printf("\nEl descuento por seguridad social es 9.35%:\n  $ %f",desc);
    printf("\nLa bonificacion es del 2%:\n  $ %f",bon);
    printf("\nSu sueldo final es de:\n  $ %f",sueldoFinal);
    
    return 0;
}//main
