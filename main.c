#include <stdio.h>

int main()
{
    char nombre[100];
    unsigned int edad;
    ///printf("Hola mundo:D\n");
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Ingrese su edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u", edad + 1);
    return 0;
}
