#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{long n;cin>>n;
unsigned long long int result=1;
for(int i=0;i<n;i++)
{
    result=(result*2)%mod;
}
cout<<result<<endl;
return 0;
}
