#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int max,smax=-1;
	    if(a>b)
	        {
	            if(a>c)
	                max=a;
	           else
	                max=c;
	        }
	   else
	   {
	       if(b>c)
	        max=b;
	       else
	        max=c;
	   }
	  if(a!=max && smax<a)
	        smax=a;
	   if(b!=max && smax<b)
	        smax=b;
	    if(c!=max && smax<c)
	        smax=c;
	   cout<<smax<<endl;
	}
	return 0;
}
