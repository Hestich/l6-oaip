#include <math.h>
#include <iostream>
using namespace std;
int func(double k, int rezfact, double x);
int fact(int p);
int main(int argc, char* argv[]) {

	int p,k,i;
	double x,stt,step,fin,n;
	cout<<"input stt fin step n: "<<endl;
	cin>>stt>>fin>>step>>n;
	int rezfact = fact(k);
	for (x = stt;x <= fin;x + step) {
		for (k = 0;k <= n;k++) {
			cout<<func(k,rezfact,x);
		}
	}
}
int fact(int p) {
	if (p == 1||p == 0) {
		return 1;
	} else {
		return p * fact(p-1);
	}
}
int func(double k, int rezfact, double x) {
	double rez = pow(-1,k)*(pow(x,2*k+1))/int fact(2*k+1);
	return rez;
} 