#include<iostream>

using namespace std;

class Solution{
	public:
		int romanToInt(string s){
			int totalValue = 0;
			int currentValue;
			int previousValue = 0;

			for(int i =0; s[i] != '\0'; i++){
				current = s[i];

				if(current == 'I'){
					currentValue = 1;
				}
				if(current == 'V'){
					currentValue = 5;
				}
				if(current == 'X'){
					currentValue = 10;
				}
				if(current == 'L'){
					currentValue = 50;
				}
				if(current == 'C'){
					currentValue = 100;
				}
				if(current == 'D'){
					currentValue = 500;
				}
				if(current == 'M'){
					currentValue = 1000;
				}
				if(currentValue <= previousValue){
					totalValue += currentValue;
				}
				if(currentValue > previousValue){
					if(previousValue ==0 ){
						totalValue += currentValue;
					}else{
						totalValue += currentValue - 2*previousValue;
					}
				}

				previousValue = currentValue;
			}
			cout<< s<<" "<<totalValue<<endl;
			return totalValue; 
		}
};


int main(){
	Solution sol;

	string roman = "XIV";
	sol.romanToInt(roman);
	sol.romanToInt("XV");

	sol.romanToInt("I");
	sol.romanToInt("II");
	sol.romanToInt("III");
	sol.romanToInt("IV");
	sol.romanToInt("V");
	sol.romanToInt("IX");
	sol.romanToInt("XIV");
	sol.romanToInt("XX");
	sol.romanToInt("XL");
	sol.romanToInt("LXX");
	sol.romanToInt("XC");
	sol.romanToInt("VC");
	return 0;
}