#include<iostream>
#include<stdlib.h>
using namespace std;
class sort
{
private:
float a[10];
int n;
public:
void getdata();
void bubble();
};

void sort::getdata()
{
int i;
cout<<"\nEnter total no. of students : ";
cin>>n;

for(i=0;i<n;i++)
  {
cout<<"\nEnter the Marks of student "<<i+1<<": ";
cin>>a[i];
  }
}

void sort::bubble()
{
int i,j,k;
float temp;
for(i=0;i<n;i++)
 {
  for(j=0;j<n-1;j++)
   {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
  cout<<" \nIteration "<<i+1<<" :";
  for(k=0;k<n;k++)
   {
  cout<<"\t"<<a[k];
   }
  }
  cout<<"\n\nSorted nos. are : ";
  for(i=0;i<n;i++)
  cout<<a[i]<<"\t";
cout<<"\n\nHighest marks are :\n";
  for(k=n-1;k>=n-5;k--)
  {
    cout<<a[k]<<"\t";
  }
}


}
int main()
{
sort s;
int ch;
cout<<"\nEnter your choice :\n 1.Bubble sort\n 2.Exit\n\t choice :  ";
cin>>ch;
switch(ch)
{
 case 1:
    s.getdata();
    s.bubble();
    break;
 
 case 2:
 exit(0);
}
return 0;
}

output-

Enter your choice :
 1.Bubble sort
 2.Exit
	 choice :  1

Enter total no. of students : 7
Enter the Marks of student 1: 10
Enter the Marks of student 2: 8
Enter the Marks of student 3: 9
Enter the Marks of student 4: 6
Enter the Marks of student 5: 4
Enter the Marks of student 6: 9
Enter the Marks of student 7: 7.6
 
Iteration 1 :	8	9	6	4	9	7.6	10 
Iteration 2 :	8	6	4	9	7.6	9	10 
Iteration 3 :	6	4	8	7.6	9	9	10 
Iteration 4 :	4	6	7.6	8	9	9	10 
Iteration 5 :	4	6	7.6	8	9	9	10 
Iteration 6 :	4	6	7.6	8	9	9	10 
Iteration 7 :	4	6	7.6	8	9	9	10

Sorted nos. are : 4	6	7.6	8	9	9	10	

Highest marks are :
10	9	9	8	7.6	












