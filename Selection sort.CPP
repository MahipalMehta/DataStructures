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
void selection();
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


void sort ::selection()
{
	int i=0,j,k;
	float  min,temp;
	for(i=0;i<n;i++)
	{
	min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
			min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
  cout<<" \nIteration "<<i+1<<" :";
  for(k=0;k<n;k++)
  cout<<"\t"<<a[k];
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
int main()
{
sort s;
int ch;
cout<<"\nEnter your choice :\n \n 1.Selection Sort\n 2.Exit\n\t choice :  ";
cin>>ch;
switch(ch)
{

 case 1:
  s.getdata();
  s.selection();
  break;
 case 2:
 exit(0);
}
return 0;
}

output-

Enter your choice :
 
 1.Selection Sort
 2.Exit
	 choice :  1


Enter total no. of students : 7
Enter the Marks of student 1: 10
Enter the Marks of student 2: 9
Enter the Marks of student 3: 6
Enter the Marks of student 4: 7.5
Enter the Marks of student 5: 4.9
Enter the Marks of student 6: 6.1
Enter the Marks of student 7: 9.9
 
Iteration 1 :	4.9	9	6	7.5	10	6.1	9.9 
Iteration 2 :	4.9	6	9	7.5	10	6.1	9.9 
Iteration 3 :	4.9	6	6.1	7.5	10	9	9.9 
Iteration 4 :	4.9	6	6.1	7.5	10	9	9.9 
Iteration 5 :	4.9	6	6.1	7.5	9	10	9.9 
Iteration 6 :	4.9	6	6.1	7.5	9	9.9	10 
Iteration 7 :	4.9	6	6.1	7.5	9	9.9	10

Sorted nos. are : 4.9	6	6.1	7.5	9	9.9	10	

Highest marks are :
10	9.9	9	7.5	6.1	













