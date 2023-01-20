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
			size=s;
			rear=front=-1;
			arr=new int[size];
		}
		void enqueu(int data)
		{
			if((front==0 && rear==size-1)||(rear==(front-1)%(size-1)))
			{
				cout<<"QUEUE IS FULL ";
			}
			else if(front==-1)
			{
				front=rear=0;
				arr[rear]=data;
				cout<<arr[rear]<<endl;
			}
			else if (rear==size-1 && front!=0)
			{
				rear=0;
				arr[rear]=data;
			}
			else
			{
				rear++;
				arr[rear]=data;
				cout<<arr[rear]<<endl;
			}
		}
		
		int dequeue()
		{
			if(front==-1)
			{
				cout<<"QUEUE IS EMPTY ";
				return -1;
			}
			int x=-1;
			x=arr[front];
			if(front==rear)
			{
				front=rear=-1;
				
			}
			else if(front==size-1)
			{
				front=0;
			}
			else
			{
				front++;
			}
			return x;
		}
};

int main()
{
	Queue*q=new Queue(4);
	q->enqueu(10);
	q->enqueu(20);
	q->enqueu(30);
	q->enqueu(40);
	q->dequeue();
	q->dequeue();
	q->enqueu(200);
	
}
