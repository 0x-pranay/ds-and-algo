#include<iostream> 

using namespace std;

int main(){
	
	int x = 5;

	int *p = &x;

	int **q = &p;

	int ***r = &q;

	cout << "Address of x = "<< &x << ", Value of x: "<< x <<endl;

	cout << "Address of p = "<< &p  << ", Value of p: "<< p << ", value stored in  p "<< *p<< endl ;

	cout << "Address of q = "<< &q  << ", Value of q: "<< q << ", value stored in  q "<< **q << ", Value in *q = "<< *q <<endl ;
	cout << "Address of r = "<< &r  << ", Value of r: "<< r << ", value stored in  r "<< ***r << endl ;

	return 0;
}