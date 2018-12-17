#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int csm;
    int rm;
    cout << "input size of massive" << endl;
    cin >> csm; 
    cout << "1) Manual input   2) Random input"<<endl;
    cin >>rm;
    int a[csm],in;
    srand(time(0));
    if (rm == 1) {
        for (int i = 0; i < csm; i++ ) {
            cin >> in;
            a[i] = in;
        }   
    } else if (rm == 2) {
        int r;
        for (int i = 0; i < csm; i++) {
            r = 1 + (rand() % 10);
            a[i] = r;
        }
    }
    for (int i = 0; i < csm; i++) {
        cout << "[" << a[i] << "]";
    }
    int min = a[0];
    int max = a[0];
    int indmax = 0;
    int indmin = 0;
    for (int i = 0; i < csm; i++) {
        if (min > a[i]) {
            min = a[i];
            indmin = i;
        }
        if (max < a[i]) {
            max = a[i];
            indmax = i;
        }
    }
    if (indmax < indmin) {
        int temp = indmax;
        indmax = indmin;
        indmin = temp;
    }
    int res = 1;
    for (int i = indmin + 1; i < indmax; i++ ) {
        res *= a[i];  
    }

    cout << endl <<"res is: "<< res << endl;



}
