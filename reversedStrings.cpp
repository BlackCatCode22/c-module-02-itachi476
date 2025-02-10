#include <iostream>
#include <string>

using namespace std;

int main() {
	string userinput;
	cout << "Write a text you want reversed." << "\n";
	getline(cin, userinput);
	for (int i = 1; i <= userinput.length(); i++) {
		cout << userinput[userinput.length()-i];
	}
	
    return 0;
}