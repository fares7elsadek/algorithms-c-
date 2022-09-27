/*
   Author :fares elsadek
   #ErrorByNight
*/

#include<bits/stdc++.h>
using namespace std;

//function to count how many words 

int count(char arr[])
{
    int word=1;


    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==''&&arr[i-1]!='')
              word++;
    }
    return word;
}

int main(){

}