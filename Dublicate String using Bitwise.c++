/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//algorithm to find dublicate in string using Bitwise


int main(){
    char arr[]="finding";
    int H=0,x=0;
    for(int i=0;arr[i]!='\0';i++)
    {
       x=1;
       x=x<<(arr[i]-97);
       if((H&x)>0)
       cout<<arr[i]<<" is dublicate"<<endl;
       else
       H=H|x;
    }
    

}