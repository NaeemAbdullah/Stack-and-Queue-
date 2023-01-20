#include<iostream>
using namespace std;

class Queue
{
	private:
		int front;
		int rear;
		int*arr;
		int size;
		int*s1arr;
		int*s2arr;
	public:
		Queue(int s)
		{
			size=s;
			front=rear=-1;
			arr=new int[s];
		}
		void Enqueu(int x)
		{
			if(rear==size-1)
			{
				cout<<"QUEUE IS FULL "<<endl;
			}
			else
			{
				rear++;
				arr[rear]=x;
				cout<<arr[rear]<<endl;
			}
		}
		void stack1push(int data)
		{
			Enqueu(data);
			//stack1pop();
		}
		void stack1pop()
		{
			
			int a=Dequeue();
			Enqueu(a);
		}

		int Dequeue()
		{
			int x=-1;
			if(front==-1)
			{
				cout<<"QUEUE IS EMPTY "<<endl;
				
			}
			else
			{	
				front++;
				
			}		
			x=arr[front];
				return x;	
		}
};

int main()
{
	Queue*q=new Queue(30);
	q->stack1push(10);
	q->stack1push(20);
	q->stack1push(30);
	
	q->stack1pop();
	
	
}
