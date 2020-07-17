#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{

int prn;
char name[15];
node *next;
public:
void insert(node* head);
void display(node* head);
void recursion(node *head);
void count(node *head);
void deletenode(node *head);
void merge(node *,node *);
};

void node::insert(node* head)
    {
	static int flag;
	node *temp;
	temp=head;
	node *t;
	t=new node;
	char ch;
	cout<<"\n\t Enter PRN :";
	cin>>t->prn;
	cout<<"\n\t Enter NAME :";
	cin>>t->name;
	t->next=NULL;
	cout<<"\nAdd \t1.Member (press m)\n\t2.President (press p)\n\t3.Secretary (press s)\n\tEnter your choice : ";
	cin>>ch;


		if(ch=='p')
		{
		if(temp->next==NULL)
		   {
		temp->next=t;
		   }
		else
		   {
		t->next=temp->next;
		temp->next=t;
		   }
		}

	       else if (ch=='s')
		{
		while(temp->next!=NULL)
		   {
		 temp=temp->next;
		   }
		temp->next=t;
		flag=1;
		}


	       else if(ch=='m')
		{
		if(flag!=1)
		   {
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=t;
		   }
		else
		{
		while(temp->next->next!=NULL)
		   {
		temp=temp->next;
		   }
		t->next=temp->next;
		temp->next=t;
		}

		}

     }



void node::display(node *head)
	{

	    node *temp;
	    temp=head->next;


	    while(temp!=NULL)
	    {
	    cout<<"(";
	    cout<<"PRN  :"<<temp->prn<<" & ";
	    cout<<"NAME  : "<<temp->name<<")\n";
	    temp=temp->next;
	    }

	 }


void node::recursion(node *head)
{
if(head->next==NULL)
   { return ; }
else
  {
  recursion(head->next);
  cout<<"(PRN  :"<<head->next->prn;
  cout<<" & NAME  : "<<head->next->name<<")\n";
  }
}

void node::count(node *head)
{
     int c=0;
     node *temp;
     temp=head->next;
     while(temp!=NULL)
     {
     c=c+1;
     temp=temp->next;
     }
     cout<<"No. of nodes are : "<<c<<"\n";
 }

 void node::deletenode(node *head)
 {
node *temp;
temp=head;
node *t;
t=new node;
int d;
cout<<"Enter PRN to delete : ";
cin>>d;
while(temp->next->prn!=d)
   {
   temp=temp->next;
   }
   t=temp->next;
   temp->next=t->next;
   delete t;
}


void node::merge(node *head,node *head1)
{
node *temp1;
temp1=new node;
temp1=head;

while(temp1->next!=NULL)
temp1=temp1->next;

temp1->next=head1->next;

cout<<"\nMerged list is :\n ";
display(head);
cout<<"\n";
}


int main()

    {
	int ch1;
	node n;
	node *head;
	head=new node;

	node *head1;
	head1=new node;


	while(1)
	{
	cout<<"\n 1.Insert \n 2.Create another list \n 3.Display \n 4.Reverse \n 5.Count no. of nodes\n 6.Delete node \n 7.Merged lists \n 8.Exit\nEnter choice : ";
	cin>>ch1;



	switch(ch1)
	{
	case 1:
	n.insert(head);
	break;

	case 2:
	n.insert(head1);
	break;

	case 3:
	cout<<"\n**********List1**********\n";
	n.display(head);

		cout<<"\n**********List2**********\n";
			n.display(head1);
	break;

	case 4:
	cout<<"\n**********List 1***************\n";
	n.recursion(head);
	cout<<"\n**********List 2***************\n";
	n.recursion(head1);
	break;

	case 5:
	cout<<"\n**********List 1***************\n";
	n.count(head);
	cout<<"\n**********List 2***************\n";
	n.count(head1);
	break;

	case 6:
	int a;
       cout<<"Which list's node you want to delete (press 1 or 2) ?";
       cin>>a;
       if(a==1) {
       cout<<"\n**********List 1***************\n";
	n.deletenode(head);   }
	else if(a==2){
	cout<<"\n**********List 2***************\n";
	n.deletenode(head1);   }
	break;

	case 7:
	n.merge(head,head1);
	break;

	case 8:
	exit(0);
	break;

	default:
	cout<<"Invalid choice ";
	break;
	}
	}
	return 0;
   }


output-


 1.Insert 
 2.Create another list 
 3.Display 
 4.Reverse 
 5.Count no. of nodes
 6.Delete node 
 7.Merged lists 
 8.Exit
Enter choice : 1

	 Enter PRN :1

	 Enter NAME :abc

Add 	1.Member (press m)
	2.President (press p)
	3.Secretary (press s)
	Enter your choice : p

 1.Insert 
 2.Create another list 
 3.Display 
 4.Reverse 
 5.Count no. of nodes
 6.Delete node 
 7.Merged lists 
 8.Exit
Enter choice : 1

	 Enter PRN :2

	 Enter NAME :pqr

Add 	1.Member (press m)
	2.President (press p)
	3.Secretary (press s)
	Enter your choice : m

 1.Insert 
 2.Create another list 
 3.Display 
 4.Reverse 
 5.Count no. of nodes
 6.Delete node 
 7.Merged lists 
 8.Exit
Enter choice : 1

	 Enter PRN :3

	 Enter NAME :xyz

Add 	1.Member (press m)
	2.President (press p)
	3.Secretary (press s)
	Enter your choice : s

 1.Insert 
 2.Create another list 
 3.Display 
 4.Reverse 
 5.Count no. of nodes
 6.Delete node 
 7.Merged lists 
 8.Exit
Enter choice : 3

**********List1**********
(PRN  :1 & NAME  : abc)
(PRN  :2 & NAME  : pqr)
(PRN  :3 & NAME  : xyz)

**********List2**********

 1.Insert 
 2.Create another list 
 3.Display 
 4.Reverse 
 5.Count no. of nodes
 6.Delete node 
 7.Merged lists 
 8.Exit
Enter choice : 4

**********List 1***************
(PRN  :3 & NAME  : xyz)
(PRN  :2 & NAME  : pqr)
(PRN  :1 & NAME  : abc)

 1.Insert 
 2.Create another list 
 3.Display 
 4.Reverse 
 5.Count no. of nodes
 6.Delete node 
 7.Merged lists 
 8.Exit
Enter choice : 8






