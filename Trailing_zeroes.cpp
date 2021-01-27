#include<bits/stdc++.h>
using namespace std;
int trailing(long n)
{
    int count=0;
    for(int i=5;n/i>=1;i*=5)
    {
        count+=n/i;
    }
    return count;
}
int main()
{long n;cin>>n;
cout<<trailing(n)<<endl;
return 0;
}
