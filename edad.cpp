#include <stdio.h>

int main() {
    int anioNacimiento, anioActual, edad;

    printf("Ingrese el a�o de su nacimiento: ");
    scanf("%d", &anioNacimiento);


    printf("Ingrese el a�o actual: ");
    scanf("%d", &anioActual);


    edad = anioActual - anioNacimiento;


    printf("Su edad es: %d a�os\n", edad);

    return 0;
}
