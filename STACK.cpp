#include<iostream>
#define n 100
using namespace std;

class stack
{
	private:
		int top;
		int * arr;
		
	public:
		stack()
		{
			arr=new int[n];
			top=-1;
		}	
		void push(int data)
		{
			if(top==n-1)
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
		void pop()
		{
			if(top==-1)
			{
				cout<<"NO ELEMENT TO POP "<<endl;
				return;
			}
			else
			{
				top--;
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
		
		bool empty()
		{
			return top=-1;
		}
};

int main()
{
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	st.pop();
	cout<<st.empty();	
	return 0;
	
}
