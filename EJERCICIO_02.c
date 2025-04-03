#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int res = 0;
    int i = 0;
    do
    {
        printf("Inserte numeros,\n");
        printf("estas en la vuelta: %i\n", i);
        scanf("%i", & num);
        
        res = res + num;
        i++;
        

        
    } while (i < 11 && res < 100);
    
   printf("la suma total fue: %i\n", res);
   printf("vuelta %i\n", i );

   return 0;
}
