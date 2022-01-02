#include<iostream>

using namespace std;

int main(){

	int B[2][3] ={{1,2,3},{4,5,6}};

	int (*p)[3] = B;

	auto *x = B;

	for(int i =0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<< (*(x+i))[j]<< "   "<< *(*(x+i) + j) <<endl;
		}
	}

	cout<<"p is pointer to a one dimensional array of 3 elements"<<endl;
	return 0;
}