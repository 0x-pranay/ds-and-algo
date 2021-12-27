#include<iostream>

using namespace std;

void displayArray(){


	int a[2][3] = {{1,2,3}, {4,5,6}};
	int r = 2;
	int c = 3;
	cout<<"Array:: ["<<endl;
	for(int i = 0; i < r; i++){
		cout<< "[";
		for(int j =0; j< c; j++){
			cout<<a[i][j];
			if(j< c-1){
				cout<<", ";
			}
		}
		cout<< "]"<<endl;
	}
	cout<<"]"<<endl;;

	int size = sizeof(a)/sizeof(int);
	int columnSize = sizeof(a[0])/sizeof(int);
	int rowSize = size/columnSize;

	cout<<"Total Sizeof the array is: "<< size<<endl;
	cout<<"Number of columns" << columnSize<<endl;
	cout <<"Number of rows" << rowSize << endl;
	
}

int main(){
	int r,c;
	cout<<"Enter rows and then coloumn";
	cin>>r;
	cin >> c;
	cout<<"entered rows: "<<r <<" , coloumns: " <<c<<endl;

	int arr[2][3] = {{1,2,3}, {4,5,6}};
	displayArray();
	return 0;

}