#include<iostream>
using namespace std;

char arr[53]={'(','(','a','+','b',')','+','(','c','+','d',')'};
class stack
{
	private:
		int top;
	
		
	public:
		stack()
		{
			
			top=-1;
		}	
		void push(int data)
		{
			if(top==53-1)
			{
				cout<<"STACK OVERFLOW "<<endl;
				return;
			}
			else
			{
				top++;
				arr[top]=data;
			}	
		}
		int Top()
		{
			if(top==-1)
			{
				cout<<"NO ELEMENT IN STACK "<<endl;
				return -1;
			}
			else
			{
				return arr[top];
			}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"UN-BALANCED "<<endl;
				return;
			}
			else
			{
				cout<<"BALANCED "<<endl;
				top--;
				return;
				
			}
			
		}
};
int main()
{
	stack st;
	
	for(int i=0;i<13;i++)
	{
		if(arr[i]=='(')
		{
			st.push('(');
		}
		else if (arr[i]==')')
		{
			st.pop();
			
		}
		
		
		
	}
	
}
