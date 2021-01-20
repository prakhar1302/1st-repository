#include<bits/stdc++.h>
using namespace std;
struct Stack
{
	int data;
	Stack *next;
};
Stack *top=nullptr;
Stack *Create(int data)
{
	Stack *S=new Stack;
	S->data=data;
	S->next=nullptr;
	return S;
}

void Display()
{	if(top==nullptr)
		{
			cout<<"Empty Stack";
			exit(1);
		}
	Stack *ptr=top;
	while(ptr!=nullptr)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	cout<<endl;
}
void Push(int data)
{	Stack *temp=Create(data);
	temp->next=top;
	top=temp;
}
int Pop()
{if(top==nullptr)
	{cout<<"Empty Stack";
	exit(1);}
int data=top->data;
Stack *ptr=top;
top=top->next;
delete ptr;
return data;
}
int main()
{int ch,val;
cout<<"1)Display\n";
cout<<"2)Push\n";
cout<<"3)Pop\n";
cout<<"4)Exit\n";

do
{cout<<"Enter choice: ";cin>>ch;
switch(ch)
	{
	case 1:{
		Display();
		break;
	}
	case 2:{
		cout<<"Enter a value: ";cin>>val;
		Push(val);
		break;}
	case 3:{cout<<"Element popped :"<<Pop();break;}
	case 4:{cout<<"Exit"<<endl;break;}
	default:{
		cout<<"Wrong choice.........\n";
	}
}
cout<<endl;
}while(ch!='4');

return 0;
}



























