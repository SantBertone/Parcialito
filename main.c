#include <stdio.h>

/*Enunciado parcialito:
Desarrollar un programa que pida al usuario, por pantalla, que ingrese las notas de los alumnos del curso.
Las notas se seguirán cargando hasta que ingrese -1.
Una vez que finalice la carga, se tiene que mostrar por pantalla el promedio.
 */


int main() {

    int notas, prom, cant;

    printf("Ingrese la cantidad de notas a cargar: ");
    scanf("%d", cant);

    do {
        printf("\nIngrese las notas");

        while (notas != -1) {
            prom = prom + notas;
            cant = cant - 1;
        }


    } while (cant > 0);

}