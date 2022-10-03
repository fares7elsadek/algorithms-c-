/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

/* #Lower Triangle column major# */


/*
    <-  m[i,j] = zero if(i<j)    ->
    <-  m[i,j] not zero if(i>=j) ->
    get the index of the array with formula
    <- m[i,j]  = [n*(j-1)+(j-1)*(j-2)/2]+i-j ->

    number of elements is   <- m.n*(m.n+1)/2 ->

*/

struct Matrix
{
    int *A;
    int n;
};

void Set(Matrix *m,int i,int j,int x)
{
    if(i>=j)
        m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
}

int Get(Matrix *m,int i,int j,int x)
{
    if(i==j)
        return m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
    else
        return 0;
}

void Display(Matrix m)
{
    for(int i=1; i<m.n; i++)
    {
        for(int j=1; j<m.n; j++)
        {
            if(i==j)
                printf("%d ",m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j]);
            else
                printf("%d ",0);
        }
        cout<<endl;
    }
}
int main()
{

    struct Matrix m;
    int i,j,x;

    printf("Enter Dimension");
    scanf("%d",&m.n);
    m.A=new int[m.n*(m.n+1)/2];
    printf("enter all elements");
    for(i=1; i<=m.n; i++)
    {
        for(j=1; j<=m.n; j++)
        {
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
    }
    printf("\n\n");
    Display(m);
}
