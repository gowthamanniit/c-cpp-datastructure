#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Node

{
      //	public:
	int data;
	Node *next;
 /*	Node(int d,Node *n=NULL):data(d),next(n)
	{
	}
 */
	Node(int d,Node *n)
	{
	 data=d;
	 next=n;
	}
};

class List
{
	private:
	Node *start;
	public:
	List()
	{
	start=NULL;
	}
	void addNode(int s)
	{
		  //cout<<"first time start:"<<start;
		  printf("\n start address : %x %d %x",start,start->data,start->next);
		  if(start==NULL || start!=NULL)// || s<=start->data)
		  {
		  start=new Node(s,start);
//		  cout<<"second time start:"<<start;
//		  printf("\n second time address : %d %d %d",start,start->data);
		  return;
	}

	/*	Node *prev,*curr;
		for(prev=curr=start;curr!=NULL && s>curr->data;prev=curr,curr=curr->next)
		{
		 //-===
		}
		Node *n=new Node(s,curr);
		prev->next=n;
	*/
	}

	void traverse()
	{
	  printf("\n start address : %x %d %x",start,start->data,start->next);
		cout<<"\n";
	 for(Node *temp=start;temp!=NULL;temp=temp->next)
	 {
	  cout<<"address="<<temp->next<<"data ="<<temp->data<<" -->  "<<endl;
	 }
	}
};
void main()
{
	clrscr();
	List obj;
//	int s;
//	cout<<"Enter data:";
//	cin>>s;
	obj.addNode(30);
	obj.addNode(20);
	obj.addNode(3);
	obj.addNode(10);
	obj.addNode(5);
	obj.traverse();
	getch();

}