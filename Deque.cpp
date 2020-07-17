#include<iostream>
using namespace std;
# define max 8

class Deque
{

    int r,f;
    int n[max];

public:
     Deque()
     {
         r=-1;
         f=-1;
     }

     void enqueuerear()
     {
         if(r==(max-1))
         {
             cout<<"\n** QUEUE IS FULL **\n";
            return;
         }

         if(f==-1&&r==-1)
         {
             f=0;
             r=0;
             cout<<"\n Enter value : ";
             cin>>n[f];
         }
         else
         {
             cout<<"\n Enter the value : ";
             cin>>n[++r];

         }
     }

     void enqueuefront()
     {
         if(f==0)
         {
             cout<<"\n Cannot insert from front \n";
             return;
         }
         else if(f==-1 && r==-1)
         {
             r=0,f=0;
             cout<<"\nEnter value : ";
             cin>>n[f];
         }
         else
            {
            cout<<"\n Enter value : ";
            cin>>n[--f];
            }
     }

     void dequeuerear()
     {
         if(f==-1&&r==-1)
         {
             cout<<"\n** QUEUE IS EMPTY **\n";
             return;
         }

        if(f==r)
        {
            f=-1;
            r=-1;
            cout<<"\n** ALL ELEMENTS ARE DELETED **\n";
            return;
        }
r--;
     }

     void dequeuefront()
     {
         if(f==-1&& r==-1)
         {
             cout<<"\n**QUEUE IS EMPTY**\n";
             return;
         }

         if(f==r)
         {
             f=-1;
             r=-1;
             cout<<"\n** NO ELEMENTS **\n";
             return;
         }
         f++;
     }

     void display()
     {
         int s;
         s=f;

         if(f==-1&&r==-1)
         {
             cout<<"\n** QUEUE IS EMPTY **\n";
             return;
         }

         if(f==(max-1))
         {
             cout<<"\n **QUEUE IS FULL** \n";
             f=-1;
             r=-1;
             return;

         }
           cout<<"\nELEMENTS: ";
         while(s<=r)
         {
             cout<<"  "<<n[s];
             s++;
         }
     }
};


int main()
{
    Deque dq;
    int ch;
    while(1)
    {
        cout<<"\n 1.ENQUEUE FROM REAR\n 2.ENQUEUE FROM FRONT\n 3.DEQUEUE FROM REAR\n 4.DEQUEUE FROM FRONT\n 5.DISPLAY \n 6.EXIT\n";
        cout<<"\n ENTER CHOICE : ";
        cin>>ch;

        switch(ch)
        {
            case 1: dq.enqueuerear();
                     break;

            case 2: dq.enqueuefront();
            break;

            case 3: dq.dequeuerear();
                    break;

            case 4: dq.dequeuefront();
                     break;

            case 5: dq.display();
                     break;
            case 6:  exit(0);
				break;
        }

    }
    return 0;
}


output-

 1.ENQUEUE FROM REAR
 2.ENQUEUE FROM FRONT
 3.DEQUEUE FROM REAR
 4.DEQUEUE FROM FRONT
 5.DISPLAY
 6.EXIT
  ENTER CHOICE : 1
  
  Enter value : 1

 1.ENQUEUE FROM REAR
 2.ENQUEUE FROM FRONT
 3.DEQUEUE FROM REAR
 4.DEQUEUE FROM FRONT
 5.DISPLAY
 6.EXIT
 ENTER CHOICE : 2

 Cannot insert from front

 1.ENQUEUE FROM REAR
 2.ENQUEUE FROM FRONT
 3.DEQUEUE FROM REAR
 4.DEQUEUE FROM FRONT
 5.DISPLAY
 6.EXIT
 ENTER CHOICE : 5

ELEMENTS:  1

 1.ENQUEUE FROM REAR
 2.ENQUEUE FROM FRONT
 3.DEQUEUE FROM REAR
 4.DEQUEUE FROM FRONT
 5.DISPLAY
 6.EXIT
 ENTER CHOICE : 3

 **ALL ELEMENTS ARE DELETED**

 1.ENQUEUE FROM REAR
 2.ENQUEUE FROM FRONT
 3.DEQUEUE FROM REAR
 4.DEQUEUE FROM FRONT
 5.DISPLAY
 6.EXIT
 ENTER CHOICE : 6 
