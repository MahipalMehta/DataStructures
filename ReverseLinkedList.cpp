
#include <iostream>
#include<stdlib.h>
using namespace std;
class node
{
    int data;
    node *next;
    public:
    void insertend(node*,int);
    void display(node*);
    void display1(node*);
    void reverse(node *);
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
cout<<")"<<"\n\n";
}

void node::display1(node *head)
{
node*temp;
temp=head;
cout<<"(";
     while(temp!=NULL)
     {

      cout<<""<<temp->data;
      temp=temp->next;
      cout<<",";
     }
cout<<")"<<"\n\n";
}

void node::reverse(node *head)
{
    node *next1,*curr,*prev;
    
  /*  prev=head->next;
    curr=head->next;
    prev->next=NULL;*/
    
    curr=head->next;
    prev=NULL;
    next1=NULL;
  
    while(curr!=NULL)
   {
   if(curr==NULL)
  return;
  else{
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
        }
    }
     head=prev;
    display1(head);
}

int main()
{
    
node *head;
head=new node;

node n;

int ch;
while(1)
{
cout<<"\n\n"<<"1.Insert Elements\n2.Display List\n3.Reverse the list \n4.exit\nEnter your Choice: ";
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
case 3:n.reverse(head);
       break;
case 4:exit(0);
break;
    }
    }
    return 0;

}

output -

1.Insert Elements
2.Display List
3.Reverse the list 
4.exit
Enter your Choice: 1
Enter Number of elements you want to insert : 5

Enter data value :1
Enter data value :2
Enter data value :3
Enter data value :4
Enter data value :5

1.Insert Elements
2.Display List
3.Reverse the list 
4.exit
Enter your Choice: 2
(1,2,3,4,5,)

1.Insert Elements
2.Display List
3.Reverse the list 
4.exit
Enter your Choice: 3
(5,4,3,2,1,)

1.Insert Elements
2.Display List
3.Reverse the list 
4.exit
Enter your Choice: 4


