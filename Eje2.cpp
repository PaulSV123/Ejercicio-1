#include <iostream>
using namespace std;

int recursiva (int *V,int length)
{
    if (length==1)
    {
        return V[0];
    }
    else
        length--;
        return V[length]+recursiva(V,length);
}
int iterativa (int *S,int tam)
{
    int cont;
    cont=S[0];
    for(int i=1;i<tam;i++)
    {
        cont=cont+S[i];
    }
    return cont;
}
int tama(char *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
    }
    return var;
}
int tamaint(int *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
    }
    return var;
}
int main()
{
	int arr[]={1,7,8,2,'\0'};
    int *ptr=arr;
    char arra[]={'h','o','l','a','\0'};
    char *ptrarra=arra;
	cout<<recursiva(arr,tama(arra))<<" recursiva ";
    cout<<iterativa(arr,tamaint(ptr))<<" iterativa ";
}
