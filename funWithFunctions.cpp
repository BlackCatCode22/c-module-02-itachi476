#include <iostream>
#include <string>

using namespace std;

void getAnIntFromTheUser(int& userNum){
	cout << "Enter a number: ";
	cin >> userNum;
}

void compareTwoInts(int a, int b) {
	if (a < b) {
		cout << a << " is less than " << b << "\n";
	} else if (a > b) {
		cout << a << " is greater than " << b << "\n";
	} else {
		cout << a << " is equal to " << b << "\n";
	}
}
void sumTwoInts(int a, int b) {
	cout << a << " + " << b << " = " << a+b << "\n";
}
int main() {
	int a,b;
	getAnIntFromTheUser(a);
	getAnIntFromTheUser(b);
	compareTwoInts(a,b);
	sumTwoInts(a,b);
	return 0;
}
