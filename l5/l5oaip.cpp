#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	int csm;
    cout << "input size of massive" << endl;
    cin >> csm;
    cout << endl;
int a[csm],rm;
int res = 1;
srand (time(0));
	cout << "1) Random input  2) Manual input"<<endl;
	cin>>rm;
    int r;
	if (rm == 1) {
		for (int i = 0;i < csm; i++) {
			r = 1 + (rand() % 10);
            a[i] = r;
		}
	} else if (rm == 2) {
		for (int i = 0; i < csm; i++) {
            cout << "input [" << i + 1 << "]" << endl;
			cin >> a[i];
		}
	}
	for (int i = 0;i < csm; i++) {
		cout << a[i] << " | ";
	}
	int min = a[0], max = a[0];
	for (int i = 0; i < csm; i++) {
		if(a[i] < min)
		min = i;

		if(a[i] > max)
		max = i;
	}
	if(min > max) {
		int tmp = max;
		max = min;
		min = tmp;
	}
	for(int j = min; j < max; j++) {
		res *= a[j];
	}
	cout << "res is: " << res << endl;
}
