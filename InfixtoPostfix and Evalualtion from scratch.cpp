#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 50
using namespace std;
class stack
{
 char data[MAX];
 int top;
 public:
 void initialize();
 int  gettop();
 char pop();
 void push(char);
 int empty();
 int full();
};

void stack::initialize()
{
top=-1;
}

int stack::gettop()
{
if(!empty())
return data[top];
}

char stack::pop()
{
if(!empty())
return data[top--];
}

void stack::push(char x)
{
if(!full())
 data[++top]=x;
}

int stack::empty()
{
if(top==-1)
return 1;
else
return 0;
}

int stack::full()
{
if(top==MAX-1)
return 1;
else
return 0;
}

int precedence(char ch)
{
if(ch=='+'||ch=='-')
return 1;
else if(ch=='*'||ch=='/')
return 2;
}

void intopost(stack s)
{
 char infix[20],postfix[20],ch,temp;
 cout<<"\n**Infix To Postfix Conversion**\n";
 cout<<"\nEnter Infix Expression : ";
 cin>>infix;

 cout<<"\nThe Postfix Expression is : ";
 int i=0;
 while(infix[i]!='\0')
 {
  ch=infix[i];
  if(ch=='(')
  s.push(ch);
  else if(ch==')')
  {
   temp=s.pop();
   while(temp!='(')
   {
    cout<<temp;
    temp=s.pop();
    }
   }
  else if(isalpha(ch))
  cout<<ch;

  else
  {
   if(s.empty())
   s.push(ch);
   else
   {
   if(s.gettop()=='(')
   {
   s.push(ch);
   }
   else if(precedence(ch)>precedence(s.gettop()))
   {
    s.push(ch);
    }
    else
    {
    while(precedence(ch)<=precedence(s.gettop()))
    {
    cout<<s.pop();
    }
    s.push(ch);
    }
    }
    }
    i++;
    }

    if(i==strlen(infix))
    {
    while(!s.empty())
    {
     ch=s.pop();
     cout<<ch;
    }
    }
   cout<<"\n";
  }

//**************************************************************************************************************************//

char operation(int digit1,int digit2,char ch)
{
int result;
switch(ch)
{
case '+':
result=digit1+digit2;
break;
case '-':
result=digit1-digit2;
break;
case '*':
result=digit1*digit2;
break;
case '/':
result=digit1/digit2;
break;
}
return result;
}

void evaluation(stack s)
{
char postfix[30],digit[3],ch,result;
int len,i,j,x,k,op1,op2;
cout<<"\n**Postfix Evaluation**\n";
cout<<"\nEnter Postfix Expression :  ";
//cin>>postfix;
cin.ignore();
cin.getline(postfix,20);
len=strlen(postfix);
j=0;
k=0;
for(i=0;i<len;i++)
{
if(postfix[i]>='0'&&postfix[i]<='9')
{
digit[j++]=postfix[i];
}
else if(postfix[i]==' ')
{
if(j>0)
{
digit[j]='\0';
x=atoi(digit);
s.push(x);
j=0;
}
}
else if(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='*'||postfix[i]=='/')
{
op2=s.pop();
op1=s.pop();
result=operation(op1,op2,postfix[i]);
s.push(result);
}
}
cout<<"\n Postfix Evaluation ans : "<<s.gettop();
cout<<"\n";
}

int main()
{
stack s1;
s1.initialize();
intopost(s1);
evaluation(s1);
return 0;
}

output - 


**Infix To Postfix Conversion**

Enter Infix Expression : a+b*c

The Postfix Expression is : abc*+

**Postfix Evaluation**

Enter Postfix Expression :  10 5 2 * +

 Postfix Evaluation ans : 20



