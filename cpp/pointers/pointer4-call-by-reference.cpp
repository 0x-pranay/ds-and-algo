#include <iostream>

using namespace std;

void incrementBy10(int* x){

	*x = *x + 10;
}

int main(){

	int x = 4;

	incrementBy10(&x);
	cout<< "Incremented value"<< x<<endl;
	return 0;
}