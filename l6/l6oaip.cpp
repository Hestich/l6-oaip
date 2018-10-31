#include <iostream>
using namespace std;
int main() {
	int i,j,k,znach,counter = 0;
	cout<<"choose size of massive i and j. и индекс катого столбца 1"<<endl;
	cin>>i>>j>>k;
	cout<<endl;
	int mas[i][j];
	int sek[i*j];
	for (int lines = 0;lines < i; lines++ ) {
		for (int stolb = 0; stolb < j; stolb++ ) {
			cout<<"input A ["<<lines + 1<<"]["<<stolb + 1<<"]"<<endl; 						 
			cin>>znach;												  
			mas[lines][stolb] = znach;							
		}
	}
	for (int lines = 0;lines < i; lines++ ) {
		cout<<endl;
		for (int stolb = 0; stolb < j; stolb++) {
			sek[counter] = mas[lines][stolb];
			counter++;			               
		}
	}
	int chekst,calc = 0;
	for (chekst = 0; chekst < i; chekst++) {
		if (mas[chekst][k] == 0) {
			calc++;
		}
	}
	if (calc != j) {
		sek[k] = 1;
	}
	for (int c = 0;c < i*j; c++/*ПаСхАлОчКа)))*/ ) {
		cout<<sek[c]<<" | ";
	}

}