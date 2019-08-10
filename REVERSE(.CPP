//wap for reverse a singly linked list
#include<iostream.>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{ int data;
  struct node *next;
}*start=NULL,*ptr,*temp;
int main()
{ int no,i=0;
//clrscr();
  cout<<"Enter the no of node you want to creat\n";
  cin>>no;
  while(i<no)
  { ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    cout<<"Enter the data\n";
    cin>>ptr->data;
    temp=start;
    while(temp->next!=NULL)
		{
			cout<<"hii";
			temp=temp->next;
		}
    temp->next=ptr;
    i++;
  }
  cout<<"Here is your current linked list\n";
  temp=start;
  while(temp->next!=NULL)
  { temp=temp->next;
    cout<<temp->data<<endl;
  }

 /* ptr=start;
  temp=ptr->next;
  while(temp!=NULL)
  { ptr->next=temp->next;
    temp->next=start;
    start=temp;
    temp=ptr->next;
  }*/
  ptr=start;
  temp=start->next;
  while(temp!=NULL)
  { ptr->next=temp->next;
    temp->next=start;
    start=temp;
    temp=ptr->next;
  }
  cout<<"The linked list after reversal\n";
   temp=start;
  while(temp!=NULL)
  { cout<<temp->data;
    temp=temp->next;
  }
  return(0);
  //getch();
}
