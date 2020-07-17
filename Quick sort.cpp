#include<iostream>
using namespace std;
#include<stdlib.h>

void quick(int *,int,int,int );

void quick(int a[],int l,int u,int n)
{ 
  static int c=1;
  int p,temp,m;
  if(l<u)
  {
    p=a[l];
    int i=l;
    int j=u;

   while(i<j)
   {
     while(a[i]<=p && i<=j)
      i++;
     while(a[j]>=p&&i<=j)
     j--;

   if(i<=j)
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
  }

  temp=a[j];
  a[j]=a[l];
  a[l]=temp;

  cout<<"\nIteration "<<c <<": ";
  for(m=0;m<n;m++)
  cout<<"\t"<<a[m];
  c++;
  quick(a,l,j-1,n);
  quick(a,j+1,u,n);
 }
}

int main()
{
int a[10],l,u,ch,i,j,n;
cout<<"\n Enter number of Students : ";
cin>>n;
l=0;
u=n-1;


  while(1)
  {
   cout<<"\n\n1.Insert\n2.Quick sort\n3.Display\n4.Display top 5\n5.Exit\n\tEnter Choice :  ";
  
    cin>>ch;

    switch(ch)
    {
    case 1:
 	cout<<"***Record of marks***\n"; 

        for(i=0;i<n;i++)
{
cout<<"\nEnter Marks of student "<<i+1<<"  : ";
            cin>>a[i];
}
            break;

    case 2:
         quick(a,l,u,n);
         break;

    case 3:
        cout<<"\n****Sorted list****\n";
        for(i=0;i<n;i++)
        cout<<"\t"<<a[i];
            break;

    case 4:
        cout<<"\n***Top 5***\n";
      for(i=n-1;i>n-6;i--)
      {
           cout<<"\t"<<a[i];
      } 

        break;

    case 5: exit(0);
    }
  }
    }


output-

Enter number of Students : 8

1.Insert
2.Quick sort
3.Display
4.Display top 5
5.Exit
	Enter Choice :  1
***Record of marks***

Enter Marks of student 1  : 10
Enter Marks of student 2  : 4
Enter Marks of student 3  : 8
Enter Marks of student 4  : 6
Enter Marks of student 5  : 9
Enter Marks of student 6  : 10
Enter Marks of student 7  : 7
Enter Marks of student 8  : 8

1.Insert
2.Quick sort
3.Display
4.Display top 5
5.Exit
	Enter Choice :  2

Iteration 1: 	8	4	8	6	9	10	7	10
Iteration 2: 	7	4	8	6	8	10	9	10
Iteration 3: 	6	4	7	8	8	10	9	10
Iteration 4: 	4	6	7	8	8	10	9	10
Iteration 5: 	4	6	7	8	8	9	10	10

1.Insert
2.Quick sort
3.Display
4.Display top 5
5.Exit
	Enter Choice :  4

***Top 5***
	10	10	9	8	8

1.Insert
2.Quick sort
3.Display
4.Display top 5
5.Exit
	Enter Choice :  5

