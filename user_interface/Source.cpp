#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "You entered: " << input << endl;

	cout << "Enter your age: " << flush;
	int age;
	cin >> age;
	cout << "Then your age is: " << age << endl;

	system("pause");
	return 0;
}