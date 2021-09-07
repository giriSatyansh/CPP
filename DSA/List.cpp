#include<iostream>

using namespace std;
	struct Node{
		int data;
		Node * p;
	};

int main(){
	Node *n1= new Node;
	Node *n2= new Node;
	Node *n3= new Node;
	
	
	n1->data=10;
	n2->data=20;
	n3->data=30;
	n1->p=n2;
	n2->p=n3;
	n3->p=NULL;
	
	cout<<"adress\n"<<n1<<endl<<n2<<endl<<n3<<endl;
	cout<<"data"<<endl<<n1->data<<endl<<n2->data<<endl<<n3->data<<endl;
	cout<<"next_adress"<<endl<<n1->p<<endl<<n2->p<<endl<<n3->p<<endl;
	
	
	
	return 0;
}
