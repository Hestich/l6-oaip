#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char a[] = {"01011 101 00100 01 10100 0110 10001"};
	int letters = 0;
	int words = 0;
	int ln = strlen(a);
	for (int x = 0;x < ln; x++) {
		if (a[x] != ' ') {
			letters++;
			if (letters == 5 && (a[x + 1] == ' ' || a[x + 1] == '\0')) {
				words++;
				letters = 0;
			}	
		} else if (a[x] == ' ') {
			letters = 0;
		}
	}
	cout<<words;
}