#include<iostream>

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

	cout << "Address = " << p+2 <<", Value =  " << *(p+2) <<endl; 
	cout << "Address = " << p+3 <<", Value =  " << *(p+3) <<endl; 

	char *p0;
	
	p0 = (char*)p; // typecasting integer to char. 

	cout << "Address of Char = " << (void*)p0 <<", Value =  " << *p0 <<endl; 
	cout << "Address = " <<(void*)(p0 + 1) <<", Value =  " << *(p0+1) <<endl; 
	cout << "Address = " << p0 + 2 <<", Value =  " << *(p0+2) <<endl; 
	cout << "Address = " << p0 + 3 <<", Value =  " << *(p0+3) <<endl; 
}