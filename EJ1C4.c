
#include <stdio.h>
#include <limits.h>
int factorial(int numero);
int getInt(char mensaje[],char error[],int min, int max);
int main()
{ 
int numBase=getInt("Ingrese un numero: ","El numero es invalido, ingrese otro numero: ", 0, INT_MAX);
int factor=factorial(numBase);
printf("El factorial es: %d",factor);
return 0;
}

int factorial(int numero)
{
int contador = numero;
for(int i=numero;i>1;i--)
    {
    if(i==numero)
        {
        contador=i;
        }
    contador = contador*(i-1);
    }
return contador;
}
int getInt(char mensaje[],char error[],int min, int max)
{
int num;
printf("%s",mensaje);
scanf("%d",&num);
while(num<min || num>max)
    {
    printf("%s",error);
    scanf("%d",&num);    
    }
return num;
}