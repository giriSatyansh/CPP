#include<iostream>

using namespace std;
struct Node{
	int data;
	Node *Next;
	Node *Previous;
};


int main (){
Node *n1= new Node;
Node *n2=new Node;
Node *n3=new Node;
n1->data=10;
n2->data=20;
n3->data=30;
cout<<"original_address\n"<<n1<<endl<<n2<<endl<<n3<<endl;
cout<<"data\n"<<n1->data<<endl<<n2->data<<endl<<n3->data<<endl;

n1->Previous=NULL;
n2->Previous=n1;
n3->Previous=n2;
n1->Next=n2;
n2->Next=n3;
n3->Next=NULL;
cout<<"Previous_address\n"<<n1->Previous<<endl<<n2->Previous<<endl<<n3->Previous<<endl;
cout<<"Next_address\n"<<n1->Next<<endl<<n2->Next<<endl<<n3->Next<<endl;	
	
	return 0;
}
