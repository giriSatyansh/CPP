#include<iostream>

using namespace std;

struct Node{
	int data;
	Node * next;
};

int main(){
	
	Node * n1 = new Node;
	Node * n2 = new Node;
	Node * n3 = new Node;
	
	n1->data = 10;
	n1->next = n2;
	
	
	n2->data = 20;
	n2->next = n3;
	
	
	n3->data = 30;
	n3->next = NULL;
	
	cout<<"Addresses--->\n";
	cout<<n1<<endl<<n2<<endl<<n3<<endl<<endl;
	
	cout<<"Next Addresses --->\n";
	cout<<n1->next<<endl<<n2->next<<endl<<n3->next;
	
	cout<<"\n\nData--->\n";
	cout<<n1->data<<endl<<n2->data<<endl<<n3->data;
	
	return 0;
}
