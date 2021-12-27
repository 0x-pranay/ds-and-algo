#include<iostream>

int main(){

	std::cout<< "The size of integer in this compiler is" << sizeof(int) << std::endl;

	// when just declatred fills the array with garbage values.
	int x[10] = {};  // Initializes an array of zero elements of size 10
	int i =0;

	for(i =0; i < 10; i++){

		std::cout<< i[x]<< " and  address:: "<< &x[i]<< std::endl;
	}

	//  Declaring an array by user specified size
	int n;
	std::cin>>n;
	std::cout<< "creating an array of size"<<n << std::endl;

	int y[n];

	std::cout << y[0] << std::endl;

	// Array declaring by specifying size and initializing  less elements than specified size, remaining 
	// elements are set to zero.
	int z[6] = { 10, 20, 30, 40};

	for(int a =0; a <6; a++){
		std::cout<< z[a] << "  ";
	}

	return 0;
}