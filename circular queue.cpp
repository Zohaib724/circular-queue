#include<iostream>
using namespace std;
class A{
	public:
		int q[100];
		int max_size;
		int front=-1,rear=-1;
		int isfull()
		{
			if((rear+1)%max_size==front)
			return 1;
			else
			return 0;
		}
		int isempty()
		{
			if(front==-1&&rear==-1)
			return 1;
			else
			return 0;
			
		}
		void insert(int v)
		{
			int x=isfull();
			if(x==1)
			cout<<"overflow";
			else if(isempty()==1)
			{
				front=0,rear=0;
				q[rear]=v;
			}
			 else
			 	{
			 	rear=(rear+1)%max_size;
			 	q[rear]=v;
			 	}
		}
		void pop()
		{
			if(isempty()==1){
				cout<<"underflow";
			}
			else if(front==rear){
				cout<<"deleted element is"<<q[front];
				front=-1,rear=-1;
			}
			else{
				cout<<"deleted element is"<<q[front];
				front=(front+1)%max_size;
			}
		}
		void display()
		{
			if(isempty()==1)
			cout<<"underflow";
			else{
				if(front<rear)
				{
				
			for(int i=front;i<=rear;i++)
			{
				cout<<q[i];
			}
	 	}
		else
		{
			for(int i=front;i<max_size;i++)
			{
				cout<<q[i];
			}
			for(int i=0;i<=rear;i++)
			{
				cout<<q[i];
			}
		}
		}
			}
		
}ob;
int main()
{
	cout<<"enter the size of the queue";
	cin>>ob.max_size;
	cout<<"enter your choice";
	int c;
	while(c!=4)
	{
		cout<<"\n 1.Push \n 2.Pop \n 3.Display \n 4.exit \n";
		cin>>c;
		switch(c){
		case 1:cout<<"enter the value to be inserted";
				int v;
				cin>>v;
				ob.insert(v);
				break;
		case 2:ob.pop();
				break;		
		case 3:ob.display();
				break;
		case 4:exit;
			break;
		default:cout<<"wrong input";		
		}
	}
	return 0;
}
