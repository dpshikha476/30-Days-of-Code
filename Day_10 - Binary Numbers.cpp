#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> a;
    int c=0,m=0;
    while(n>0)
    {
        a.push_back(n%2);
        n=n/2;
    }
    
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==1)
        c++;
        else if(a[i]==0)
        {
            if(c>m)
            m=c;
            c=0;
        }
    }
    if(c>m)
            m=c;
    cout<<m;  
    return 0;
}
