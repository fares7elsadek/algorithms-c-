/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//algorithm to find dublicate in string


int main(){
    char arr[]="finding";
    int H[26]={};
    for(int i=0;arr[i]!='\0';i++)
    {
        H[arr[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            printf("%c",i+97);
            printf(": %d \n",H[i]);
        }
    }

}