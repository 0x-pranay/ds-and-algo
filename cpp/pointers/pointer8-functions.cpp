#include<iostream>


using namespace std;

// Using function pointers to implement a callback

void A(){  // This function to be  used a callback
	cout<<"Hello from function A"<<endl;
}


void B(void (*ptr)()){  // function pointer as argument. 
		ptr();  // calling callback function that points "ptr" points to. 
}

void sort(int *A, int n){
	// simple bubble sort
	int i, j, temp;
	for(i = 0; i<n; i++ ){
		for(j = 0; j<n-1; j++){
			if(A[j] > A[j+1]){ // better to handle this comparision using callback
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int compare(int a, int b){
	return b-a;
}

void sort2(int *A, int n, int (*compare)(int, int)){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(compare(A[j], A[j+1]) > 0){
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main(){
	B(A);  // A is a callback function used in B.
	int size = 6;
	int A[] = {3,2,1,7,6,5};
	// sort(A, size);
	sort2(A, size, compare);
	for(int i=0; i<size; i++){
		cout<< A[i]<< " ";
	}
	cout<<endl;
}











// void sendNotification(int x){
// 	cout<<"NOtification sent to userID: "<< x<< endl;
// }

// void userAction (void (*ptr)(int x)){
// 		cout<< "User action started"<<endl;
// 		cout<<"user action done and sending notification"<<endl;
// 		ptr(x);
// }

// int main(){
// 	userAction(sendNotification(10));

// }