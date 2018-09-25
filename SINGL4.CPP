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
void main()
{
	clrscr();
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

	getch();
}
