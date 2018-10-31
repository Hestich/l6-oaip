#include <math.h>
#include <iostream>
using namespace std;
int fact(int p);
double func(int k, double rezfact, double x);
int main(int argc, char* argv[]) {

	double x,rez,stt,fin,step,n;
	int p,k,choose;
	cout<<endl<<"input what you want to output"<<endl<<"1) |Y(x)-S(x)| 2) Y(x) 3) S(x) "<<endl;
	cin>>choose;
	double rezfact = fact(p);
	if (choose == 1 || choose == 2 || choose == 3) { 
		cout<<endl<<"input stt fin step n"<<endl;
		cin>>stt>>fin>>step>>n; } else {
			cout<<"Неверное значение"<<endl;
			exit(1);	
		}
	if (choose == 1) {
		for (x  = stt;x <= fin;x += step) {
			for (k = 1;k <= n;k += 1) {
				p = 2 * k + 1;
				cout<<"x = ";
				cout<<x;
				cout<<" sum =";
				cout<<fabs(func(k,rezfact,x) - sin(x));
				cout<<endl;
			}
		}
	} else if (choose == 2) {
		for (x  = stt;x <= fin;x += step) {
			cout<<"Y(x) = "<<sin(x)<<endl;	
		}
	} else if (choose == 3) {
		for (x  = stt;x <= fin;x += step) {
			for (k = 1;k <= n;k += 1) {
				p = 2 * k + 1;
				cout<<"x = ";
				cout<<x;
				cout<<" s(x) =";
				cout<<fabs(func(k,rezfact,x));
				cout<<endl;
			}
		}
	} else {
		cout<<endl<<"Неверное занчение";
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
	double rez = (pow(-1,k)*(pow(x,k*2+1)))/(rezfact);
	return rez;
} 