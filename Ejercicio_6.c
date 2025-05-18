/*
Escriba un programa que pida al usuario un número, y muestre el mensaje "has
introducido el numero ---" (mostrando el número que ha sido introducido). Esta acción
debe repetirse hasta que el usuario introduzca el número 0. En ese momento se
mostrará el mensaje "Finalizando: Se ha introducido el número 0". Además, se debe
mostrar cuántos números se han introducido y su suma.
*/
#include <stdio.h>

int main() 
{
    int numero;
    int contador = 0;
    int suma = 0;

    do 
    {
        printf("Introduce un número (0 para salir): ");
        scanf("%d", &numero);

        if (numero != 0) 
        {
            printf("Has introducido el número %d\n", numero);
            contador++;
            suma += numero;
        } 
        else 
        {
            printf("Finalizando: Se ha introducido el número 0\n");
        }

    } 
      while (numero != 0);

    printf("Cantidad de números introducidos: %d\n", contador);
    printf("Suma de los números introducidos: %d\n", suma);

    return 0;
}
