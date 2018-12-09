#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string str;
    getline (cin,str);
    int letters = 0;
    int words = 0;
    for (int x = 0; x < str.length(); x++) {
        if (str[x] != ' ') {
            letters++;
            if (letters == 5 && (str[x + 1] == ' ' || str[x + 1] == '\0')) {
                words++;
                letters = 0;
            }   
        } else if (str[x] == ' ') {
            letters = 0;
        }
    }
    printf("5 sym words = %d\n", words );
}