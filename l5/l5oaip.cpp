#include <iostream>
using namespace std;
int main(){
int a[5],rm;
long int res=1;

	cout<<"1) Random input  2) Manual input"<<endl;
	cin>>rm;
	if (rm == 1) {
		for (int i =0;i < 5; i++) {
			a[i] = (rand() % 100);
		}
	} else if (rm == 2) {
		for (int i = 0; i < 5; i++) {
			printf("Enter a[%d]: ", i);
			cin>>a[i];
		}
	}
	for (int i = 0;i < 5; i++) {
		cout<<a[i]<<" | ";
	}
	int min = a[0], max = a[0];
	for (int i = 0; i < 5; i++) {

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
	cout<<"res is: "<<res<<endl;
}