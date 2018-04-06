#include <iostream>
using namespace std;

void MosMat (int **P,int a, int b)
{
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
            cout<<*(*(P+i)+j)<<" ";
        cout<<endl;
    }
}
void MultiMat(int x[][100],int y[][100], int a, int b)
{
    int **M;
    for (int i=0;i<a;i++)
        for (int j=0;j<b;j++)
            M[i][j]=0;
    for (int i=0;i<a;i++)
        for (int j=0;j<b;j++)
            for (int k=0;k<a;k++)
                M[i][j]=(x[k][j]*y[i][k])+M[i][j];
    MosMat(M,a,b);
}
int main()
{
	int f=3, c=3;
    MultiMat(x1,y1,f,c);
}
