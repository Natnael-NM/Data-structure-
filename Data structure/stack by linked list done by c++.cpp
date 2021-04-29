//stack implementation using linked list
#include<iostream>
#include<malloc.h>
using namespace std;
struct Node {
	int data;
	struct Node *next;	
};
struct Node* top  = NULL;

void push(int val) {
	
struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
newnode->data = val;
newnode->next =	top;
top = newnode;
}
void pop(){
	if(top==NULL)
	cout<<"stack Underflow"<<endl;
	else{
		cout<<"The popped element is:"<<top->data<<endl;
		top=top->next;	
	}
}
void display(){
	struct Node*ptr;
	if(top==NULL)
	cout<<"stack is empty";
	else{
		ptr=top;
		cout<<"stack elements are :";
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
	cout<<endl;	
}
int main(){
	int ch,val;
	cout<<"1)Push in stack"<<endl;
	cout<<"2)Pop from stack"<<endl;
	cout<<"3)Displey stack"<<endl;
	cout<<"4)Exit the program"<<endl;
do{
	cout<<"Enter your choice:"<<endl;
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<"Enter the value to be pushed"<<endl;
			cin>>val;
			push(val);
			break;
		}
		case 2:{
			pop();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			cout<<"Exit"<<endl;
			break;
		}
		default:{
		cout<<"Invalid choice"<<endl;
		}
	}
}
while(ch!=4);
return 0;
}
