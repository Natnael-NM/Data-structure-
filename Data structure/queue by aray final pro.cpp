#include <iostream>
using namespace std;
int A[10], myfront=-1, myback=-1; // Creating Queue
//function declaration
int IsEmpty();
void Enqueue(int data);
int Dequeue();
void DisplayQueue();
// function calling 
int main()
{
Enqueue(0);
Enqueue(1);
Enqueue(21);
Enqueue(41);
Dequeue(); // Delete 0 from starting
//Dequeue(); // Delete 1 from starting
//Dequeue();//delete 2 from starting
DisplayQueue(); //Print Queue
return 0;
}
//function definition
int IsEmpty()
{
if(myback==-1 && myfront==-1)
return 1;
else
return 0;
}
void Enqueue(int data)
{
if(IsEmpty())
myfront = myback = 0;
else if( myback+1 == myfront )
cout<<" Queue is Full \n";
else
myback = myback+1;
A[myback] = data;
}
int Dequeue()//delete function
{
if(IsEmpty())
cout<<" Queue is Empty \n";
else
myfront = myfront+1;
return A[myfront];
}
void DisplayQueue()
{
cout<<"Display all the elements\n";
int i=0;
for(i=myfront; i<=myback; i++)
cout<<A[i]<<" ";
}

