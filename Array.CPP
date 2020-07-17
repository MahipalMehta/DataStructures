#include<iostream>
using namespace std;

class se
{

int n,mark[5],ab[5],cnt;
float avr;
public:
    void getdata();
    void avg();
    void absent();
    void maximum();
    void minimum();
    void maxmarks();

};

 void se::getdata()
{

cout<<"enter number of students:";
cin>>n;
cout<<"\nenter marks of students: \t(Enter -1 for absent)\n";
	for(int i=1;i<=n;i++)
	{
	cin>>mark[i];
	}
}
 void se::avg()
{
  float avrg;
  int i,sum=0,cnt=0;

 for( i=1;i<=n;i++)
  {
   if(mark[i]!= -1)
    {
   sum=sum+mark[i];
   cnt++;
    }
  }
   avrg=sum/cnt;
   cout<<"Average= "<<avrg;
}


 void se::absent()
{
  int i,cnt=0;
  for(i=1;i<=n;i++)
  {
  if(mark[i]== -1)
  cnt++;
  }
   cout<<"No. of Absent students : "<<cnt;
  cout<<"\nAbsent numbers are:";
  for(i=1;i<=n;i++)
  {
  if(mark[i]== -1)
     {
     cout<<i<<"\t";
     }
  }
}
void se::maximum()

{
	int i,t=0;
	for(i=1;i<=n;i++)
	{
	      if(mark[i]>t)
	      {
	      t=mark[i];
	      }
	}
	for(i=1;i<=n;i++)
	{
		if(t==mark[i])
		{
		cout<<"\n\t\tRoll No  "<<i<<" got"<<" maximum "<<t<<" marks";
		}
	}
}

void se::minimum()

{
	int i=1;
	int t=mark[i];
      for(i=1;i<=n;i++)
      {
	if((mark[i]<t)&&(mark[i]>=0))
	{
	t=mark[i];
	}
      }
      for(i=1;i<=n;i++)
	 {
	 if(t==mark[i])
	 {
       cout<<"\n\tRoll No "<<i<<" got "<<" minimum "<<t<<" marks";
	 }
      }
}


void se::maxmarks()
{
int cnt,i,j,t,high[10],max;
   for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
      if(mark[i]==-1)
       {
       high[i]=0;
       }
      else if(mark[i]==mark[j])
       {
       high[i]=cnt;
       cnt++;
       }
      }
    }
    for(i=1;i<=n;i++)
	{
	      if(mark[i]>t)
	      {
	      max=mark[i];
	      }
	}
  for(i=0;i<n;i++)
   {
   if(max==high[i])
   break;
   }
 cout<<"Most common score is = "<<mark[i];
}

int main()
{
int ch;
 se s;
 s.getdata();
 cout<<"Menu:\n 1.Average\n 2.Absent students\n 3.Maximum and Minimum score \n 4.Most common score \n";
 cout<<"Enter your choice";
 cin>>ch;
   switch(ch)
   {
     case 1: s.avg();
	      break;
     case 2: s.absent();
	     break;
     case 3: s.maximum();
	     s.minimum();
	     break;
     case 4: s.maxmarks();
	     break;
     default :
     cout<<"Enter valid choice";
     break;
     }
return 0;
}

Output-

Enter number of students:6
Enter marks of students: 	(Enter -1 for absent)
10 9 -1 9 -1 8

Menu:
 1.Average
 2.Absent students
 3.Maximum and Minimum score 
 4.Most common score 
 5.Exit 
Enter your choice :2
No. of Absent students : 2
Absent numbers are: 3  	5	

Menu:
 1.Average
 2.Absent students
 3.Maximum and Minimum score 
 4.Most common score 
 5.Exit 
Enter your choice : 3
Roll No  1 got maximum 10 marks
Roll No 6 got  minimum 8 marks

Menu:
 1.Average
 2.Absent students
 3.Maximum and Minimum score 
 4.Most common score 
 5.Exit 
Enter your choice : 4
Most common score is = 9

Menu:
 1.Average
 2.Absent students
 3.Maximum and Minimum score 
 4.Most common score 
 5.Exit 
Enter your choice : 5



