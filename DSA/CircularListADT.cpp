#include<iostream>

using namespace std;

struct Node{
	/*public:*/
		int data;
		Node* next;
		Node* prev;
};

class CircularList{
	private:
		Node* first;
		Node* last;
		int count;
		
	public:
		CircularList(){
			first = NULL;
			last = NULL;
			count = 0;
		}
		
		void addNodeFront(int data){
			if(first == NULL){
				first = new Node;
				first->data = data;
				first->next = NULL;
				first->prev = NULL;
				last = first;
				count++;
				
			}else{
				Node * temp = new Node;
				temp->data = data;
				temp->next = first;
				first->prev = temp;
				temp->prev = last;
				last->next = temp;
				first = temp;
				count++;
			}
		}
		
		void print(){
			Node * temp = first;
			for(int i=0;i<count;i++){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
		}
		
};

int main(){
	
	CircularList cl;
	cl.addNodeFront(23);
	cl.addNodeFront(12);
	cl.addNodeFront(10);
	cl.addNodeFront(275);
	cl.print();
	
	return 0;
}
