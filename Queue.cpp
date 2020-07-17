#include<iostream>
using namespace std;
#include<stdio.h>
#define size 5
#include<stdlib.h>

int q[size],front=0,rear=0;


int main()
{
int ch;
void enqueue();
void dequeue();
void display();

while(1)
{
cout<<"\n1.Add Job\n2.Remove\n3.Display\n4.Exit\n\tEnter choice : ";
cin>>ch;
switch(ch)
{
 case 1: enqueue();
          break;
 case 2: dequeue();
          break;
 case 3: display();
          break;
 case 4: exit(0);
         break;
 default : 
        cout<<"\n*** Enter valid choice : ";
        break;
 }
 }
 return 0;
 }
 
 void enqueue()
 {
  int no;
  
  if(rear==size)
  {
  cout<<"\n*** Queue is Full ! ***\n";
 
  }
  else
  {
  cout<<"\nEnter the job no . :";
  cin>>no;
  q[rear++]=no;
  }
 }     
 
 void dequeue()
 {
   int no;
   if(front==rear)
   {
   cout<<"***Queue is Empty ! ***\n";
   }
   else
   {
   no=q[front];
   front++;
   cout<<"\n"<<no<<" removed from queue .. \n";
   }
  }
  
 void display()
 {
  int i,temp=front;
  if(front==rear)
  cout<<"\n***Queue is Empty !*** \n";
  else
  {
    cout<<"Element in the Queue : ";
    
    for(i=temp;i<rear;i++)
    {
    cout<<q[i]<<" ";
    }
    cout<<"\n";
  }
 }                

output - 

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 1
Enter the job no . :1

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 1
Enter the job no . :2

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 1
Enter the job no . :3

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 2
1 removed from queue .. 

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 2
2 removed from queue .. 

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 1
Enter the job no . :4

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 3
Element in the Queue : 3   4 

1.Add Job
2.Remove
3.Display
4.Exit
	Enter choice : 4

