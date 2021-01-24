#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1;i<=10;i++)
    {
        cout<<n ;
        cout<<" x ";
        cout<<i;
        cout<< " = ";
        cout<<n*i<<"\n";
    }
    return 0;
}
