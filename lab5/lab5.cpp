﻿#include <iostream>
using namespace std;	
int main()
{
	float a, b;
	cout << "Enter a, b:" << endl;
	cin >> a >> b;
	if (a > b)
		cout << "b must be > a";
	else {
		for (int n = a; n <= b; n++) {
			if (n > 0) {
				int k = 0, S = 0;
				cout << "n = " << n << ". dividers are:";
				for (int i = 1; i <= n; i++) {
					if (n % i == 0) {
						k++;
						S += i;
						cout << " " << i;
					}

				}
				cout << ". Number of dividers: " << k << "; Sum of dividers: " << S << endl;
			}

		}
	}
	return 0;
}
