#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,x;cin>>n;
    vector<long> num (n+1,0);
    for(int i=0;i<n-1;i++)
    {   cin>>x;
        num[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(num[i]==0)
            cout<<i;
    }
    return 0;
}
