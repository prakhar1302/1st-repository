#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{ ifstream in("input.txt",ios::in);
ofstream out("output.txt",ios::out);
float INT,p=1000.0,t,a,SI;
out<<"Rate\t INITIAL AMOUNT\t\t 5YR \t\t 10YR \t\t 15YR "<<endl;
out<<"INTEREST %\t in Rs"<<endl;
if(!in)
{cout<<"NOT FOUND";exit(1);
}

else{
while(!in.eof())
{
    in>>INT;
    out<<INT<<"\t\t"<<p<<"\t\t";
    for(int i=5;i<=15;i+=5)
    {
        float a=1000.0+(p*INT*i)/100;
        out<<a<<"\t\t";
    }
    out<<endl;
}
in.close();
}
out.close();
return 0;
}
