#include <string.h>
#include <stdio.h>
void getString(char mensaje[], char string[])
{
char name[20];
printf("%s",mensaje);
gets(string);
}

void getNyA(char name[],char surname[],int stringLength)
{
char nameCopy[stringLength];
char surnameCopy[stringLength];
strcopy(nameCopy,name);
strcopy(surnameCopy,surname);
int namelength=strlen(nameCopy);
int surnamelength=strlen(surnameCopy);
char letra;
letra=nameCopy[0];
strupr(letra);
nameCopy[0]=letra;
for(int i=0;i<namelength;i++)
    {
    if(nameCopy[i]=='\0')
        {
        letra=nameCopy[i+1];
        strupr(letra);
        nameCopy[i+1]=letra;
        }
    }
letra=surnameCopy[0];
strupr(letra);
surnameCopy[0]=letra;
for(int i=0;i<surnamelength;i++)
    {
    if(surnameCopy[i]=='\0')
        {
        letra=surnameCopy[i+1];
        strupr(letra);
        surnameCopy[i+1]=letra;
        }
    }
printf("%s, %s",surnameCopy,nameCopy);
}
