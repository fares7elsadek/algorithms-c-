/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//function to check if the string is palindrome

bool palindrome(char arr[])
{
    int Size=0;
    for(int i=0;arr[i]!='\0';i++)Size++;
    for(int i=0,j=Size-1;i!=j;i++,j--)
    {
        if(arr[i]!=arr[j])
            return false;
    }
    return true;
}

int main(){

}
