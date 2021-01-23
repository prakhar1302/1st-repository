#include<bits/stdc++.h>
using namespace std;
int main()
{int n;cin>>n;
int arr[n+1];
for(int i=2;i<n+1;i++)
    arr[i]=1;
for(int i=2;i*i<=n;i++)
{if(arr[i]==1)
    {
    for(int j=i;i*j<=n;j++)
    {arr[i*j]=0;
    }
    }
}
int sum=0;
for(int i=2;i<n+1;i++)
    {if(arr[i]==1)
    {


        cout<<i<<" ";
    sum++;
    }
    }
cout<<endl<<sum;
return 0;
}
