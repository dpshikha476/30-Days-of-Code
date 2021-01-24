#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        unsigned int i,j,max=0;
        for(i=1;i<=n;i++)
            {
            for(j=i+1;j<=n;j++)
                {
                int ans=0;
                ans= i & j;
                if(ans>max && ans < k)
                    max=ans;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
