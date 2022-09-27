/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//function to check if the string is vlaid

int valid(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(!(arr[i]>=65&&arr[i]<=90)&&!(arr[i]>=97&&arr[i]<=122)&&!(arr[i]>=48&&arr[i]<=57))
        return 0;
    }
    return 1;
}

int main(){

}