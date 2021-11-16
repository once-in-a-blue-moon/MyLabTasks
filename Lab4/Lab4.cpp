#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Enter n (n must be natural): ";
	cin >> n;
	if(n>0){	
		long int k = 0, S=0;
		for (int i = 1; i <= n; i++) {
			int a, b;
			if (i % 2 == 1) {
				a = i, b = i * i;
			}
			else {
				a = i / 2, b = i + 7;
			}
			k = pow(a - b, 2);
			S  = S + k;
		}
		cout << "Sum = " << S;
	}
	else {
		cout << "Error! Please enter a NATURAL number!";
	}
	return 0;
}