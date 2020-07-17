#include<iostream>
#include<stdlib.h>
using namespace std;
class sort
{
private:
float array[10];
int n;
public:
void getdata(int);
void shells(int);
};
//getdata
void sort::getdata(int n)
{
int i;
for(i=0;i<n;i++)
  {
cout<<"\nEnter Marks of student "<<i+1<<"  : ";
cin>>array[i];
  }
}


 //shell
 void sort:: shells(int n)
 {
 int i,j,k,d,c;
 static int z;
 d=(n-1)/2;
 float temp;
 for(i=d;i>=1;i=i/2)
  { 
  for(j=i;j<n;j++)
  {
   temp=array[j];
   k=j-i;
   
    while((k>=0)&&(temp<array[k]))
    {
    array[k+i]=array[k];
    k=k-i;
    }
  array[k+i]=temp;
  }
  z++;
  cout<<"\nIteration no. "<<z<<" : ";
  for(k=0;k<n;k++)
  cout<<"\t"<<array[k];
 }
 
  cout<<"\n\nHighest 5 marks are :\n";
  for(k=n-1;k>=n-5;k--)
  cout<<array[k]<<"\t";
  cout<<"\n";
  }
 
//main
 int main()
{
sort s;
int ch,n;

cout<<"\nEnter your choice :\n 1.Shell Sort\n 2. Exit\t choice :  ";
cin>>ch;
switch(ch)
{
 
case 1:  
   cout<<"\nEnter total no. of Students : ";
    cin>>n; 
    s.getdata(n);
    s.shells(n);
    break;
    
case 2: exit(0);
break;

default : cout<<"Enter valid Choice : ";
break;  
}
return 0;
}

output -  


Enter your choice :
 1.Shell Sort
 2.Exit
	 choice :  1

Enter total no. of Students : 8

Enter Marks of student 1  : 10
Enter Marks of student 2  : 10
Enter Marks of student 3  : 9
Enter Marks of student 4  : 8
Enter Marks of student 5  : 6
Enter Marks of student 6  : 7
Enter Marks of student 7  : 4
Enter Marks of student 8  : 0

Iteration no. 1 : 	4	0	7	8	6	9	10	10
Iteration no. 2 : 	0	4	6	7	8	9	10	10

Highest 5 marks are :
10	10	9	8	7	




