#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *link;
}*start=NULL,*root,*temp,*prv=NULL,*q,*ptr;
int main()
{
	int repeat,choice,i,j,k,no;
	cout<<"Enter the no of nodes\n";
	cin>>no;
	cout<<"Enter the data\n";
	for(i=0;i<no;i++)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		cin>>ptr->data;
		ptr->link=NULL;
		if(start==NULL)
			start=ptr;
		else
		{
			for(temp=start;temp->link!=NULL;temp=temp->link)
			{}
			temp->link=ptr;
		}
	}
//	for(temp=start;temp!=NULL;temp=temp->link)		//loop for display current nodes
//		cout<<temp->data;
		
	for(q=start;q->link!=NULL;q=q->link)
	{
	}root=q;
	//cout<<q->data;	checkline
	while(prv!=start)
	{	
		temp=start;
		while(temp!=q)
		{
			prv=temp;
			temp=temp->link;
		}
		temp->link=prv;
		temp=prv;
		prv->link=NULL;
		q=temp;	
	//	cout<<temp->data<<endl<<prv->data; 		checkline
	}
	cout<<"Reverse of the linked list is"<<endl;
	for(temp=root;temp!=NULL;temp=temp->link)
	{
		cout<<"->"<<temp->data<<" ";
	}
	return(0);
}
