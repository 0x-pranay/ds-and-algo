#include<iostream>

using namespace std;

void rotate(int a[], int d, int size){
  
  for(int i =0; i<d; i++){
	  int temp = a[0];
	  for(int j=0; j<size-1; j++){
		  a[j] = a[j+1];
	  }
	  a[size-1] = temp;
  }
}

void printArray (int a[], int size){
	for(int i =0; i< size; i++){
		cout<<a[i]<< " ";
	}
	cout<< endl;
}

int main(){
	int a[] = { 1,2,3,4,5,6,7,8,9,10};
	int d = 2;
	int size = sizeof(a)/sizeof(a[0]);

	cout<<"Length of an array: "<< sizeof(a)/sizeof(a[0])<< endl;

	rotate(a,d,size);
	printArray(a,size);

}