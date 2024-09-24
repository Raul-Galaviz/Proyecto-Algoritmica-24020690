#include <stdio.h>

int main() {
    int anioNacimiento, anioActual, edad;

    printf("Ingrese el año de su nacimiento: ");
    scanf("%d", &anioNacimiento);


    printf("Ingrese el año actual: ");
    scanf("%d", &anioActual);


    edad = anioActual - anioNacimiento;


    printf("Su edad es: %d años\n", edad);

    return 0;
}
