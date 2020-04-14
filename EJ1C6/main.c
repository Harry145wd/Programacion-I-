#define T 20
#include <stdio.h>
#include <stdlib.h>
#include "hstring.h"

int main()
{
char nombre[T];
char apellido[T];
getString("Ingrese un nombre\n",nombre);
getString("Ingrese un apellido\n",apellido);
getNyA(nombre,apellido,T);
return 0;
}
