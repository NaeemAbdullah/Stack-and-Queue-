#include<iostream>
using namespace std;

class Queue
{
	private:
		int rear;
		int front;
		int*arr;
		int size;
	public:
		Queue(int s)
		{
			rear=-1;
			front=-1;
			size=s;
			arr=new int[size];
		}
		void enqueue(int a)
		{
			if(rear==size-1)
			{
				cout<<"QUEUE IS FULL ";
			}
			else
			{
				rear++;
				arr[rear]=a;
				cout<<arr[rear]<<endl;
			}
		}
		int Dequeue()
		{
			int x=-1;
			if(rear==front)
			{
				cout<<"QUEUE IS EMPTY "<<endl;
			}
			else
			{
				front++;
				x=arr[front];
				return x;
				cout<<x;	
			}
			
		}
};

int main()
{
	Queue*obj=new Queue(5);
	obj->enqueue(10);
	obj->enqueue(20);
	obj->enqueue(30);
	obj->enqueue(40);
	obj->enqueue(50);
	
	obj->Dequeue();
	obj->Dequeue();
	obj->Dequeue();
	obj->Dequeue();
	obj->Dequeue();
}
