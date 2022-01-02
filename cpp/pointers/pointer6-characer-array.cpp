#include<iostream>

using namespace std;


void display(const char c[]){
	while(*c != '\0' ){
	    cout<< *c;;
	    c++;
	}
	cout<<endl;
}

int main(){
	char C[20] = "Hello World!";
	display(C);
	return 0;

}