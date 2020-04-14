#include <stdio.h>
int getInt(char mensaje[],char error[], int min, int max);
float getFlotante(char mensaje[],char error[], float min, float max);
char getSexo(char mensaje[],char error[]);

int main()
{
int edad;
float altura;
char sexo;
edad = getInt("Ingrese su edad: ","Edad no valida, ingrese nuevamente: ",1,100);
altura = getFlotante("Ingrese su altura: ","Altura no valida, ingrese nuevamente: ",40.0,210.0);
sexo = getSexo("Ingrese su sexo (F para femenino, M para masculino): ","El sexo no es valido, ingrese nuevamente: ");
printf("La edad es: %d",edad);
printf("La altura es: %f",altura);
printf("El sexo es: %c",sexo);
return 0;
}

int getInt(char mensaje[],char error[], int min, int max)
{
int entero;
printf("%s", mensaje);
scanf("%d", &entero);
while(entero <  min|| entero > max )
    {
    printf("%s", error);
    scanf("%d", &entero);
    }   
return entero;
}

float getFlotante(char mensaje[],char error[],float min,float max)
{
float flotante;
printf("%s", mensaje);
scanf("%f", &flotante);
while(flotante <  min || flotante > max )
    {
    printf("%s", error);
    scanf("%f", &flotante);
    }   
return flotante;
}

char getSexo(char mensaje[],char error[])
{
char sexo;
printf("%s", mensaje);
scanf("%c", &sexo);
while(sexo!= 'F' && sexo!= 'M')
    {
    printf("%s", error);
    scanf("%c", &sexo);
    }   
return sexo;
}