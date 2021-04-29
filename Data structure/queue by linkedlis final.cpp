#include<iostream>
using namespace std;
struct node
{
	float data;
	node*next;//Pointer pointing to next node
}
*front=NULL,*back=NULL;
void Enqueue(float value)
{
node*ptr;
ptr=new node;
if(back==NULL)
{
front=ptr;	
}
else
{
	//The Queue is not empty
	back->next=ptr;
	ptr->next=NULL;
}
back=ptr;
back->data=value;
cout<<"New Data is insered!\n";
	
}
void Dequeue()
{
float deq;//To store an elemt to be deleted
if(front==NULL)
cout<<"Queue is Empty\n";
else
{
	deq=front->data;
	if(back==front)
	{
		back=NULL;
		front=NULL;
	}
	else
	{
	node*temp=front;
	front=front->next;
	delete temp;	
	}
	cout<<"The deleted element is:\n"<<deq<<endl;
}	
}
void Show()
{
if(front==NULL)
cout<<"Queue is Empty";
else
{
node*temp=front;
cout<<"The Contents of Queue are:\n";
while(temp!=NULL)
{
	cout<<temp->data<<"  ";
	temp=temp->next;
	}
	cout<<"\n";	
}
}
int main()
{
	int choice,data;
cout<<"1.To Enqueue\n";	
cout<<"2.To Dequeue\n";
cout<<"3.To Display\n";
cout<<"4.To Exit\n";
do{
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice){
		
	case 1:{
		cout<<"Enter an element to enqueue\n";
		cin>>data;
		Enqueue(data);
	break;}
	case 2:{
		Dequeue();
	break;
	}
	case 3:{
		Show();
	break;
         }
	case 4:{
		cout<<"Exit the program"<<endl;
	break;
        }
	default:{
	cout<<"Invalid choice\n";
	break;
}
        }
}while(choice!=4);
return 0;
}

