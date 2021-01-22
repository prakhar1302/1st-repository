#include<bits/stdc++.h>
using namespace std;
int main()
{   long n;cin>>n;
    long arr[n];
    for(int i=0;i<n;i++)
    {   cin>>arr[i];
    }
    long counter=0;
    for(int i=1;i<n;i++)
    {  if(arr[i]<arr[i-1])
            {counter=counter+arr[i-1]-arr[i];
            arr[i]=arr[i-1];
            }
    }
    cout<<counter;
    return 0;
}
