#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> g1;
	
	for(int i = 0; i < 5; i++){
		g1.push_back(i);
	}

	cout<<"Size "<< g1.size()<<endl;
	cout<< "Capacity: " << g1.capacity() << endl;
	cout << "Max size: " << g1.max_size() << endl;


	// cout<<"value of i:"<< i << endl;

	cout<< "Display items in vector using begin and end"<<endl;
	for(auto i = g1.begin(); i != g1.end(); i++){
		cout << *i << " ";
	}

	cout<<"\nDisplay items using cbegin() and cend()"<<endl;
	for(auto ir = g1.cbegin(); ir != g1.cend(); ir++){
		cout << *ir << " ";
	}



	return 0;
}