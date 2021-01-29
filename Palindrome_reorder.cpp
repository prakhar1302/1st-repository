#include<bits/stdc++.h>
using namespace std;
int main()
{string s;cin>>s;
int size=s.size();
int ch[26]={0};
for(int i=0;i<size;i++)
    ch[s[i]-65]++;
int c=0;
for(int i=0;i<26;i++)
{
    if(ch[i]%2!=0)
        c++;
}
if(c>1)
    cout<<"NO SOLUTION";
else{
    vector <char> s1,s2;
    for(int i=0;i<26;i++)
    {
        if(ch[i]%2==0)
        {
          int x=ch[i]/2;
          while(x--)
          {
              s1.push_back(i+65);
          }
        }
        else
        {
            while(ch[i]--)
            {
                s2.push_back(i+65);
            }
        }

    }
    for(int i=0;i<s1.size();i++)
        cout<<s1[i];
    for(int j=0;j<s2.size();j++)
        cout<<s2[j];
    for(int i=s1.size()-1;i>=0;i--)
        cout<<s1[i];
}
return 0;
}

