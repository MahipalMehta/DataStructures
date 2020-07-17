#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
int data;
node *next;
void insertend(node*,int);
void display(node*);
void deletenode(node*);
void sepr(node *head);
void merge(node*,node*);
void sort(node *);
};
void node::insertend(node*head, int d2)
{
node *temp;
temp=head;
node *t;
t=new node;
t->data=d2;
t->next=NULL;
     while(temp->next!=NULL)
     {
      temp=temp->next;
     }
temp->next=t;
}

void node::display(node *head)
{
node*temp;
temp=head->next;
cout<<"(";
     while(temp!=NULL)
     {
	cout<<""<<temp->data;
      temp=temp->next;
      cout<<",";
     }
cout<<")"<<"\n";
}

void node::sepr(node *head)
{
node *temp;
node *pshd,*nghd;
pshd=new node;
nghd=new node;
temp=head;

while(temp->next!=NULL)
  {
    if(temp->next->data<0)
    {
     insertend(nghd,temp->next->data);
     temp=temp->next;
    }
    else
    {
    insertend(pshd,temp->next->data);
    temp=temp->next;
    }
  }
  cout<<"\nNegative elements are = ";
  display(nghd);
  cout<<"\nPositive elements are = ";
  display(pshd);
  merge(pshd,nghd);
}
void node::deletenode(node *head)
{
node *temp;
temp=head;
node *t;
t=new node;
while(temp->next!=NULL)
{
   if(temp->next->data<0)
   {
    t=temp->next;
    temp->next=t->next;
    delete t;
 }
   else
  {
  temp=temp->next;
  }
}
temp=head->next;
cout<<"\n New list is :  ";
cout<<"(";
     while(temp!=NULL)
     {
	cout<<""<<temp->data;
      temp=temp->next;
      cout<<",";
     }
cout<<")";
}
void node::merge(node *pshd,node *nghd)
{
node *temp1,*temp2,*ss;
temp1=new node;
temp2=new node;
ss=new node;
temp1=pshd->next;
temp2=nghd->next;
while(temp1!=NULL)
{
insertend(ss,temp1->data);
temp1=temp1->next;
}
   while(temp2!=NULL)
   {
insertend(ss,temp2->data);
temp2=temp2->next
   }
cout<<"\nMerged list is : ";
display(ss);
sort(ss);
}
     
void node :: sort(node *head)
{
  int temp1;
  node *sorted;
  sorted=new node;
  node *temp;
  node *current;
  temp=head->next;

while(temp!=NULL)
   {
       current=temp->next;
	   while(current!=NULL)
	    {
		 if(temp->data > current->data)
			{
			  temp1=current->data;
			  current->data=temp->data;
			  temp->data=temp1;
			  current=current->next;
			}
		  else
			{
		current=current->next;
			}
	   }
	insertend(sorted,temp->data);
	temp=temp->next;
}
  cout<<"\nsorted list:\t";
   display(sorted);
  }
int main()
{
node *head;
head=new node;
node n;
while(1)
{
int ch;
cout<<"\n\n1.Insert Elements\n2.Display List\n3.Delete Elements\n4.Separate , Merge and sort the lists\n5.exit\nEnter your Choice: ";
cin>>ch;
switch(ch)
{
case 1:
	 {
	   int m,i=0,d2;
	cout<<"\nEnter Number of elements you want to insert : ";
	   cin>>m;
	   while(i<m)
	    {
	     cout<<"\nEnter data value :";
	     cin>>d2;
	     n.insertend(head,d2);
	     i++;
	    }
	  break;
	}
case 2:
       {
	n.display(head);
	break;
       }
case 3:n.deletenode(head);
       break;
case 4:
      n.sepr(head);
      break;
case 5: exit(0);
break;
 }
}
return 0;
}
output-
1.Insert Elements
2.Display List
3.Delete Elements
4.Separate , Merge and sort the lists
5.exit
Enter your Choice: 1
Enter Number of elements you want to insert : 5

Enter data value :-1
Enter data value :2
Enter data value :-4
Enter data value :5
Enter data value :-2

1.Insert Elements
2.Display List
3.Delete Elements
4.Separate , Merge and sort the lists
5.exit
Enter your Choice: 4
Negative elements are = (-1,-4,-2,)
Positive elements are = (2,5,)
Merged list is : (2,5,-1,-4,-2,)
sorted list:	(-4,-2,-1,2,5,)

1.Insert Elements
2.Display List
3.Delete Elements
4.Separate , Merge and sort the lists
5.exit
Enter your Choice: 5

