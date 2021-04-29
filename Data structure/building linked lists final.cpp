#include <iostream>
using namespace std;
void insert_end(int x);//function declaration
void display();
void insert_front(int x);
void delete_front();
using namespace std;
struct node
{
	int data;
	node *next;	
};
node *head=NULL; 
int main()
{	
	cout<<"Display \n";
	insert_end(6);
	insert_end(16);
	insert_end(44);
	display();
	cout<<"1st insert at front\n";
	insert_front(88); 
	display();
	cout<<"2nd insert at front\n";
	insert_front(12);
	display(); 
	cout<<"3rd insert at front\n";
	insert_front(17); 
	display();
	cout<<"4th insert at end\n";
	insert_end(10);
	display();
	cout<<"delet front\n";
	delete_front();
	display();
	cout<<"Search";
	int a=17;
	return 0;
}
//function calling
void insert_end(int x)
{   
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		node *temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;	
		}
		temp2->next=temp;
	}
}
	void display()
	{
		node *temp;
		if(head==NULL)
		cout<<"No data inside\n";
		else
		{
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
	}
	void insert_front(int x)
	{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	
	if(head==NULL)
	head=temp;
	else
	{
		temp->next=head;
		head=temp;
	}
	}
	void delete_front()
	{
		node *temp;
		if(head==NULL)
		cout<<"No data inside\n";
		else
		{
			temp=head;
			head=head->next;
			delete temp;
		}
	}
		bool search(node *head, int x)
{		
node* current = head; // Initialize current
while (current != NULL)
{
if (current->data == x)
{
cout<<"Yes";
return true;
}
current = current->next;
}
return false;
}


