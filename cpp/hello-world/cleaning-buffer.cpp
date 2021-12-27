#include<iostream>
#include<vector>
#include<ios>
#include<limits>

using namespace std;

int main()
{
	int a;
	char ch[80];

	// enter input from user
	cin>>a;

	// discards the input buffer
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	// Get input from user
	// "GeeksforGeeks"
	cin.getline(ch,80);
	
	// Prints 4
	cout << a << endl;

	cout << ch<< endl;
	/*
	 * the output is not printed as desired. The reason for this is an occupied Buffer.
	 * 
	 * The “\n” character goes remains there in buffer and is read as the next input.
	 */

	/*
	 * How can it be resolved.
	 * Using “ cin.ignore(numeric_limits::max(),’\n’); ” :- 
	 * Typing “cin.ignore(numeric_limits::max(),’\n’);” after the “cin” statement discards everything in the input stream including the newline.
	 */
	return 0;
}	
