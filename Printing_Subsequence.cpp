#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int arr[4];
	    for(int k=0;k<4;k++)
	        cin>>arr[k];
	    int tot=1<<4;int sum;
	    for(int n=1;n<tot;n++)
	    {
	        sum=0;
	        for(int i=0;i<n;i++)
	        {   int f=1<<i;
	            if((n&f)!=0)
	                sum+=arr[i];
	        }
	        if(sum==0)
	            {cout<<"Yes"<<endl;break;}
	       }
	       if(sum!=0)
	        cout<<"No"<<endl;
	}
	return 0;
}
