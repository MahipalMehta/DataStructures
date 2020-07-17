#include<iostream>
#include<string.h>
using namespace std;
class stacks
{
public:
char stk[15];
char exp[15];

int top,z;
int flag;
stacks()
{
flag=0;
top=-1;
}
   void push(char);
   int pop(char);

};

void stacks::push(char ch)
{
top=top+1;
stk[top]=ch;
}

int stacks::pop(char ch)
{
flag=0;
if(ch==')')
  {
   if(stk[top]=='(')
     {
     top=top-1;

     }
    else
    {
    flag=1;
    }
  }

else if(ch==']')
  {
   if(stk[top]=='[')
     {
     top=top-1;

     }
    else
    {
    flag=1;
    }
  }

else if(ch=='}')
  {
   if(stk[top]=='{')
     {
     top=top-1;
     }
    else
    {
    flag=1;
    }
  }
  return flag;
}

int main()
{
  stacks s;
  char exp[15];
  int i,len;
  {
cout<<"\nEnter Expression : ";
cin>>exp;

cout<<"\nEntered Expression : ";
cout<<exp<<"\n";
len=strlen(exp);

  for(i=0;i<len;i++)
  {
  if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
    {
     char ch;
     ch=exp[i];
     s.push(ch);
    }
  else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
     {
     char ch;
     ch=exp[i];
     s.pop(ch);
     }

  }
 if(s.flag==1)
 {
  cout<<"Result : Entered expression is Not Balanced";
  }
else if(s.stk[s.top]=='('||s.stk[s.top]=='{'||s.stk[s.top]=='[')
{
cout<<"\nResult : Entered expression is Not Balanced";
}
else if(s.top==-1)
{
 cout<<"\n Result : Entered expression is Balanced";
}
 
return 0;
}
}


output - 

Enter Expression : (a+b)*c

Entered Expression : (a+b)*c
Result : Entered expression is Balanced


Enter Expression : {a+b)+c]

Entered Expression : {a+b)+c]
Result : Entered expression is Not Balanced



















