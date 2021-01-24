#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n) 
{ 

    if (n <= 1)  return false; 
    if (n <= 3)  return true; 

    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
     
    
int main() {
    
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        isPrime(n)?  cout << "Prime\n": cout << "Not prime\n";
    } 
    return 0;
}