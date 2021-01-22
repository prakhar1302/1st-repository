#include<bits/stdc++.h>
using namespace std;
int main()
{long n,j,k;cin>>n;
if(n%2==0)
{j=n-1;
k=n;}
else
{
    j=n;k=n-1;
}
vector <long> v(n);
if(n==1)
    cout<<1;
else if(n==3||n==2)
{
    cout<<"NO SOLUTION";
}
else
{   int sizer=(n%2==0)?n/2-1:n/2;
    for(int i=0;i<n;i++)
    {
       if(i<=sizer)
       {
           v[i]=j;j-=2;
       }
       else{v[i]=k;k-=2;}
    }
    for(auto i=v.rbegin();i!=v.rend();i++)
        cout<<*i<<" ";
}
return 0;
}
