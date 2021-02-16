#include<bits/stdc++.h>
using namespace std;
int moves(int n)
{if(n==1)
	return 1;
else
	return 2*moves(n-1) +1;
}
void toi(int n,int A,int B,int C)
{   if(n>0)
        {toi(n-1,A,C,B);
        cout<<A<<" "<<C<<endl;
        toi(n-1,B,A,C);
        }
}


int main()
{int n_;cin>>n_;
cout<<moves(n_)<<endl;
toi(n_,1,2,3);
return 0;
}
