#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Node
{
	int data;
	Node *next;
};
void main()
{
	clrscr();
	Node *start,*temp; // garbage addres
	start=NULL;  // address NULL stored

		start=new Node(); // new memory allocated
				printf(" %d ",start);

		start->data=100;
		start->next=NULL;
		temp=start;
		temp1=start; // or temp (same order print)

		start=new Node();
				printf(" %d ",start);
		start->data=200;
		start->next=temp;
		temp=start;

		start=new Node();
				printf(" %d ",start);
		start->data=300;
		start->next=temp;
		temp=start;

		while(temp!=NULL)
		{
			cout<<endl<<"  "<<temp->data; // 300 address
			temp=temp->next;    // 200 address
		}


	getch();
}

