#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() 
{
     long long int t;
     cin>>t;
     while(t--)
     {
        string s;
        cin>>s; 
        long long int i,l,j=0,k=0;
        l=s.length();
        char o[l]={'\0'};
        char e[l]={'\0'};
        for(i=0;i<l;i++)
        {
            if(i%2==0)
            {
            e[j]=s[i];
            j++;
            }
            else 
            {
                o[k]=s[i];
                k++;
            }
            
        }
        cout<<e<<" "<<o<<"\n";
     }
    return 0;
}
