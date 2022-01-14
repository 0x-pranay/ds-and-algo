#include<iostream>

using namespace std;

class Solution{
	public:
		int romanToInt(string s){
			int totalValue = 0;
			int currentValue;
			int previousValue = 0;
			
			char current;
			char romanAlp[] = {
				'I', 'V', 'X',
				'L', 'C', 'D', 'M'
			};
			int romanNum[] = { 1, 5, 10, 50, 100, 500, 1000};
			int size = sizeof(romanNum)/sizeof(int);

			for(int i =0; s[i] != '\0'; i++){
				current = s[i];
				for(int j =0; j<size; j++){
					if(romanAlp[j] == current){
						currentValue = romanNum[j];
						break;
					}
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