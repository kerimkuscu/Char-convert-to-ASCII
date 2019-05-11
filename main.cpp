#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	char character;
	cout << "Enter a character: ";
	cin >> character;
	
	cout << "ASCII Value of " << character << " is " << int(character);
	
	return 0;
}
