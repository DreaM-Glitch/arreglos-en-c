#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

///IGNACIO NIZETICH| UTN MAR DEL PLATA
void ingresarValoresArreglo(int arreglo[], int longitud);
void cargarArregloReal (float arreglo2[], int longitud);
void cargarArregloCaracter (char arreglo3[], int longitud);
void arregloApila (int arreglo[], int validos, Pila *dada);
void mostrarArreglo (int arreglo[], int longitud);
void verificarElemento (char arreglo3[], int longitud);
int sumaElementos (int arreglo[], int longitud);
int sumaArregloFlotante (float arreglo2[], int longitud);
int posicion ();
int main ()
{
    Pila dada;
    inicpila(&dada);
    int opc, resultado, dim, dim2;
    printf("Ingrese la dimension del arreglo: ");
    scanf("%d", &dim);
    printf("ingrese la dimension del arreglo flotante: ");
    scanf("%i", &dim2);
    int arreglo[dim];
    float arreglo2[dim2];
    char arreglo3[10];


    printf("------ELIJA UNA OPCION-------\n");
    fflush(stdin);
    scanf("%i", &opc);

    switch (opc)
    {
    case 1:
        ingresarValoresArreglo(arreglo, dim);
        printf("Valores ingresados en el arreglo:\n");
        for (int i = 0; i < dim; i++)
        {
            printf("|%d| ", arreglo[i]);
        }
        printf("\n");
        break;

    case 2:
        ingresarValoresArreglo(arreglo, dim);
        mostrarArreglo(arreglo, dim);
        break;

    case 3:
        resultado = sumaElementos(arreglo, dim);
        printf("la suma es: %i", resultado);
        break;

    case 4:
        ingresarValoresArreglo(arreglo, dim);
        mostrarArreglo(arreglo, dim);
        arregloApila(arreglo, dim, &dada);
        mostrar(&dada);
        break;

    case 5:
        cargarArregloReal(arreglo2, dim2);
        resultado = sumaArregloFlotante(arreglo2, dim2);
        printf("la suma del arreglo es: %i", resultado);
        break;

    case 6:
        cargarArregloCaracter(arreglo3, 10);
        verificarElemento(arreglo3, 10);
        break;

    default:
        printf("OPCION NO VALIDA. ");
        break;
    }

    return 0;
}

///---------------------FUNCIONES--------------------------
///PUNTO 1 / 2
void ingresarValoresArreglo(int arreglo[], int longitud)
{
    for (int i = 0; i < longitud; i++)
    {
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%d", &arreglo[i]);
    }



}


void mostrarArreglo (int arreglo[], int longitud)
{
    int i = 0;
    for (i = 0; i<longitud; i++)
    {
        printf("|%d|", arreglo[i]);
    }
}

///PUNTO 3
int sumaElementos (int arreglo[], int longitud)
{
    int i = 0;
    int suma = 0;
    for (i = 0; i<longitud; i++)
    {
        printf("escriba numeros para cargar en el arreglo: ");
        fflush(stdin);
        scanf("%d", &arreglo[i]);
        suma = suma + arreglo[i];
    }

    return suma;
}

///PUNTO 4
void arregloApila (int arreglo[], int validos, Pila *dada)
{

    int i = 0;

    for (i = 0; i<validos; i++)
    {
        apilar(dada, arreglo[i]);
    }

}

///PUNTO 5
void cargarArregloReal (float arreglo2[], int longitud)
{
    int i = 0;

    for ( i = 0; i<longitud; i++)
    {
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%f", &arreglo2[i]);
    }

}


int sumaArregloFlotante (float arreglo2[], int longitud)
{
    int suma = 0;
    int i = 0;

    for (i = 0; i<longitud; i++)
    {
        suma = suma + arreglo2[i];
    }
    return suma;
}


///PUNTO 6

int posicion (){

int posicion;

printf("\n ingrese la posicion que desea ver en el arreglo: ");
scanf("%i", &posicion);

return posicion;
}


void verificarElemento (char arreglo3[], int longitud){
int posicion_arreglo = posicion();
if (posicion_arreglo<longitud){
    printf("el elemento se encuentra en el arreglo: el elemento es %c", arreglo3[posicion_arreglo]);
} else {

printf("esa posicion no existe en el arreglo. ");

}

}


void cargarArregloCaracter(char arreglo[], int longitud) {
    int i;

    for (i = 0; i < longitud; i++) {
        printf("Ingrese un caracter para la posicion %d: ", i);
        scanf(" %c", &arreglo[i]);
    }
}







