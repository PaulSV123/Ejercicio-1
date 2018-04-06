#include <iostream>
using namespace std;

int tamanoP(int *x)
{
    if (*x=='\0')
        return 0;
    else
    {
        return 1+tamanoP(++x);
    }
}
int tamanoA (int x[])
{
    int cont=0;
    while(x[cont]!='\0')
    {
        cont++;
    }
    return cont;
}

int main()
{
	int xb[]={1,2,3,'\0'};
    int *ptr=xb;
    cout<<tamanoP(ptr)<<endl;
    cout<<tamanoA(xb);
}
