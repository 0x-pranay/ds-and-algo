#include<iostream>
#include<vector>


using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

			int i;
			int arraySize = strs.size();
			int strSize = strs[0].size();
			int flag = 0;
			
			char current;
			std::string result = "";

			for(i=0; i< strSize; i++){
				current = strs[0][i];
				cout<<"current: "<<current<<endl;	
				for(int j=1; j<arraySize; j++){
					if(current != strs[j][i]){
						flag = 1;
						break;
					}
				}
				if(flag == 1){
					break;
				}else{
					result = result + current;
				}
			}
			return result;
        
    }
};


int main(){

	Solution sol;
	std::vector<std::string> testcase1 {"flower", "tlow", "flight"};

	sol.longestCommonPrefix(testcase1);
	return 0;
}