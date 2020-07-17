#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
int roll,m;
node *next;
public:
void intersection(node *head, node *head1);
void insert(node *head,int d2);
void display(node *head);
int compare(int a,node *temp1);
void unio(node *head,node *head1);
void onlyv(node *head,node *head1);
void onlyb(node *head,node *head1);
void non(node *head,node *head1);
int comp(node *head,int i);
};
//insert
void node::insert(node *head,int d2)
{
node *temp;
temp=head;
node *t;
t=new node;
t->roll=d2;
t->next=NULL;
     while(temp->next!=NULL)
     {
      temp=temp->next;
     }
temp->next=t;
}

//display
void node::display(node *head)
{
node *temp;
temp=head->next;
cout<<"(";
     while(temp!=NULL)
     {
      cout<<""<<temp->roll;
      temp=temp->next;
      cout<<",";
     }
cout<<")"<<"\n";
}

//intersection
void node::intersection(node *head, node *head1)
{
node *temp,*inter;
temp=head->next;
inter=new node;
while(temp!=NULL)
{
if((compare(temp->roll,head1)==0))
{
insert(inter,temp->roll);
temp=temp->next;
}
else temp=temp->next;
}
cout<<"\nIntersection is : ";
display(inter);
}

//compare 1
int node::compare(int a,node *head1)
{
node *temp1;
temp1=new node;
temp1=head1->next;
while(temp1!=NULL)
{
if(temp1->roll==a)
  {
return 0;
  }
else
temp1=temp1->next;
}
return 1;
}

//union
void node::unio(node *head,node *head1)
{
node *uni,*temp;
uni=head;
temp=head1->next;
while(temp!=NULL)
{
if((compare(temp->roll,head)==0))
{
temp=temp->next;
}
else
{
insert(uni,temp->roll);
temp=temp->next;
}
}
cout<<"Union is : "<<endl;
display(uni);
}

//only vanilla
void node::onlyv(node *head,node *head1)
{
node *van,*temp;
van=new node;
temp=head->next;
while(temp!=NULL)
{
if((compare(temp->roll,head1)==0))
{
temp=temp->next;
}
else
{
insert(van,temp->roll);
temp=temp->next;
}
}
cout<<"students who like Only Vanilla  : "<<endl;
display(van);
}

//only butterscotch
void node::onlyb(node *head,node *head1)
{
node *but,*temp1;
but=new node;
temp1=head1->next;
while(temp1!=NULL)
{
if((compare(temp1->roll,head))==0)
{
temp1=temp1->next;
}
else
{
insert(but,temp1->roll);
temp1=temp1->next;
}
}
cout<<"students who like Only Butterscotch  : "<<endl;
display(but);
}

//neither ...nor
void node::non(node *head,node *head1)
{
int i=1,c=0;
cout<<"\nEnter total no. of students : ";
cin>>m;
node *no,*temp1,*temp2;
no=new node;
temp1=head->next;
temp2=head1->next;
while(i<=m)
{
  if(((comp(temp1,i))==0)&&((comp(temp2,i))==0))
  {
    insert(no,i);
    c=c+1;
  }
  i++;
} 
cout<<"No. of students who dont like Neither Vanilla nor Butterscotch : "<<c;
cout<<"Roll nos : "<<endl;
display(no);
}

//compare 
int node::comp(node *head,int i)
{
node *temp1;
temp1=head;
while(temp1!=NULL)
   {
    if(i==temp1->roll)
    return 1;
    temp1=temp1->next;
   }
   return 0;
}   

//main
int main()
{
node n;
node *head,*head1;
int d,d1,v,b,ch,i;
head1=new node;
head=new node;
cout<<"\nEnter no. of students who like Vanilla:  ";
cin>>v;
for(i=0;i<v;i++)
{
cout<<"\nEnter roll no: ";
cin>>d;
n.insert(head,d);
}
cout<<"\nEnter no. of students who like Butterscotch:   ";
cin>>b;
for(i=0;i<b;i++)
{
cout<<"\nEnter roll no: ";
cin>>d1;
n.insert(head1,d1);
}

while(1)
{
cout<<"\n1.Display\n2.Intersection\n3.Union\n4.Only Vanilla\n5.Only Butterscotch\n6.Neither Vanilla nor Butterscotch\n7.exit\n\tEnter your choice : ";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nStudents who like Vanilla are : ";
n.display(head);
cout<<"\nStudents who like Butterscotch are : ";
n.display(head1);
break;

case 2:
n.intersection(head,head1);
break;

case 3:
n.unio(head,head1);
break;

case 4:
n.onlyv(head,head1);
break;

case 5:
n.onlyb(head,head1);
break;

case 6:

n.non(head,head1);
break;


case 7:
exit(0);
break;
}

}
return 0;
  }

output -


Enter no. of students who like Vanilla:  4

Enter roll no: 1

Enter roll no: 2

Enter roll no: 3

Enter roll no: 4

Enter no. of students who like Butterscotch:   3

Enter roll no: 2

Enter roll no: 3

Enter roll no: 5

1.Display
2.Intersection
3.Union
4.Only Vanilla
5.Only Butterscotch
6.Neither Vanilla nor Butterscotch
7.exit
	Enter your choice : 1

Students who like Vanilla are : (1,2,3,4,)

Students who like Butterscotch are : (2,3,5,)

1.Display
2.Intersection
3.Union
4.Only Vanilla
5.Only Butterscotch
6.Neither Vanilla nor Butterscotch
7.exit
	Enter your choice : 4
students who like Only Vanilla  : 
(1,4,)

1.Display
2.Intersection
3.Union
4.Only Vanilla
5.Only Butterscotch
6.Neither Vanilla nor Butterscotch
7.exit
	Enter your choice : 3
Union is : 
(1,2,3,4,5,)

1.Display
2.Intersection
3.Union
4.Only Vanilla
5.Only Butterscotch
6.Neither Vanilla nor Butterscotch
7.exit
	Enter your choice : 6

Enter total no. of students : 7
No. of students who dont like Neither Vanilla nor Butterscotch : 2Roll nos :  (6,7,)

1.Display
2.Intersection
3.Union
4.Only Vanilla
5.Only Butterscotch
6.Neither Vanilla nor Butterscotch
7.exit
	Enter your choice : 7

