#include <iostream>
using namespace std;

int main() {
	int test;cin>>test;
	for(int z=0;z<test;z++)
	{
        int n,i,j,b,p=1;
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++){
            b=i;
            for(j=0;j<=i;j++){
                a[j][b]=p;
                p++;
                b--;
            }
        }
        for(i=1;i<n;i++){
            b=i;
            for(j=n-1;j>=i;j--){
                a[b][j]=p;
                p++;
                b++;
            }
        }
         for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}
