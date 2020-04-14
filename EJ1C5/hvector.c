int vecSizeRequest()
{
int cant;
printf("Ingrese la cantidad de espacios de su vector");
if(scanf("%d",&cant)!=1)
    {
    cant = -1;
    return cant;
    }
else
    {
    return cant;
    }
}

void vecIntInit(int vector[],int tam,float init)
{
int i;
for(i=0;i<tam;i++)
    {
    vector[i]=init;
    }
}

void vecIntFill(vector[],int tam, float init)
{
int i;
int place =vecIntFreeSlot(vector[],tam,init);
if(place != -1)
    {
    printf("Ingrese un numero: ");
    while(scanf("%d",vector[place])!=1)
        {
        fflush(stdin);
        printf("Ingrese un numero valido: ");
        }
    }
else
    {
    printf("No hay espacios disponibles \n");
    fflush(stdin);
    }
}

int vecIntFreeSlot(int vector[],int tam, float init)
{
int i;
int index= -1;
for(i=0;i<tam;i++)
    {
    if(vector[i] == init)
        {
        index = i;
        break;
        }
    }
return index;
}

int vecIntContParImp(int vector[],int tam,int parimp)
{
int i;
float par=0;
float imp=0;
for(i = 0;i<tam;i++)
    {
    if(vector[i]%2==0)
        {
        par++;
        }
    else
        {
        imp++;
        }
    }
switch(parimp)
    {
    case 0:
        {
        return par;
        break;
        }
    case 1:
        {
        return imp;
        break;
        }
    }
}

float vecIntMaxMin(int vector[],int tam,int maxmin)
{
int max;
int min;
for(i=0;i<tam;i++)
    {
    if(vector[i]>=max||i==0)
        {
        max=vector[i];
        }
    if(vector[i]<=min||i==0)
        {
        min=vector[i];
        }
    }
switch(maxmin)
    {
    case 0:
        {
        return max;
        break;
        }
    case 1:
        {
        return min;
        break;
        }
    }
}
int vecIntCantIng(vector[],tam)

