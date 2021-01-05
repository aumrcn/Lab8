#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	int i = 1;
	double prevbal, interest, total, newbal, intrate, ppy;
	cout << "Enter initial loan: ";
	cin >> 	prevbal;
	cout << "Enter interest rate per year (%): ";
	cin >>  intrate;
	cout << "Enter amount you can pay per year: ";
	cin >>  ppy;
	newbal = prevbal;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	while(newbal > 0){
		cout << fixed << setprecision(2);
		cout << setw(13) << left << i; 
		cout << setw(13) << left << prevbal;
		interest = prevbal*(intrate/100);
		cout << setw(13) << left << interest;
		total = prevbal+interest;
		cout << setw(13) << left << total;
		newbal = total - ppy;
		if(newbal < 0){
			ppy = total;
			newbal = 0;
		}
		cout << setw(13) << left << ppy;
		cout << setw(13) << left << newbal;
		prevbal = newbal;
		cout << "\n";
		i++;	
	}

	return 0;
}
