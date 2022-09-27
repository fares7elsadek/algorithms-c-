/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//#method 1 o(n^2)

int e(int x,int n)
{
    static int p=1,f=1;
    int r;
    if(n==0)
    return 1;
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}


//#method 2 fatser o(n) linera using loop

int e(int x,int n)
{
    int s=1;
    for(n>0;n--)
    {
        s=1+(x/n)*s;
    }
    return s;
}

//#method 3 fatser o(n) linera using recursion
int e(int x,int n)
{
    static int s=1;
    if(n==0)return s;
    s=1+(x/n)*s;
    return e(x,n-1);
}




int main(){



}