#include <iostream>
#include <cmath>
using namespace std;
using std::cin;

int main()
{
	int r;
	double pi = 3.1415926535;
	double a;
	double b;
	double c;
	setlocale(LC_CTYPE, "rus");
	cout << "введите угол а: ";
	cin >> a;
	cout << "\n";
	cout << "введите угол b: ";
	cin >> b;
	cout << "\n";
	cout << "введите угол c: ";
	cin >> c;
	cout << "\n";
	cout << "введите радиус вписанной окружности: ";
	cin >> r;
	cout << "\n";
	double n = a + b + c;
	if (n == 180) {
		if (r >= 0) {
			double x = sin(a * pi / 180), y = sin(b * pi / 180), z = sin(c * pi / 180);
			double stor1, stor2, stor3;
			stor1 = 2 * x * r;
			stor2 = 2 * y * r;
			stor3 = 2 * z * r;
			cout << "сторона 1 = " << stor1 << "см\n";
			cout << "сторона 2 = " << stor2 << "см\n";
			cout << "сторона 3 = " << stor3 << "см\n";
		}
		else {
			int i = 0;
			while (i < 50) {
				cout << "ERROR! The user is TOO DUMB! This problem CAN'T be fixed!\n";
				i++;
			}
		}
	}
	else {
		int j = 0;
		while (j < 50) {
			cout << "ERROR! The user is TOO DUMB! This problem CAN'T be fixed!\n";
			j++;
		}
	}
	return 0;
}

