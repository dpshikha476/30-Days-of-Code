#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i,j, numberOfSwaps = 0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for (int i = 0; i < n; i++) 
    {
        
        for (int j = 0; j < n - 1; j++) 
        {
        
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }
        
        if (numberOfSwaps == 0) 
        {
            break;
        }
    }  
    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<"\n";
    cout<<"First Element: "<<a[0]<<"\n";
    cout<<"Last Element: "<<a[n-1]<<"\n";
    return 0;
}
