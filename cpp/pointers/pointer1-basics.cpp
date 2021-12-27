#include<iostream>

using namespace std;

int main(){

	int a = 10; // declare a int variable and assign a value of 10;
	int *p; // declare a pointer variable 
	int* pp; // this is also a valid pointer declaration
	p = &a; // assign the address of a to be stored in p. 
	cout<< "Dereferencing the pointer variable p using *p: "<< *p << endl;
	
	cout<< "Address of a   "<< &a << endl;
	cout << "Value stored in p  " << p << endl;
	cout << "Address of p" << &p << endl;

	*p = 20;

	cout<< "value of a: "<< a <<endl;
	// cout << "*a : "<< *a <<endl;   errors 

	return 0;
}