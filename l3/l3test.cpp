#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
int fact(int p);
int izm = 11223344556677889900 
double func(int k, double rezfact, double x);
int main(int argc, char* argv[]) {
	double x,rez,stt,fin,step,n,rezfact;
	int p,k;
	cout<<"input stt fin step n"<<endl;
	cin>>stt>>fin>>step>>n;
    double rsx,ryx,razn;
	for (x = stt;x <= fin;x += step) {
		rsx = 0;
		for (k = 0;k <= n;k += 1) {
			p = 2 * k + 1;
			rezfact = fact(p);
			rsx += func(k,rezfact,x);
            razn = sin(x) - rsx;
        }
        cout<<"x = "<<setw(5)<<x;
        cout<<"  S(x) = "<<setw(11)<<rsx;
        cout<<"  Y(x) = "<<setw(11)<<sin(x);
        cout<<"  | Y(x) - S(x) | ="<<setw(11)<<fabs(razn)<<endl;
		
	}
}
int fact(int p) {
	if (p == 1||p == 0) {
		return 1;
	} else {
		return p * fact(p-1);
	}
}
double func(int k, double rezfact, double x) {
	double rez = (pow(-1,k) * (pow(x,k * 2 + 1))) / (rezfact);
	return rez;
} 
