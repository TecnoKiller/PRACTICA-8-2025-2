/*
Escriba un programa en C que solicite números al usuario hasta que se hayan 
introducido 10 números o la suma de todos los números leídos sea mayor que 100. A 
continuación mostrar un mensaje indicando qué condición se ha cumplido (es decir, si 
se han introducido 10 números o si su suma es mayor que 100).
*/
#include <stdio.h>

int main() 
{
    int numero;
    int contador = 0;
    int suma = 0;

    while (contador < 10 && suma <= 100) 
    {
        printf("Introduce un número: ");
        scanf("%d", &numero);

        suma += numero;
        contador++;
    }

    if (suma > 100) 
    {
        printf("Se ha superado la suma de 100 (suma = %d).\n", suma);
    } 
    else 
    {
        printf("Se han introducido 10 números (suma = %d).\n", suma);
    }

    return 0;
}
