#include<iostream>
#include<cmath>

using namespace std;


bool solution1(int n){
	// this fails to work for long intergers 

	// Special case: 
	// 1. n is -ve integers -> false;
	// 2. for a interget ending with zero other than number 0 its always false;
	
	if(n < 0 || (n % 10 == 0 && n !=0)){
		return false;
	}

	int reverse = 0;
	int x = n;
	while(x!=0){
		reverse = reverse*10 + x%10;
		x /= 10;
	}

	if(reverse == n ){
		return true;
	}
	return false;
	
}

bool solution2(int n){
	//special cases
	if(n <0 || (n%10 == 0 && n!=0)){
		return false;
	}

	// this handles the edge case where number is large for a size int. 
	int x = n;
	int reverse = 0;

	while(reverse < x){
		reverse = reverse*10 + x%10;
		x /= 10;
		// cout<<"x: "<<x <<"  reverse: "<< reverse<< endl;
	}

	return x == reverse || x == reverse/10;
}


int main(){
	int n;
	cout<< "Enter the number to check for palindrom"<<endl;
	cin>>n;

	cout<<"Solution 1 result: "<<solution1(n)<<endl;
	cout<< "Solution of 2 result: "<< solution2(n) << endl;
	return 0;
}