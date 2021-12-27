#include<iostream>

using namespace std;


int sumOfArray(int A[], int size ){  // or int sumOfArray(int* A, int size)

	// In cpp the below line gives error. NICE.
	// cout<< "SUMOFARRAY: Size of an A: "<< sizeof(A) << ", Size of A[0] "<< sizeof(A[0]) <<endl; 

	int sum = 0;
	for(int i = 0; i< size ; i++){
		sum += A[i];
	}
	return sum;
}

int main(){

	int A[5] = {1 ,2,3,4,5};
	int *p;
	p = A;

	cout <<"A =  " << A << endl;
	cout << "*A= " << *A << endl;
	cout << "&A = " << &A << endl;

	cout << "&A[0] = " << &A[0] << endl;


	cout <<"p = "<< p<< "  Value of p or *p = "<< *p<< endl;

	cout<< "MAIN: Size of an A: "<< sizeof(A) << ", Size of A[0] "<< sizeof(A[0]) <<endl;

	int size = sizeof(A)/sizeof(A[0]);
	int sum = sumOfArray(A, size);

	cout << "Sum of an array: "<< sum<< endl;

	return 0;
}