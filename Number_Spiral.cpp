#include<bits/stdc++.h>
using namespace std;
int main()
{int test;cin>>test;
for(int i=0;i<test;i++)
{
   long long row,col;cin>>row>>col;
   if(row>col)
   {
     if(row%2==0)
     {
         cout<<(row)*(row)-col+1<<endl;
     }
     else
     {
         cout<<(row-1)*(row-1)+col<<endl;
     }
   }
   else
   {
       if(col%2==0)
        cout<<(col-1)*(col-1)+row<<endl;
       else
        cout<<(col)*(col)-row+1<<endl;

   }
}
return 0;
}
