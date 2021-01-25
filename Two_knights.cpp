#include<bits/stdc++.h>
using namespace std;
int main()
{long long n,i=0,j=0,x=1;cin>>n;
for(int k=1;k<=n;k++)
{
    cout<<i*j<<endl;
    i+=(k+1)+1;
    if(k==1)
        j+=2;
    else
        {j+=(2*x);
        x++;}
    //j-=x;
}
    return 0;
}
