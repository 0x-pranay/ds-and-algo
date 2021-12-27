#include<iostream>

using namespace std;

int x = 2;
void display(){
	int x = 10;
	cout<<"Value of x in display: "<< x << endl;

	cout<<"Value of globalx inside display: "<< ::x <<endl;
}
int main(){
	int x = 5;
	cout<<"Value of x inside main: " <<x <<endl;
	cout<<"Value of globalx inside main: "<< ::x <<endl;
	display();

	void inner(){

	int x = 15;
	cout<<"Value of x inside inner: " <<x <<endl;
	cout<<"Value of globalx inside inner: "<< ::x <<endl;

	}
}
