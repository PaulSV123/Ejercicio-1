#include <iostream>
using namespace std;

void copiar1(char *x,char *y)
{
    int a=0,b=0;
    while(*(x+a)!='\0')
    {
        a++;
    }
    while(*(y+b)!='\0')
    {
        b++;
    }
    for (int i=0;i<b;i++)
    {
        *(y+i)=' ';
    }
    for (int i=0;i<a;i++)
        if (*(x+i)!='\0')
            { *(y+i)=*(x+i);}



}
void copiar2(char x[],char y[])
{
    int a=0,b=0;
    while(x[a]!='\0')
    {
        a++;
    }
    while(y[b]!='\0')
    {
        b++;
    }
    for(int i=0;i<a;i++)
    {
        y[i]=x[i];
    }

}
int main()
{
	char *ttt=new char[10];
    ttt="german";
    char sss[]="garcia";
    char tttt[]="pan";
    char ssss[]="jamon";
    copiar1(tttt,ssss);
    cout<<ssss<<endl;
    copiar1(ttt,sss);
    cout<<sss<<endl;
}
