#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct Node
{
	int data;
	Node *next;
	Node(int d,Node *n)
	{
		data=d;
		next=n;
	}
};

class List
{
	public:
	Node *start,*curr;
	List()
	{
	 start=curr=NULL;
	}
	void add(int d)
	{
		if(start==NULL)
		{
		start=new Node(d,start);
		curr=start;
		}
		else
		{
		Node *temp;
		temp=new Node(d,NULL);
		curr->next=temp;
		curr=temp;
		}
	}
	void dis()
	{
	while(start!=NULL)
	{
		cout<<endl<<"   "<<start->data;
		start=start->next;
	}
	}
};
void main()
{
	clrscr();
	List ob;
	ob.add(11);
	ob.add(22);
	ob.add(33);
	ob.add(44);
	ob.dis();
	/*
	Node *start=NULL,*t1,*t2,*t3;
	start=new Node(11,start);

	t1=new Node(22,NULL);
	start->next=t1;

	t2=new Node(33,NULL);
	t1->next=t2;

	t3=new Node(44,NULL);
	t2->next=t3;

	while(start!=NULL)
	{
		cout<<endl<<"   "<<start->data;
		start=start->next;
	}
	  */
	getch();
}
