#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* prev ,*next;
};


class circularList{
	private:
		Node* first;
		Node* last;
		Node* temp1;
		Node* temp2;
		int count;
		
	public:
	 	circularList(){
	 		first =NULL;
	 		last= NULL;
	 		count= 0;
		}
	
		void insert_front( int data){
			if(first == NULL){
					first = new Node;
					first->data = data;
					first->prev=NULL;
					first->next=NULL;
					last=first;
					count++;
			}else{
				Node *temp= new Node;
				temp->data=data;
				temp->next=first;
				first->prev=temp;
			    temp->prev=last;
			    last->next=temp;
			    first=temp;
				count++;
			}
		}
		
	   void insert_last(int data){
		   	if(last==NULL){
		   	  	insert_front(data);
			}else{
		   		Node*temp=new Node;
		   		temp->data=data;
		   	    temp->prev=last;
		   	    last->next=temp;
		   		temp->next=first;
		   		first->prev=temp;
		   		temp=last;
		   		count++;
		   		
			}
	   }
			
		void insert_At(int data,int index){
			if(index==0){
				insert_front(data);
			}else if(index>=count){
				cout<<"index out of range";
			}else{ 
			    temp1=first;
				for( int i=1;i<index;i++){
					temp1=	temp1->next;
				}
				temp2= new Node;
				temp2->data = data;
				temp2->next = temp1->next;
				temp1->next = temp2;
				count++;
			}	
		}
		
		int get_front() {
		  	if(first==NULL){
		  		cout<<"empty list";
			}else{
				cout<<first->data<<endl;
			}
		 	return -1;
		}
  
		int get_last(){
  			if(last==NULL){
  				cout<<"empty list";
	  		}else{
 				cout<<last->data<<endl;
			}
			return -1;
		}

		int get_At(int index){
			if(index>=count){
				cout<<"index out of range";
			}else{
				temp1=first;
				for(int i=1; i<=index ;i++){
			 		temp1=temp1->next;
				}
				cout<<temp1->data<<endl;
			}
			return -1;
		}

		void delete_front(){
			if(first==NULL){
				cout<<"list is empty"<<endl;
			}else{
			 	temp1=first;
			 	first=first->next;
			 	last->next = first;
			 	delete temp1;
			 	count--;
			}
		}

		void delete_last(){
 			if(last=NULL){
 				cout<<"empty list"<<endl;
			}else if(count==1){
	 			delete_front();
			}else{
				temp1=first;
	 			for(int i=1;i<count;i++){
	 				temp1=temp1->next;
				}
	 			last=temp1->prev;
	 			delete temp1;
	 			count--;
	 		}
 		}
  		
		void delete_At(int index){
  			if(index==0){
  				delete_front();
	  		}else if(index>=count){
	  			cout<<"index out of range";
	  		}else{
	  			temp1=first;
	  			for(int i=1;i<index;i++){
	  				temp1=temp1->next;
		  		}	 
		  		temp2=temp1->next;
		  		temp1->next=temp2->next;
		  		delete temp2;
			}
			count--;
		}
	   
		void print(){
			Node * temp = first;
			for(int i=0;i<count;i++){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
			cout<<endl;
			//cout<<count<<endl;
		}
  
  		int get_size(){
  			cout<<count;
  		}
  		
  		~circularList(){
  			count = 0;
  			if(first != NULL){
  				temp1 = first->next;
  				while(temp1 != first){
  					temp2 = temp1->next;
  					delete temp1;
  					temp1 = temp2;
				}
				delete first;
			}
		}

};
	
	
	
int main(){
	          	
	circularList a;

	for(int i=11;i<25;i++){
		a.insert_front(i);
	} 
	
	a.print();
	a.delete_front();
	a.print();
	a.delete_last();
	a.print();
	a.delete_At(3);
	a.print();
	a.get_size(); 

	return 0;

}

