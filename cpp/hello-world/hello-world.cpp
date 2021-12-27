#include<iostream>

using namespace std;

int main(){
	// << insertion operator - used to insert data to the standard output stream cout
	cout<<"Hello world";
	char sample[] = "Pranay";
	cout<<sample<< " Velisoju\n";

	// >> extraction operator - used to extract the data from the object cin 
	// which is entered using the keyboard
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "\n Your age is: " << age;

	// Un-buffered standard error stream (cerr)
	cerr << "\nAn error occured";

	//buffered standard error stream (clog): 
	
	// single line comment
	/* Multi 
	 * line
	 * comment
	 */
	float b;
	cout<<b<<endl;
	return 0;
}

