#include<iostream>

using namespace std;

/*
Precedence of postfix ++ is more than prefix ++ and their associativity is also different.
Associativity of prefix ++ is right to left and associativity of postfix ++ is left to right.
Value printed by prefix is the updated one.
*/

int main(){
	int c=1,y;

	cout<<c++ <<c++ <<c++ <<++c <<c++ <<++c;
	
	return 0;
}
