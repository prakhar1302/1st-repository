#include<bits/stdc++.h>
using namespace std;
int main()
{long n;cin>>n;
long long s1=0,s2=0;
vector <long> v1,v2;
for(int k=n;k>0;k--)
{
    if(s2<=s1)
    {
       s2+=k;
       v2.push_back(k);
    }
    else
    {
        s1+=k;
        v1.push_back(k);
    }
}
if(s1==s2)
{
    cout<<"YES"<<endl<<v1.size()<<endl;
    for(auto c:v1)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(auto c:v2)
    {
        cout<<c<<" ";
    }
}
else
    cout<<"NO";
return 0;
}
