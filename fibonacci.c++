/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//method 1 

int fib(int n)
{
    if(n<=1)return n;

    return fib(n-2)+fib(n-1);
}

//method 2 O(n)

int fib(int n)
{
    int t0=0,int t1=1,s,i;

    if(n<=1)return n;
    for(i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}



int main(){



}