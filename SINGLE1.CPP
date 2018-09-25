#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Node

{
 public:
 int data;
// char c;
 Node *link;
 Node(int d,Node *l=NULL)
 {
	data=d;
	link=l;
 }
};
void main()
{
	clrscr();
	Node *start=NULL;
	printf("%x ",start);
	start=new Node(30,start);
		printf("%d ",start);
	start=new Node(20,start);
		printf("%d ",start);
	start=new Node(3,start);
		printf("%d ",start);
	start=new Node(10,start);
		printf("%d ",start);
	start=new Node(5,start);
		printf("%d ",start);

		//traverse
	Node *temp; // garpage address

	temp=start;  // temp = start address

	printf("\n%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);
	temp=temp->link;
	printf("%d ",temp->data);



/*long *p;
cout<<sizeof(node);*/

/*	cout<<"data="<<obj.data<<"c="<<obj.c<<"k="<<k<<"   ";
	printf("\n\n hex link = %d",obj.link);
	cout<<endl<<obj.link;
*/
	getch();
}