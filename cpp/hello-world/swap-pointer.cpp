#include<iostream>
using namespace std;

void swap(int& first, int& second){

	int temp = first;
	first = second;
	second = temp;
}

void swap2 (int &first, int &second){

	int temp = first;
	first = second;
	second = temp;
}

int main(){
	int a=2, b=3;
	swap(a, b);
	cout << a << "" << b<< endl;
	
	swap2(a, b);
	cout << a << " " << b<< endl;
	return 0;
}
