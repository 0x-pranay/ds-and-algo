#include<iostream>
using namespace std;

int main(){
	int a = 10;

	int *p = &a;

	cout<<"Address of a: "<<&a<<endl;
	cout<<"Value of *p: "<< *p <<endl;
	cout<<"Value of p: "<< p<< endl;
	return 0;
}
