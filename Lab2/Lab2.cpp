#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double x, y;
	string result_pos = "Точка (x,y) належить заштрихованiй частинi площини";
	string result_neg = "Точка (x,y) НЕ належить заштрихованiй частинi площини";
	cout << "Enter x: ";
	cin >> x;
	cout << "\n Enter y: ";
	cin >> y;
	double circle = x * x + y * y;
	if (circle <= 4) {
		if (x >= 0 && y >= 0 && x + y <= 2) {
			cout << result_pos;
		}
		else if (x >= 0 && y < 0 && -x + y >= -2) {
			cout << result_pos;
		}
		else if (x < 0 && y >= 0 && -x + y <= 2) {
			cout << result_pos;
		}
		else if (x < 0 && y < 0 && x + y >= -2) {
			cout << result_pos;
		}
		else {
			cout << result_neg;
		}
	}
	else { cout << result_neg; }
	return 0;
}
