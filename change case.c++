/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//function to change lower case to upper and the opposite

void ChangeCase(char &arr[])
{

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>=65&&arr[i]<=90)
        {
            arr[i]+=32;
        }
        else if(arr[i]>=97&&arr[i]<=122)
        {
            arr[i]-=32;
        }
    }
}

int main(){

}