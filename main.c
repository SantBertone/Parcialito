#include <stdio.h>

/*Enunciado parcialito:
Desarrollar un programa que pida al usuario, por pantalla, que ingrese las notas de los alumnos del curso.
Las notas se seguirán cargando hasta que ingrese -1.
Una vez que finalice la carga, se tiene que mostrar por pantalla el promedio.
 */


int main() {

    int nota, promedio, sumatotal, cant;
    do {
        printf("\nIngrese la nota del alumno, -1 para terminar:");
        scanf("%d", &nota);
    } while (nota < -2 || nota > 10);


    while(nota != -1)
    {
        cant=cant+1;
        sumatotal = sumatotal + nota;
        promedio = sumatotal / cant;
        printf("Ingrese la nota del alumno, -1 para terminar: ");
        scanf("%d", &nota);
    }

    printf("El promedio de las notas es %d", promedio);
    return 0;
}



