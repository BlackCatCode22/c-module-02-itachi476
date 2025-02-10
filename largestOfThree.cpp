#include <iostream>
#include <string>

using namespace std;
void largestOfThree(int userNum) {
	cout << userNum << " is the largest of the three numbers!\n";
}

int main() {
	int a,b,c;
	cout << "Please enter three numbers..." << "\n";
	cout << "Number 1: ";
	cin >> a;
	cout << "Number 2: ";
	cin >> b;
	cout << "Number 3: ";
	cin >> c;
	if (a >= b) {
		if (c >= a) {
			//if c is larger than a, then it is the largest
			if (c > a) {
				largestOfThree(c);
				return 0;
			//if c == a, check if b is also equal 
			} else if (a==b){
				cout << "All three numbers are equal.\n";
				return 0;
			} else {
				cout << a << " and " << c << " are the two highest numbers.\n";
				return 0;
			}
		//c is less than a, check if a==b 
		} else if (a==b) {
			cout << a << " and " << b << " are the two highest numbers.\n";
			return 0;
		} else {
			largestOfThree(a);
		}
	} else if(b >= c) {
		if (b==c) {
			cout << b << " and " << c << " are the two highest numbers.\n";
		} else {
			largestOfThree(b);
		}
	} else {
		largestOfThree(c);
	}

	return 0;
}