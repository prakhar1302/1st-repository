#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;cin>>test;
for(int i=0;i<test;i++)
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    if(2*a<b)
        cout<<"NO\n";
    else{
        a%=3;
        b%=3;
        if(a>b)
            swap(a,b);
        if((a==0 && b==0)||(a==1 && b==2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


}
return 0;
}
