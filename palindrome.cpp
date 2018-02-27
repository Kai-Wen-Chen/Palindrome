#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	
	while (cin >> input) {
		int len = input.length() / 2;
		bool palindrome = true;
		
		if (input.length() % 2 == 0) { //even-length input
			for (int i=0; i<len; i++) {
				if (input[len+i] != input[len-i-1]) {
					palindrome = false;
					break;	
				}
			}
		} else { //odd-length input
			for (int i=0; i<len; i++) {
				if (input[len+i+1] != input[len-i-1]) {
					palindrome = false;
					break;	
				}
			}
		}
		
		if (palindrome) cout << "yes" << endl;
		else cout << "no" << endl;
	}
} 
