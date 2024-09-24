#include <stdio.h>

int main() {
    char nombre[20], apellido[20];


    printf("Cual es tu nombre: ");
    scanf("%s", nombre);


    printf("Cual es tu apellido: ");
    scanf("%s", apellido);


    printf("Tu nombre es: %s %s\n", nombre, apellido);

    return 0;
}
