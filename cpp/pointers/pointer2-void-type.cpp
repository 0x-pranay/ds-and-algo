#include<iostream>
#include<vector>

using namespace std;

int main(){

	// sizeof(int) = 4 bytes 
	// 1025 :  00000000   00000000   00000100  00000001
	//         |  byte3 	byte2 	  byte1	    byte0
	//        \/
	//         sign bit
	int a = 1025;

	int *p = &a;

	cout<< "Sizeof int: " << sizeof(int) << ", Sizeof char: "<< sizeof(char) << endl;

	cout << "Address = " << p <<", Value =  " << *p <<endl; 
	cout << "Address = " << p+1 <<", Value =  " << *(p+1) <<endl; 

	void *p0;
	p0 = p;

	cout << "Address of po: "<< p0 << endl;

	// cout << " Value = "<< *p0 << endl; // uncommenting will result in error. 
	
	cout<< "Size of integer pointeri "<< sizeof(int*) << endl;


	cout<< "Size of integer pointeri "<< sizeof(char*) << endl;
	cout<< "Size of integer pointeri "<< sizeof(bool*) << endl;
	cout<< "Size of integer pointeri "<< sizeof(double*) << endl;
	
	return 0;
}